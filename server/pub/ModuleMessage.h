#pragma once

enum
{
	MODULE_MSG_NOTIFYMSG = 0x00,
	MODULE_MSG_LISTREMOTEFILE,
	MODULE_MSG_LISTLOCALFILE,
	MODULE_MSG_CMDOUTPUT,
	MODULE_MSG_INSTALLED
};

enum
{
	MODULE_TYPE_ERROR = 0x00,
	MODULE_TYPE_INFO,
	MODULE_TYPE_WARNING
};