/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_12;
    var_15 = (max((((1 << (49792 && var_12)))), var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, var_11));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 |= (min((max(var_5, 20)), ((((min(var_13, var_8))) * ((var_0 ? 915140573 : var_5))))));
                                var_18 += ((((((((var_11 ? var_13 : 1))) ? 22 : (!var_1)))) ? ((max(var_8, var_0))) : ((97 + (var_7 + var_13)))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_7 ? (((var_9 >> (((min(var_7, 16472074127660633824)) - 2413124763))))) : (((2831083035 & -97) ? var_7 : (255 - var_6)))));
                                var_19 = (min(var_19, (((((115 ? 13723 : -20)) == ((max((2100297402 == var_9), var_13))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((min((max(var_0, var_1)), (!var_7)))) ? (((144 == var_6) ? var_13 : ((-96 ? -7475 : 767307926)))) : var_0));
    #pragma endscop
}
