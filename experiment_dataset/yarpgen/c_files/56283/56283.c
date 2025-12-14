/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_5, ((max((var_3 >> var_7), (max(6200540662940146006, 0)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((max((0 + 60890), ((max((max(130, 65532)), 1))))))));
                                var_15 = (min(var_15, (((((((arr_6 [i_4] [i_0 + 2] [i_4]) ? 6200540662940146006 : (arr_0 [i_0])))) ? ((min((arr_2 [i_4] [i_1]), ((1 ? 1 : (arr_9 [i_2] [6] [i_2] [5])))))) : (min(15790251201424611208, (arr_0 [i_4 + 1]))))))));
                                arr_13 [7] [i_1] [3] [i_2] [i_1] [i_0] = 3976164626883154362;
                                var_16 = ((((min((arr_6 [i_4 - 2] [i_4 - 2] [i_1]), (arr_6 [i_4 + 1] [i_4 + 1] [i_1])))) + ((-8076 ? (arr_6 [i_4 + 1] [i_1] [i_1]) : 51))));
                            }
                        }
                    }
                    var_17 = (((((arr_8 [3] [i_1 + 2] [i_1 + 2]) ? (arr_8 [i_0 + 3] [i_0 + 3] [i_1]) : (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 3])))) ? (max(-2241, (arr_8 [i_0 + 3] [i_1] [i_0 + 3]))) : (65528 | 4));
                }
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}
