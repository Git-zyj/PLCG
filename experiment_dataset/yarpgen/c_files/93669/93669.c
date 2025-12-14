/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (((arr_2 [i_0]) ^ (min((max(213, (arr_3 [i_0 - 3] [i_0]))), (arr_1 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = -825426007296010978;
                                var_16 = ((((max(((max(1, 255))), (((arr_3 [i_0 + 1] [i_0]) ? (arr_13 [i_0] [i_0 - 2] [i_1] [i_0 - 2] [i_2] [i_3] [i_4]) : 56))))) ? (arr_9 [i_3] [i_2] [i_0]) : (max((max((arr_12 [i_0] [i_0 - 2] [i_0] [i_0] [0]), 0)), ((max(55, (arr_9 [i_0] [i_1] [i_3]))))))));
                            }
                        }
                    }
                    var_17 = ((max((arr_10 [i_0] [i_0 + 1] [i_1] [i_2] [i_2] [i_2 - 2]), (arr_10 [i_0 - 2] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1]))));
                    var_18 ^= (((((6190 ? (arr_4 [i_2 - 1] [i_0 + 1]) : -103)) == (-103 != 17293108396915573624))) || (max(1, 1)));
                    var_19 = (min((arr_9 [i_0 - 1] [i_1] [i_1]), 0));
                }
            }
        }
    }
    var_20 = var_8;
    #pragma endscop
}
