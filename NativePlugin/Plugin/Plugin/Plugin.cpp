// Plugin.cpp : DLL �A�v���P�[�V�����p�ɃG�N�X�|�[�g�����֐����`���܂��B
//

#include "stdafx.h"
#include "Plugin.h"


// ����́A�G�N�X�|�[�g���ꂽ�֐��̗�ł��B
extern "C" PLUGIN_API int PluginAdd( int a, int b )
{
	return a + b;
}
