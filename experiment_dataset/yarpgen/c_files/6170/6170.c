/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max(-var_7, ((1 >> (var_1 - 46064))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((((((max(55518, 16435719868393236138)) % var_7))) ? ((((max(55518, var_11))) ? -0 : (~var_7))) : (max((!1), -var_8))));
        var_14 = (max(var_14, (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_2] = (arr_3 [i_0] [i_0]);
                    var_15 = ((((arr_9 [i_0] [i_1]) ? (((arr_3 [i_1] [10]) ? var_12 : -18)) : (arr_1 [i_0]))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_21 [5] [i_5] [i_4] [i_3] [i_0] = (max(((59812 | (arr_11 [i_3] [i_5]))), ((max(55510, 33850)))));
                            var_16 ^= max((((64569 * 28766211495441945) >> (23182 - 23178))), ((((((arr_11 [i_0] [i_5]) != (arr_1 [i_5]))) ? var_11 : 87))));
                        }
                    }
                }
            }
            var_17 = ((((((1 ? var_10 : (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (max(16435719868393236126, (arr_19 [i_0]))) : 65530));
        }
        var_18 = (((((((var_0 != (arr_6 [i_0] [4])))) & (arr_11 [i_0] [i_0]))) <= (((((arr_16 [i_0] [i_0]) ^ (arr_6 [i_0] [6])))))));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_19 = (min(var_19, (arr_22 [i_7] [i_7])));
        var_20 += arr_22 [i_7] [i_7];
    }
    #pragma endscop
}
