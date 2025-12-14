/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (min(((((var_4 + 9223372036854775807) >> (var_10 - 11571)))), (var_8 * var_14)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 += (((max(((max(var_6, var_17))), (min(13372965076882603743, 13)))) ^ (((((var_13 >= var_2) || (((var_3 ? var_0 : var_10)))))))));
        var_21 = ((((var_8 + ((32748 ? 5073778996826947860 : -40)))) * var_17));
        var_22 = ((((~var_0) & (arr_1 [i_0] [i_0]))));
        var_23 -= -var_2;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_7 [3] = var_14;
        var_24 = (((arr_4 [i_1 + 1]) ? (((((max(-32749, 5073778996826947872))) && 9223372036854775807))) : var_4));
        arr_8 [i_1] [i_1] = var_10;
        var_25 = (max((arr_0 [i_1]), (((var_7 && var_3) ? -var_6 : var_3))));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = ((max((max(var_7, var_7)), ((((arr_10 [i_2 + 1]) <= var_6))))));
        var_26 -= ((max(13372965076882603733, (arr_1 [i_2] [i_2 + 2]))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                var_27 ^= (max(var_12, ((-((var_5 << (((arr_9 [i_4]) - 506333049))))))));
                var_28 -= ((((var_2 ? (arr_11 [i_3] [i_4]) : (arr_6 [i_3] [i_4]))) << var_12));
                var_29 = (1 >= 13372965076882603724);
            }
        }
    }
    var_30 *= (max(var_8, (((max(3480815827, -9214604308729285639)) >> ((max(var_8, var_18)))))));
    var_31 &= (max((min(var_13, var_14)), (~var_1)));
    #pragma endscop
}
