/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~47556) < (max(26843, ((3734335705 ? 38955 : 243))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((-((1642070879 ? 0 : ((max(235, 8))))))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, (((!((((((-28642 ? 3105661901 : 12))) ? 250 : ((1 ? 45270 : 32955))))))))));
                    var_22 ^= ((-((((min(2795790711, 1))) ? 0 : ((max(0, 32949)))))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    var_23 = ((-(~-643857234)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [23] [5] [i_0] = (max((((!(0 > 4294967295)))), (((((963537567 ? 65525 : 9704))) ? -1278646185 : 4))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] [i_4] = (((~-17053) ? (((!(~1)))) : 51037));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_24 = (((5 % 1023) ^ ((64518 & (~1644541867)))));
                                var_25 = (((((~(!178)))) > ((~(min(276154244700758649, 1500539712))))));
                                arr_21 [i_0] [i_1] [i_0] [i_1] [i_0] = ((((0 != 32767) && (!10740070764606969230))) ? ((((18446744073709551615 < 1) ? -64512 : (43 == 10740070764606969231)))) : (max((2187305472 + -1644541851), 252)));
                            }
                        }
                    }
                    var_26 &= (((max(2794427574, 12)) != (!45270)));
                    arr_22 [i_0] [i_1] [i_1] [i_3] = ((!(+-1)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 9;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 8;i_9 += 1)
        {
            {
                var_27 = (min(var_27, (!-16052)));
                var_28 = ((!((((max(237, 2794427585)) & (!4))))));
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 7;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_29 -= ((((!60) / 32584)));
                                var_30 = (min(var_30, (((~1500539712) << ((((247 * 4294967295) != 0)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
