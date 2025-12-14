/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(var_17, var_5);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((arr_0 [i_0] [i_0]), (arr_1 [2])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((17223 ? (arr_1 [i_1]) : ((max(1991, (arr_8 [i_0] [i_1] [i_1] [i_3])))))))));
                                arr_11 [i_0] [i_0] [i_2] = (~137438920704);
                            }
                        }
                    }
                    var_20 = (max(var_20, (((1432761029 > (((arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 1]) ^ var_17)))))));
                    var_21 = (min(((-(((((arr_0 [i_0] [i_1]) + 2147483647)) << (var_13 - 4451491324893444361))))), ((((arr_4 [i_0] [i_0] [i_2 + 1]) >= (arr_4 [i_0] [i_0] [i_0]))))));
                }
            }
        }
        arr_12 [6] [i_0] = (((min(1, var_7))) ? (((arr_10 [3] [i_0] [i_0] [i_0] [i_0] [i_0] [1]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))) : (arr_4 [i_0] [i_0] [i_0]));
    }
    var_22 = (min((var_17 < 1), var_7));
    #pragma endscop
}
