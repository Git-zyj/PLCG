/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_17 = ((~(max((5470924758718453604 + 2631124781305728935), 1))));
        var_18 += (((min(-99, 13490752828084098103))) ? ((((!var_10) * ((max(98, -73)))))) : ((((max(122, var_9))) + (min(8815386005014090308, -99)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = (43 > var_10);
        var_20 = ((var_1 ? 0 : 91762691));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_21 = ((!(((0 ? var_9 : 72)))));
        arr_7 [i_2] [i_2] = ((-(max(29477589, var_2))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_22 = (((99 ? (min(var_6, 1) : var_3))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    arr_15 [i_3] [i_4] [i_5] [i_5] = ((-38 == ((max(var_15, 1)))));
                    var_23 = ((var_6 ? 32768 : ((min((72 != 1642133736420470768), 43)))));
                    var_24 = (max(((min(-100, 158574476))), (max(var_5, -5619766739389671261))));
                    var_25 = (min(var_25, 73));
                }
            }
        }
        arr_16 [i_3] [i_3] = ((1642133736420470768 ? ((((var_14 / 1) ^ 18373))) : ((var_9 << (11213 && var_2)))));
    }
    var_26 = ((((max(1, 0))) + var_16));
    var_27 = (max(((min((-31 | var_7), 22996))), (((((~(-127 - 1)))) ^ (max(var_2, var_13))))));
    #pragma endscop
}
