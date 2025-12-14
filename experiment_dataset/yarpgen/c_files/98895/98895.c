/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (((((~1) + 2147483647)) << (1 - 1)));
        var_21 *= ((!(1 == var_5)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 = ((+(((var_17 + 2147483647) >> var_2))));
        var_23 = (!-1040018630);
        arr_6 [i_1] = ((-2029606667 ? (((!(var_16 || var_12)))) : (((!1) % 127))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [15] [i_2 - 2] [10] [i_3] [i_2] = var_13;
                        var_24 = (max(var_24, ((max((499495466 | 0), 1152903912420802560)))));
                        var_25 = ((((!(!9585930879089187858)))) + (((40062 & 1) ? (max(var_8, var_11)) : (!var_14))));
                    }
                }
            }
        }
        arr_15 [i_1] = -1073737728;
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        var_26 &= (max(var_17, var_16));
        var_27 = (max(((var_10 ? var_15 : 1290904183), var_18)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_28 = (min(var_28, (!180)));
                    var_29 = ((((max(-88, ((min(1, 1)))))) << (((((!var_7) | 8836211983280024124)) - 2272569908))));
                    var_30 &= ((~((((0 ? 1 : 0)) ^ ((1 << (var_14 + 38)))))));
                }
            }
        }
    }
    var_31 = var_17;
    #pragma endscop
}
