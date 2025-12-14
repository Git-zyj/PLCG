/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((var_4 % var_13) >> ((((max(51444, 255))) - 51426)))), (((255 + -22680) ? var_3 : var_1))));
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((((max(1, 1))) & 4094)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = ((-(229 & 442401518)));
                                var_18 ^= ((max(var_7, var_12)) + (!var_6));
                                arr_10 [i_0] [i_0] [18] [11] [5] [i_4] = ((-((0 % (max(8588620069594505223, 20402))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 |= var_7;
    #pragma endscop
}
