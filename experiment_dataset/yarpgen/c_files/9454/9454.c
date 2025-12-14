/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 &= var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((-(63 || 110165202852752201)));
                var_17 = (max(var_17, (110165202852752201 >> -0)));
                var_18 = (((((4294967295 ^ (arr_0 [i_0] [i_0])))) && (((21 | ((((arr_4 [i_0]) / (arr_4 [i_0 + 1])))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_19 = ((((-(arr_13 [i_2] [i_4] [i_3] [i_2]))) % (((((arr_13 [i_2] [i_2] [i_3] [i_4]) + 2147483647)) >> var_0))));
                    arr_14 [i_2] [i_2] [i_2] [i_4] = ((((var_2 <= (arr_10 [i_2] [i_3] [i_4]))) || (((arr_10 [i_2] [i_3] [i_4]) > var_8))));
                    var_20 = (~3522703822);

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_21 = ((442354302 ^ (!var_13)));
                        var_22 = (!16383);
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_25 [i_2] [i_4] [i_2] = (3852612974 || var_3);
                            var_23 &= ((~(arr_18 [i_4] [i_7] [i_4] [i_6])));
                        }
                        var_24 = ((~(((arr_10 [i_6] [i_4] [i_3]) >> (((arr_10 [i_2] [i_3] [i_6]) - 864548845))))));
                        arr_26 [i_4] [i_6] = ((18336578870856799390 - (var_6 - var_6)));
                    }
                    arr_27 [i_4] = ((~(((arr_15 [i_2] [i_2] [i_4]) | (arr_20 [i_2] [i_3] [i_3] [i_4])))));
                }
            }
        }
    }
    #pragma endscop
}
