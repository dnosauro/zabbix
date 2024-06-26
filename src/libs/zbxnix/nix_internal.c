/*
** Zabbix
** Copyright (C) 2001-2024 Zabbix SIA
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
**/

#include "nix_internal.h"
#include "zbxnix.h"

#include "zbxcommon.h"

static zbx_get_progname_f		get_progname_func_cb = NULL;
static zbx_get_process_info_by_thread_f	get_process_info_by_thread_func_cb = NULL;

void	zbx_init_library_nix(zbx_get_progname_f get_progname_cb, zbx_get_process_info_by_thread_f
		get_process_info_by_thread_cb)
{
	get_progname_func_cb = get_progname_cb;
	get_process_info_by_thread_func_cb = get_process_info_by_thread_cb;
}

zbx_get_progname_f	nix_get_progname_cb(void)
{
	return get_progname_func_cb;
}

zbx_get_process_info_by_thread_f	nix_get_process_info_by_thread_func_cb(void)
{
	return get_process_info_by_thread_func_cb;
}
