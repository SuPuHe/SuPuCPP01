/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:33:04 by omizin            #+#    #+#             */
/*   Updated: 2025/09/10 12:50:07 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];

		if (s1.empty() || filename.empty())
		{
			std::cerr << "Line can't be empty" << std::endl;
			return (1);
		}

		std::ifstream file(filename);
		if (!file)
		{
			std::cerr << "Error opening file" << std::endl;
			return (1);
		}
		std::string line;
		std::string replace_filename = filename + ".replace";
		std::ofstream replace_file(replace_filename);
		if (!replace_file)
		{
			std::cerr << "Error opening replace file" << std::endl;
			return (1);
		}
		while (std::getline(file, line))
		{
			std::string result;
			for (size_t i = 0; i < line.size();)
			{
				if (line.compare(i, s1.size(), s1) == 0)
				{
					result += s2;
					i += s1.size();
				}
				else
				{
					result += line[i];
					i++;
				}
			}
			replace_file << result << std::endl;
		}
		file.close();
		replace_file.close();
	}
	else
		std::cerr << "usage: ./sed filename s1 s2" << std:: endl;

	return (0);
}
