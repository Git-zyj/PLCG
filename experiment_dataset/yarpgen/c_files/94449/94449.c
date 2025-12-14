/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 -= (arr_0 [i_0] [i_1]);
                var_12 = (max(var_12, (arr_1 [i_1])));
            }
        }
    }
    var_13 = var_0;
    var_14 = (((min(-514838680, var_1))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 4; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_15 -= ((((((arr_19 [i_2] [i_3] [i_3] [i_2] [0]) | (min((arr_6 [1]), (arr_4 [i_2])))))) ? 19705 : (arr_14 [i_4 + 2])));
                                var_16 = (i_4 % 2 == 0) ? (((((min((max((arr_13 [i_2] [i_3] [i_4] [i_4]), 19705)), 45830))) % (((((arr_6 [i_4]) ^ (arr_17 [i_6] [i_4] [i_4] [i_4] [i_2]))) >> ((((0 ? (arr_10 [i_2] [i_2] [i_2]) : (arr_11 [i_2] [i_4]))) - 14840))))))) : (((((min((max((arr_13 [i_2] [i_3] [i_4] [i_4]), 19705)), 45830))) % (((((arr_6 [i_4]) ^ (arr_17 [i_6] [i_4] [i_4] [i_4] [i_2]))) >> ((((((0 ? (arr_10 [i_2] [i_2] [i_2]) : (arr_11 [i_2] [i_4]))) - 14840)) + 11861)))))));
                                var_17 = (max(var_17, ((((arr_5 [i_4 - 4]) ? (arr_5 [i_4 - 1]) : ((max((arr_5 [i_4 + 3]), (arr_5 [i_4 - 4])))))))));
                            }
                        }
                    }
                }
                var_18 &= ((((((arr_17 [i_2] [i_3] [i_2] [i_2] [i_2]) || (arr_17 [i_3] [i_3] [i_2] [i_3] [i_2])))) % (arr_7 [i_2] [i_3])));
                arr_20 [i_2] = ((((((arr_6 [i_3]) != (arr_10 [i_2] [i_3] [i_3])))) % (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])));
                var_19 = (((arr_18 [i_2] [i_2] [i_2] [20] [10]) % (((arr_12 [i_2]) % (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2])))));
            }
        }
    }
    #pragma endscop
}
