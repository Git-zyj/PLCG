/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (min((((((((1120980904792499488 && (arr_3 [1]))))) - var_8))), ((((min(32758, 192))) ? ((var_9 ? var_0 : (arr_1 [i_1]))) : ((((arr_3 [i_0]) ? (arr_1 [4]) : (arr_3 [i_0]))))))));
                arr_5 [i_0] [i_1] = ((((min((((17325763168917052127 ? var_4 : (arr_4 [i_0] [i_0])))), ((-1960835666 ? 4395899027456 : var_12))))) ? (var_0 < 17325763168917052120) : (((((3 ? (arr_2 [i_0]) : 255))) ? ((((arr_4 [i_1] [9]) + (arr_1 [i_1])))) : ((-4395899027429 ? 4503599627370495 : -2144375578))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = ((-(((arr_14 [i_4] [i_3 + 2] [i_4] [i_4] [i_4] [i_4] [i_3 + 2]) >> (1120980904792499488 - 1120980904792499468)))));
                                var_16 = (~((var_11 ? (arr_1 [i_1]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (((17325763168917052128 || 107) / ((min((var_10 || 9223372036854775806), var_12)))));
    var_18 = var_6;
    #pragma endscop
}
