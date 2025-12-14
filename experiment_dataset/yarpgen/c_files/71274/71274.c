/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((~(((((var_8 / (arr_6 [i_1] [i_2]))) < (arr_7 [i_0 - 3] [i_1] [i_1])))))))));
                            var_14 = ((+(min(((10979 ? (arr_7 [i_1] [i_2] [i_3 - 1]) : -76)), (75 / var_7)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_18 [i_0 + 3] [i_0 + 3] [i_4] [i_4] [i_0] = (((((16519357330078922376 ? 43 : -811412179))) | (((var_9 * (arr_3 [i_0]))))));
                            arr_19 [i_0] [i_0] [i_0 + 2] [6] [6] [i_0] = (max((!1), var_10));
                            var_15 = (max(var_15, (((26957 / ((2097151 ? -40 : -20337)))))));
                            arr_20 [i_0] = (((arr_10 [i_4 - 2] [i_1] [i_4] [i_0 - 2]) >> ((((1302777931618175945 ? -1255795472 : (arr_10 [i_4 - 1] [i_1] [i_4 - 2] [i_0 + 1]))) - 18446744072453756091))));
                            var_16 = (min(var_16, (((70 ? 616995485 : 1927386743630629239)))));
                        }
                    }
                }
                var_17 = (min((var_4 != 62), ((var_0 ? (arr_4 [i_0 - 1] [i_0 - 1]) : (min((arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]), (arr_13 [i_0] [i_0] [i_0])))))));
                var_18 = (max(var_18, (((((((arr_8 [i_0 + 1] [i_0] [i_0 - 2] [i_0] [i_0]) / (arr_9 [i_0] [i_0])))) ? ((39 * ((16777215 ? (arr_11 [i_0] [i_1] [i_1] [i_1]) : var_4)))) : 1)))));
            }
        }
    }
    var_19 ^= (1 <= 9223372036854775807);
    #pragma endscop
}
