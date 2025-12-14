/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 ^= var_12;
                                var_15 &= ((((1 + (arr_9 [i_0] [i_0 + 2] [i_0] [i_3] [i_4] [i_4]))) * (arr_4 [i_0] [16])));
                                arr_15 [i_0] [i_0 + 2] [13] [i_0] [i_0] [i_2] = ((var_5 > ((((30269 == var_9) == (var_2 && var_12))))));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0 + 4] = min((1 + 1), (min(((((arr_6 [i_0] [i_1 - 3] [i_1 + 1]) ? var_0 : 4294967283))), (~var_3))));
                arr_17 [14] [i_0 + 4] = (((((min(var_1, -24759))) ? (1 & var_5) : 1)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {
                var_16 -= ((((-(arr_5 [i_5] [i_5] [i_5]))) >> (((4294967283 >= (arr_5 [i_5] [i_5] [i_6 + 2]))))));
                var_17 -= ((((((((max(31397, (arr_10 [i_5] [i_5]))))) < var_12))) >> (max(-9029140827536072097, 1))));
            }
        }
    }
    var_18 = (max(var_18, (((((~((min(var_1, var_11))))) / var_11)))));
    var_19 = var_12;
    #pragma endscop
}
