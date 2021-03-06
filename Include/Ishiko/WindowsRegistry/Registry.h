/*
	Copyright (c) 2015 Xavier Leclercq

	Permission is hereby granted, free of charge, to any person obtaining a
	copy of this software and associated documentation files (the "Software"),
	to deal in the Software without restriction, including without limitation
	the rights to use, copy, modify, merge, publish, distribute, sublicense,
	and/or sell copies of the Software, and to permit persons to whom the
	Software is furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
	THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OROTHER DEALINGS
	IN THE SOFTWARE.
*/

#ifndef _ISHIKO_WINDOWSREGISTRY_REGISTRY_H_
#define _ISHIKO_WINDOWSREGISTRY_REGISTRY_H_

#include "Key.h"

namespace Ishiko
{
namespace WindowsRegistry
{

class Registry
{
public:
	static Key createKey(const KeyPath& keyPath);
	static Key openKey(const KeyPath& keyPath);
	static void deleteKey(const KeyPath& keyPath);
	static Key createSubKey(Key& key, const std::string& path);
	static Key createSubKey(HKEY hiveKey, const std::string& path);
	static Key openSubKey(Key& key, const std::string& path);
	static Key openSubKey(HKEY hiveKey, const std::string& path);
	static void deleteSubKey(Key& key, const std::string& path, bool recursive);
	static void deleteSubKey(HKEY key, const std::string& path, bool recursive);
};

}
}

#endif
