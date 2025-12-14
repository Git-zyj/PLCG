/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 |= var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_22 = var_14;
                                arr_13 [10] [i_3] [i_2] |= var_15;
                                var_23 = -121;
                                var_24 = var_3;
                                var_25 = (arr_7 [i_0] [i_1] [i_0]);
                            }
                        }
                    }
                    arr_14 [i_2] [i_2] [i_2] [4] = (min(2147483647, (arr_3 [i_0] [1] [12])));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [8] [i_0] &= var_3;
                                var_26 = (max(var_26, ((((((arr_18 [i_0] [i_0] [i_1] [2] [2] [i_5 - 2] [i_6]) != (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) || (~44))))));
                                var_27 += (-2147483647 - 1);
                            }
                        }
                    }
                    var_28 += ((((((arr_5 [8] [10] [i_0]) ? 2147483647 : (arr_5 [i_0] [i_1] [i_0])))) ? (~2147483647) : ((max(var_19, (4294967295 <= 2147483647))))));
                }
            }
        }
    }
    #pragma endscop
}
