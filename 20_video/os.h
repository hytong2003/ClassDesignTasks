#ifndef OS_H
#define OS_H

class OS {
public:
	virtual void Func() {} //用来体现播放过程与操作系统有关
	virtual ~OS() {}
};

class WinOS : public OS {
public:
	virtual void Func();
	virtual ~WinOS() {}
};

class LinuxOS : public OS {
public:
	virtual void Func();
	virtual ~LinuxOS() {}
};

#endif // !OS_H


