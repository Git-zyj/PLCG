/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!((min(var_5, 546636883))))));
    var_11 = var_3;
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [2] [4] = var_3;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_13 *= (arr_4 [3] [3] [i_1]);
            arr_5 [i_0] [1] [i_0] = ((((((-234278712 | 232) ? (arr_3 [i_0] [i_0] [i_0]) : (((193 ? 183 : 146)))))) * var_1));
            arr_6 [15] = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_1])))) ? 244 : (~53));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_14 = (max(var_14, var_7));
                arr_11 [i_0] [i_0] [i_0] [14] = -24;
                arr_12 [i_0] [i_0] = -234278712;
                var_15 &= (((arr_9 [i_0] [i_1] [1]) - (((62 ? -24 : 255)))));
                arr_13 [i_0] [i_1] [i_1] [i_2] = ((var_0 ? (min(-21425, 18446744073709551615)) : (237 - 100250380)));
            }
            var_16 ^= (((((arr_8 [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_1] [i_1]) : ((~(arr_7 [i_0] [i_1]))))) | ((((arr_4 [10] [i_0] [i_1]) > 24)))));
        }
        arr_14 [i_0] = -7;
    }
    #pragma endscop
}
