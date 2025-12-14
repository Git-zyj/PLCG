/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (((min((arr_0 [i_0] [i_0]), (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 162)))) * (((!(arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = (+-136);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_16 = ((var_5 & (arr_5 [i_1 - 1] [i_1 - 1])));
        var_17 = 0;
        var_18 = var_8;
    }
    var_19 = (min(var_19, (((var_11 ? ((((min(var_10, var_2))) ? 13185479299284468576 : ((136 ? var_13 : var_2)))) : (((-((var_13 ? var_10 : var_9))))))))));

    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [i_2] [i_2] = (arr_10 [i_2] [i_2]);
                    arr_15 [i_2] = (((arr_9 [i_2] [0]) & ((-(arr_6 [i_2])))));
                    arr_16 [17] [i_2] [i_2] [i_2] = var_5;
                    var_20 = ((4757610893909870600 ? 53680 : 136));
                    var_21 = (min(1, 11855));
                }
            }
        }
        var_22 |= min(((~(arr_9 [i_2] [i_2]))), (arr_11 [1]));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_23 = (((((((((arr_7 [i_2]) / 15776001224421328146))) || ((min((arr_18 [i_5] [i_5] [i_6]), 13185479299284468572))))))) + ((var_5 ? 104 : ((10491670354922389786 ? var_7 : var_8)))));
                    var_24 = (min(var_24, (((1368207222 ? -9223372036854775793 : (((var_8 >= var_5) ? (arr_18 [i_2] [i_2] [i_2]) : ((802520946 ? var_13 : 319289974)))))))));
                    var_25 = -177554550;
                }
            }
        }
    }
    #pragma endscop
}
