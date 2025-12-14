/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] [i_2 + 1] = arr_3 [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_2 + 1] [i_0] [i_4 + 1] [i_4 + 1] = 1;
                                var_20 ^= ((((5215920115136544048 ? var_11 : var_13))) ? 1 : 3915022319);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_21 ^= (arr_10 [i_0] [i_0 - 1] [i_0 - 1] [2] [i_0 - 1]);
                                arr_23 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [1] [i_6] = (arr_18 [i_0 - 1] [i_1 - 1]);
                                arr_24 [i_0] = (min(379944991, 1));
                                var_22 = ((-(arr_20 [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 &= var_1;
    #pragma endscop
}
