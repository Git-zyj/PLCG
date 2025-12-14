/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((min(var_3, var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = ((((((arr_7 [i_2]) - (arr_7 [i_0])))) ? (arr_8 [i_2] [i_1]) : 953212858));
                    var_16 = (!0);
                    var_17 = var_5;
                    arr_10 [i_0] = ((16301296427903750452 ? (arr_7 [i_0]) : ((((16301296427903750452 ? var_6 : (arr_0 [i_0])))))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_18 = (min(var_18, var_5));
                        var_19 = ((!((min(((((arr_5 [12] [5] [i_0]) ? (arr_0 [16]) : 953212858))), (max(var_13, var_2)))))));
                        var_20 -= (((2145447645805801156 - 12662089094339188444) & ((((37 && 2145447645805801155) & (arr_6 [i_0] [i_1] [i_3]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_21 = (arr_12 [i_2] [i_2] [12] [1] [i_2] [i_2]);
                        var_22 = ((27864 ? 12662089094339188441 : 27878));
                        var_23 *= ((((((!(arr_1 [i_4] [i_1]))))) < (((arr_6 [i_0] [i_2] [i_4]) / 3085347754083294471))));
                        arr_18 [4] [i_4] [i_1] [11] [i_2] [23] = (((arr_13 [i_0] [i_0] [i_0] [i_0]) ? (arr_13 [i_0] [i_1] [i_1] [i_4]) : (arr_13 [i_0] [1] [1] [i_4])));
                        arr_19 [i_4] = ((var_6 & (arr_5 [i_0] [i_2] [i_4])));
                    }
                }
            }
        }
    }
    var_24 = (max(var_24, var_4));
    var_25 = (max((min((((3085347754083294471 ? 5223 : var_12))), (max(var_7, var_1)))), ((((6941234684824180945 & var_3) <= 37672)))));
    #pragma endscop
}
