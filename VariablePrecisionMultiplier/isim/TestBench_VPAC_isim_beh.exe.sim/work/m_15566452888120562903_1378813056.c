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
static const char *ng0 = "/media/akilarif/Akil/Studies/Semester 4/EC-252 Xilinx Projects/VariablePrecisionMultiplier/SignExtend32Bits_8Bits.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {7, 0};
static unsigned int ng5[] = {16777215U, 0U};



static void Always_27_0(char *t0)
{
    char t7[8];
    char t11[8];
    char t12[8];
    char t14[8];
    char t41[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t49;
    char *t50;
    char *t51;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2840);
    *((int *)t2) = 1;
    t3 = (t0 + 2552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 32);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 32);
    if (t6 == 1)
        goto LAB8;

LAB9:
LAB10:    goto LAB2;

LAB6:    xsi_set_current_line(29, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng2)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t8, 24, t9, 8);
    t10 = (t0 + 1608);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 32);
    goto LAB10;

LAB8:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1008U);
    t8 = (t3 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t12, 32, t4, t9, 2, t10, 32, 1);
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t15 = (t12 + 4);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB14;

LAB11:    if (t26 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t14) = 1;

LAB14:    memset(t11, 0, 8);
    t30 = (t14 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t30) != 0)
        goto LAB17;

LAB18:    t37 = (t11 + 4);
    t38 = *((unsigned int *)t11);
    t39 = *((unsigned int *)t37);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB19;

LAB20:    t44 = *((unsigned int *)t11);
    t45 = (~(t44));
    t46 = *((unsigned int *)t37);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t37) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t11) > 0)
        goto LAB25;

LAB26:    memcpy(t7, t48, 8);

LAB27:    t51 = (t0 + 1608);
    xsi_vlogvar_assign_value(t51, t7, 0, 0, 32);
    goto LAB10;

LAB13:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB17:    t36 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB18;

LAB19:    t42 = (t0 + 1048U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng5)));
    xsi_vlogtype_concat(t41, 32, 32, 2U, t42, 24, t43, 8);
    goto LAB20;

LAB21:    t49 = (t0 + 1048U);
    t50 = *((char **)t49);
    t49 = ((char*)((ng2)));
    xsi_vlogtype_concat(t48, 32, 32, 2U, t49, 24, t50, 8);
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t7, 32, t41, 32, t48, 32);
    goto LAB27;

LAB25:    memcpy(t7, t41, 8);
    goto LAB27;

}


extern void work_m_15566452888120562903_1378813056_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_15566452888120562903_1378813056", "isim/TestBench_VPAC_isim_beh.exe.sim/work/m_15566452888120562903_1378813056.didat");
	xsi_register_executes(pe);
}
