/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = ((((2453212790645189712 | (-9223372036854775807 - 1)))) ? (min(4618571759341047633, 26)) : 2453212790645189712);
            var_10 &= ((((min((arr_1 [13] [i_1]), 5))) ^ ((var_6 ? ((min(var_1, (arr_1 [6] [i_1])))) : (~var_8)))));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_11 = (var_8 * 27);
            var_12 = (130 ? (-9223372036854775807 - 1) : -1966442810832158445);
            arr_7 [i_0] [i_2] = var_2;
        }

        /* vectorizable */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            var_13 *= arr_9 [i_3];
            arr_11 [i_3] [i_3] = var_1;
            var_14 |= var_5;
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_15 = (min(var_15, (((((min((((arr_12 [12] [i_5]) << (((arr_2 [i_5] [i_4] [i_4]) + 4097577526148291742)))), ((var_8 ? var_2 : 239))))) ? (min((arr_12 [i_4] [i_4]), (-2363140979527897882 & 0))) : (arr_2 [i_4] [i_5] [i_4]))))));
            var_16 = (max(var_16, ((((((~(min(5252274646145674489, 9223372036854775807))))) ? (arr_15 [i_4]) : (arr_0 [i_4] [i_5]))))));
            arr_18 [i_4] [i_5] = ((((~((((arr_14 [i_4]) >= 1)))))) ? (min(((var_3 ? var_1 : var_0)), -var_5)) : 229);
        }
        var_17 &= var_6;
        arr_19 [i_4] [i_4] = (arr_13 [i_4] [i_4]);
        arr_20 [i_4] [5] &= ((6857704786632029018 ? (((!var_7) ? (((!(arr_14 [i_4])))) : (arr_6 [9] [i_4]))) : 178));

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_18 |= ((((((((26 ? 1099509530624 : (-9223372036854775807 - 1)))) ? (((var_7 ? (arr_16 [i_6]) : var_3))) : ((var_4 ? -4618571759341047633 : (arr_8 [i_6])))))) ? (((((255 ? -2666164489125777679 : 17))) ? var_8 : var_3)) : ((((((250 >> (var_9 - 122)))) ? (arr_13 [i_6] [i_4]) : (arr_8 [i_6]))))));
            var_19 ^= ((+(((arr_9 [i_4]) ? 88 : 4861214589657247622))));
            var_20 = min((arr_16 [i_6]), var_5);
        }
    }
    var_21 &= 74;
    #pragma endscop
}
