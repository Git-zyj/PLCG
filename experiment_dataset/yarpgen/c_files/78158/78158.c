/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_10));
    var_12 = (((var_8 ^ -1) ^ ((~(var_9 ^ var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = -28635;
                                var_14 = (min(var_14, ((((((((max((arr_5 [i_1]), var_10))) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (~var_5)))) ? ((((arr_4 [i_2]) | (arr_4 [i_2])))) : ((((((-1919945339 + 2147483647) << 1))) ^ (((arr_6 [i_0]) | (arr_9 [i_0] [i_1] [i_2] [i_3]))))))))));
                            }
                        }
                    }
                }

                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    arr_19 [i_0] = (arr_17 [i_0]);
                    arr_20 [i_0] [i_0] [i_0] [i_5] = ((~(((arr_8 [i_5 - 3] [i_0] [8] [i_5 - 3]) ? (arr_8 [i_5 - 2] [i_0] [i_0] [i_1]) : (arr_8 [i_5 + 1] [i_0] [i_5] [i_0])))));
                    var_15 = ((max((arr_14 [i_5] [7] [i_5 - 3] [i_5 - 3]), (arr_14 [i_5] [i_5 + 2] [i_5 + 1] [i_5 - 3]))) + ((-(arr_14 [i_5] [i_5 - 1] [i_5 - 3] [i_5 + 2]))));
                }
                var_16 = -var_6;
            }
        }
    }
    #pragma endscop
}
