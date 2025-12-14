/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_3 ? (max((203 | 2950901693738620318), 21910)) : (max(var_1, var_6)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_13 = min((min(16844, (max((arr_9 [i_1] [i_3]), var_10)))), (((31 >> (15495842379970931297 - 15495842379970931287)))));
                        var_14 = var_2;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_15 = ((~(((!(arr_9 [i_1] [i_4]))))));
                        var_16 &= var_5;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_17 = ((47449 ^ (arr_0 [i_0 - 2])));
                        arr_17 [i_5] [i_5] [i_1] [12] = ((+((((arr_8 [i_0 - 1] [i_0] [6] [3] [i_0]) || (arr_4 [i_5]))))));
                    }

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        arr_22 [i_0] [i_6] [i_1] [i_2] [7] = (((((-(arr_20 [i_0] [i_6 + 1] [12] [11] [i_2] [i_6])))) ? 5910 : (arr_9 [i_0 - 4] [i_6])));
                        var_18 = (min(var_18, ((((arr_7 [i_6 - 1] [4] [i_1]) >> (var_4 + 8511885055644059027))))));
                        arr_23 [7] [7] [i_2] [i_6] [7] [i_6] = (arr_16 [i_6] [i_6] [i_6] [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_19 ^= var_11;
                        arr_26 [i_1] = ((-((var_8 ? (arr_7 [12] [12] [i_0 - 2]) : var_8))));
                        var_20 = (min((max(((-(arr_1 [i_7]))), (arr_24 [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 3] [i_2]))), (arr_14 [i_0] [i_0 - 2] [i_2])));
                        var_21 = ((-((~(arr_0 [i_0 - 3])))));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_30 [2] [14] [i_8] [i_8] = ((!(48684 != 255)));
                        var_22 = max((((arr_9 [i_0] [i_8]) % var_11)), var_1);
                    }
                    var_23 = var_2;
                }
            }
        }
    }
    var_24 = var_9;
    #pragma endscop
}
