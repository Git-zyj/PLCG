/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max(-1097468252, 511)));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] [i_0] [i_1] = (-7813 >= -1128001010);
                    arr_9 [i_0] [i_0] [i_1] = var_8;
                    arr_10 [i_0] [i_0] [i_0] [0] |= (arr_6 [i_2] [i_2] [i_2] [i_2 - 3]);
                    var_13 = (((((((1097468229 & (arr_3 [i_0] [i_0])))) ? 1097468235 : (arr_7 [i_2 - 4] [i_2 - 4] [i_0]))) * (arr_4 [i_0])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_17 [i_4] [i_4] [i_4] = (((~(arr_15 [i_0 + 3] [i_3 + 3] [i_0 + 3]))));
                    var_14 ^= (((5269128367439354533 <= 1737532028) ? 5269128367439354533 : (((322907090 ? 1444113031 : -1)))));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        var_15 = ((((!(arr_0 [i_5] [i_5]))) ? ((((~-12227) < (((!(arr_12 [i_5]))))))) : ((var_1 ^ (0 ^ -12896)))));
        arr_22 [i_5] [i_5] = (arr_11 [i_5]);
        arr_23 [4] |= 31487;
    }
    var_16 *= ((((((var_8 <= var_5) * var_4))) ? -var_3 : var_9));
    #pragma endscop
}
