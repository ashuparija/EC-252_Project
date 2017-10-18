/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/media/akilarif/Akil/Studies/Semester 4/EC-252 Xilinx Projects/VariablePrecisionMultiplier/ShiftLeft8Bits_40Bits.v";
static unsigned int ng1[] = {0U, 0U};



static void Always_26_0(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 2360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2680);
    *((int *)t2) = 1;
    t3 = (t0 + 2392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    xsi_vlogtype_concat(t4, 48, 48, 2U, t7, 40, t5, 8);
    t6 = (t0 + 1448);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 48);
    goto LAB2;

}


extern void work_m_00415644981243692535_0738241293_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00415644981243692535_0738241293", "isim/VariablePrecisionMultiplier_isim_beh.exe.sim/work/m_00415644981243692535_0738241293.didat");
	xsi_register_executes(pe);
}
