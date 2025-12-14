/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (~(max(((1866768863 ? 39 : 225)), -1152416301)));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_17 = (max(var_17, (+-216)));
        arr_3 [i_0] [i_0] = var_8;
        var_18 = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    {
                        var_19 = (max(var_19, (((-(((209 < (max(46, -4))))))))));
                        arr_15 [12] [i_2] [i_2] [i_2] [i_4 - 2] = (((~9520) ? ((((3317362738 < ((max(-223126507, 221))))))) : ((~(min(3317362759, (arr_6 [i_1 - 1] [i_2] [i_2])))))));
                        arr_16 [i_2] = ((-((((10906953041123650889 && 39) || var_1)))));
                    }
                }
            }
        }
        arr_17 [i_1] [i_1 - 1] = (max((((arr_2 [i_1 + 1]) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 + 1]))), (((arr_2 [i_1 + 2]) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 - 1])))));
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            var_20 = ((var_7 ? ((((arr_11 [i_5 + 1]) < (~var_4)))) : var_6));
            var_21 = var_6;
        }
        arr_23 [3] [i_5] = 0;
    }
    var_22 = var_4;
    #pragma endscop
}
