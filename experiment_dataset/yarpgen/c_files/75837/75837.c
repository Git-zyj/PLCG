/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (max((max(((var_7 ? 640278050861161956 : var_12)), -640278050861161946)), var_13));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 *= ((max((min(640278050861161981, var_9)), (arr_3 [i_0] [i_0 + 2]))));
        arr_4 [i_0] = (((arr_0 [i_0] [i_0]) && (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0 + 2] [i_0] [i_0] = ((!((((640278050861161963 - var_7) / ((-6349417385036749036 + (arr_5 [i_0] [i_1] [i_1]))))))));
                    arr_11 [i_0] = -4056385289082056069;
                    arr_12 [i_2] [i_1] [i_0] = arr_9 [i_0] [i_0] [i_0] [i_0];
                    arr_13 [i_0] [i_0 + 2] [i_2] [i_1] = ((~(min((((arr_9 [i_0] [i_0] [i_1] [i_2]) ? -5189007073983721059 : var_13)), (((var_11 >> (((arr_9 [i_0] [i_0] [i_0] [i_0]) - 187)))))))));
                    arr_14 [i_0] [i_1] = -var_14;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_18 ^= (~(arr_5 [i_3] [i_3] [i_3]));
        var_19 = (min(var_19, (((!(arr_7 [i_3] [i_3] [i_3] [i_3]))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_26 [i_4] [i_5] [i_5] = ((((((arr_17 [i_5]) ? var_1 : (arr_8 [i_4] [i_5] [i_5])))) ? (arr_2 [i_5] [i_4]) : (arr_0 [i_4] [i_5])));
            var_20 &= (((arr_18 [i_4]) ? var_7 : var_14));
            arr_27 [12] [i_5] [i_5] = (arr_8 [i_5] [1] [i_4]);
        }
        arr_28 [i_4] = (arr_6 [i_4] [i_4] [i_4]);
        var_21 ^= (arr_24 [i_4] [i_4] [i_4]);
    }
    #pragma endscop
}
