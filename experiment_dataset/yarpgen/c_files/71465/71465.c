/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (1 && ((min(1, 58))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_21 &= (((((((var_13 + 2147483647) << (var_8 - 175))))) << (((-1391390931 + 1391390959) - 24))));
                            var_22 -= ((~((~(arr_2 [i_3] [i_3 + 1] [i_3 - 2])))));
                            var_23 = (max(var_23, ((((((var_13 ? (arr_2 [i_0] [i_0] [i_0]) : var_3)) & (~1))) ^ (min((max((arr_8 [i_0] [i_0] [i_0] [i_0]), -58)), ((min((arr_6 [12] [8]), var_8)))))))));
                            var_24 ^= var_5;
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, var_6));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_26 = (min(var_26, (1391390948 - 13935320848813679577)));
                    var_27 = (max(var_27, ((((max(var_8, (arr_13 [i_4 + 4] [i_4 + 3]))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_28 += 55;
                                arr_23 [1] [2] [8] [i_7] [i_7] [i_7] &= (min(((16383 ? 1 : 217)), ((((arr_11 [i_8]) + (arr_14 [i_4] [i_7] [15]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = ((var_0 ? var_3 : (max(((32765 ? 0 : 1)), var_10))));
    #pragma endscop
}
