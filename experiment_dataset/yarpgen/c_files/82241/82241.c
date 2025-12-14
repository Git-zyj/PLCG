/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 *= (arr_6 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = ((((max(32765, 27838))) ? (arr_9 [i_0] [i_0] [i_0 + 4]) : ((-27838 ? -27838 : 19))));
                                var_13 = (min(((4294967295 >> (-27816 + 27831))), var_5));
                                var_14 = (min(((min(403307103, -27838))), (((arr_4 [i_0 + 3] [i_2 - 1] [i_2 - 1]) ? (arr_4 [i_0 + 3] [i_2 - 1] [i_2 + 1]) : var_3))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((max((-2147483647 - 1), -124616087)))));
                            arr_23 [i_0] [i_1] [i_5] [i_6] = var_1;
                            arr_24 [i_1] [i_0] = (arr_15 [i_0 - 2] [i_1] [i_6]);
                        }
                    }
                }
            }
        }
    }
    var_16 = var_7;
    var_17 = (var_8 - var_1);
    #pragma endscop
}
