// Copyright (C) 2001-2003
// William E. Kempf
//
// Permission to use, copy, modify, distribute and sell this software
// and its documentation for any purpose is hereby granted without fee,
// provided that the above copyright notice appear in all copies and
// that both that copyright notice and this permission notice appear
// in supporting documentation.  William E. Kempf makes no representations
// about the suitability of this software for any purpose.
// It is provided "as is" without express or implied warranty.

#ifndef BOOST_NAMED_WEK031703_HPP
#define BOOST_NAMED_WEK031703_HPP

#include <string>

namespace boost {
namespace detail {

class named_object
{
protected:
	named_object();
	named_object(const char* name);
	~named_object();

public:
	std::string name() const;
	std::string effective_name() const;

protected:
	std::string m_name;
};

} // namespace detail
} // namespace boost

#endif // BOOST_NAMED_WEK031703_HPP
