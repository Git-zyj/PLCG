/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((0 ? (arr_3 [4]) : ((-(max(-816644203, (arr_2 [i_1]))))))))));
                var_19 += ((((-((var_1 * (arr_2 [i_1]))))) | (arr_3 [10])));
            }
        }
    }
    var_20 = (var_14 - -var_3);
    var_21 = (16383 >= -22);

    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        arr_7 [i_2 - 2] [i_2] = ((((var_8 ? -1 : var_15) + var_15)));
        var_22 ^= ((min(var_9, 242)));
        arr_8 [i_2 + 1] = (arr_2 [i_2]);
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = (arr_11 [i_3]);
        arr_13 [i_3] = ((var_13 / (((~(arr_11 [i_3]))))));
        arr_14 [i_3] = (((((+(((arr_11 [6]) | (arr_10 [18] [i_3])))))) ? (((!(arr_9 [i_3])))) : var_9));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 24;i_4 += 1)
    {
        arr_19 [i_4 - 2] [6] = (((((((arr_15 [i_4] [i_4]) ? var_1 : 816644202)) + 2147483647)) << (((((arr_17 [i_4]) + 64)) - 17))));
        arr_20 [i_4] [i_4 - 1] = -62;
        var_23 ^= -816644202;
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_24 = ((-816644202 ? -816644206 : 1644834381479007338));
        var_25 = (arr_17 [i_5]);
    }
    #pragma endscop
}
