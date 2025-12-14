/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((max((~var_3), var_11))) ? var_4 : -var_5)))));
    var_14 = ((var_5 ? (max(var_6, ((var_9 ? var_4 : 32766)))) : (var_6 && var_8)));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_15 = ((arr_0 [i_0 + 1]) == ((var_12 ? (arr_3 [i_1] [i_0]) : var_3)));
            var_16 = (((((arr_1 [i_1] [i_1]) || var_3)) || (((63 ? -10960 : 2145386496)))));
            var_17 = (+(((arr_2 [i_0]) ? var_11 : var_8)));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_18 = (max(var_18, ((min((arr_3 [i_0] [i_3]), (188719425 || 2675277440))))));
                    var_19 *= (arr_7 [i_2] [i_2] [i_2]);
                    var_20 = ((((var_0 > (arr_0 [6]))) || ((min(var_12, (arr_7 [i_0 - 1] [i_0] [i_0 - 1]))))));
                    var_21 &= var_6;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_21 [i_6] [i_6] [i_6] [i_4] = (max((arr_0 [i_4]), (arr_0 [i_5])));
                    var_22 |= (((max((~-746588491), (var_2 && var_9))) <= (((((var_3 ? (arr_7 [i_4] [i_5] [i_6]) : var_0)) <= (var_3 / var_8))))));
                    var_23 = var_1;
                    var_24 = (max(var_24, 1751565307));
                }
            }
        }
        arr_22 [i_4] [7] &= ((!((min((arr_1 [i_4] [i_4]), var_1)))));
    }
    var_25 ^= (~var_9);
    #pragma endscop
}
