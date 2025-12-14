/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_18 *= ((!((((arr_1 [10]) - (arr_1 [8]))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_19 *= ((((((arr_1 [i_1]) ? 104 : (arr_1 [i_1])))) >= (max((arr_1 [i_1]), 4150769765))));
            var_20 = (max(((max(-4668, 1))), ((20100 ? (arr_1 [i_0]) : (arr_3 [i_0] [9] [i_0 - 1])))));
        }
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            arr_7 [i_0] [i_2] [i_0] = (min((arr_2 [i_0]), ((~(min(-7098184845962140396, 5665))))));
            arr_8 [i_0] = var_10;
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_21 *= (((~(arr_3 [i_4] [i_3 + 1] [i_4]))));
                        var_22 = ((5669 >> (4668 - 4638)));
                        var_23 = (arr_11 [i_0] [i_0] [i_2] [6] [i_3] [i_4]);
                        var_24 = 8257536;
                        var_25 ^= (((((((arr_6 [i_0] [13] [i_3]) ? (arr_11 [i_3] [i_3] [10] [i_4] [i_3 - 1] [i_4]) : (arr_2 [i_3])))) ? ((((var_1 && (arr_5 [i_0] [i_4]))))) : 0)));
                    }
                }
            }
        }
        var_26 = (!47761);
    }
    var_27 += ((var_8 & (!var_13)));
    #pragma endscop
}
