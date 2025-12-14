/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 *= (((arr_7 [i_0] [i_0] [i_2]) == ((1 ? ((((var_17 + 2147483647) << (var_19 - 499383673)))) : (arr_9 [i_0] [1] [i_2] [1])))));
                    arr_10 [i_2] [i_2] = (arr_9 [i_0] [i_1] [18] [i_1]);
                    var_21 *= (((((((min(var_6, var_9))) ? var_16 : 4044872931))) ? ((((((((arr_5 [i_2] [i_0]) ? var_7 : -28))) && ((max(var_1, var_9))))))) : 1760775223));

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        var_22 = var_7;
                        arr_13 [i_0] [9] [i_0] [i_3 + 1] = (((!-8121437344723016767) >> (((arr_8 [i_3 + 2] [i_3 + 4] [i_3 - 3] [i_3]) + 116))));
                        var_23 = ((!(71 || -1382680572)));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_4] = (((((4503505137811092589 ? (arr_6 [i_0] [i_0] [i_0]) : 1))) == var_11));
                        arr_18 [i_4] [i_2] = (((((1 ? (arr_16 [i_2] [i_1] [i_2] [i_0] [i_0] [i_4]) : 7))) ? ((((arr_7 [i_0] [i_1] [i_2]) <= var_5))) : (((arr_9 [i_0] [17] [i_2] [i_4]) ? (arr_6 [i_1] [7] [i_1]) : (arr_14 [i_0] [i_4] [i_0] [i_0])))));
                        arr_19 [14] [i_4] [i_4] [i_4 - 2] [i_1] [i_4 - 3] &= (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) % var_13));
                        var_24 = (arr_8 [i_0] [i_1] [i_2] [i_0]);
                    }
                    var_25 ^= (max((max(3623415570226073901, ((max((arr_8 [i_0] [i_1] [i_2] [i_2]), (arr_14 [i_2] [i_1] [i_2] [i_2])))))), ((((((-(arr_16 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0])))) ? (arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2]) : (arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                }
            }
        }
    }
    var_26 &= var_7;
    #pragma endscop
}
