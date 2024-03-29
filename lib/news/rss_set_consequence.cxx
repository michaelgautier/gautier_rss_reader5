/*
Copyright 2018 Michael Gautier

This file is part of Gautier RSS System by Michael Gautier.

Gautier RSS System by Michael Gautier is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

Gautier RSS System by Michael Gautier is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with Gautier RSS System by Michael Gautier.  If not, see <http://www.gnu.org/licenses/>.

Portions of the POCO C++ Libraries utilize the following copyrighted material, the use of which is hereby acknowledged.
POCO C++ Libraries released under the Boost Software License; Copyright 2018, Applied Informatics Software Engineering GmbH and Contributors;
C++ Standard Library; Copyright 2018 Standard C++ Foundation.
*/
#include "rss_set_consequence.hxx"

using namespace std;
using cls = news::rss_set_consequence;

bool cls::add(const rss_data_consequence_spec& spec) {
    int set_size = size();

    _set.push_back(spec);

    return set_size < size();
}

std::vector<news::rss_data_consequence_spec>::size_type cls::size() {
    return _set.size();
}

news::rss_data_consequence_spec& cls::operator[](std::size_t idx)       {
    return _set[idx];
}

const news::rss_data_consequence_spec& cls::operator[](std::size_t idx) const {
    return _set[idx];
}
