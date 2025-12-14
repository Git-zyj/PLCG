/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((((241 ? var_14 : -23273)) ^ (max(var_2, var_10))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 241;
        arr_3 [9] = (arr_1 [i_0]);
        var_18 -= var_3;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = (-24351 % 944859310);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_19 = 1008;
                        arr_18 [i_1] = ((((((arr_13 [i_1]) + 23261))) ? (arr_16 [i_4] [9] [i_2] [i_1 + 1]) : (arr_4 [i_1])));
                    }
                }
            }
            var_20 &= (((arr_10 [14]) % 23273));
        }
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                arr_24 [i_1] [13] [i_5] [i_1] = (max(-23292, (max(((((arr_21 [i_1] [i_1]) == -1438965784))), (arr_17 [i_6] [i_6] [i_5 - 1] [i_5] [i_1 + 1] [i_1])))));
                var_21 ^= ((((((arr_6 [i_1 + 1]) >> (((arr_6 [i_1 - 1]) - 1256700581))))) ? ((min(239, 48))) : (-23292 <= 4294967295)));
                arr_25 [i_1 - 1] [i_1] [i_1] [i_1 - 1] = ((((max((arr_23 [i_1] [i_1] [i_1]), (((!(arr_9 [i_1] [i_5 + 1]))))))) && ((!(!6625302508445767425)))));
                arr_26 [i_1] [i_1] [10] [i_6] = (max(((var_2 ? (((arr_1 [i_5]) ? 1392354829 : var_10)) : 1438965783)), (1 / -23639)));
                var_22 = (arr_13 [i_1]);
            }
            arr_27 [i_1] [i_1] = (arr_1 [i_5 + 1]);
            var_23 = (min(var_23, (((((max(((9223372036854775807 + (arr_8 [i_1] [i_1 + 1] [i_5 - 1]))), var_8))) ? (arr_21 [i_1] [12]) : (arr_21 [i_1] [4]))))));
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_24 ^= (((((-(~19823)))) ? 118 : (min((arr_20 [i_7]), (min(var_4, (arr_10 [i_7])))))));
            arr_30 [i_1] = ((-((-(arr_15 [i_7])))));
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            arr_33 [i_1] [i_1] = 23645;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        arr_41 [3] [i_1] [i_9] = ((14 / (-32767 - 1)));
                        var_25 = (min(var_25, ((((((3405814827842161163 ? -67 : 127))) <= ((var_10 >> (((arr_37 [i_1]) + 2202)))))))));
                    }
                }
            }
            var_26 = (((((((max(-23292, (arr_39 [14] [i_1 + 1] [i_8] [5])))) ? (min(-16, 17200780119782666616)) : 4294967295))) ? ((((max(-14012, 248))))) : (((arr_36 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]) ? (arr_4 [i_1]) : var_10))));
            arr_42 [i_1] = ((max(23253, (var_11 < var_7))));
        }
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        arr_46 [i_11] = (-((((~(arr_44 [i_11] [i_11]))) + 23622)));
        arr_47 [i_11] = ((((((max((arr_45 [i_11]), 4))) ? -26758 : ((var_8 ? (arr_1 [5]) : var_8)))) * var_1));
    }
    var_27 = (((((((max(var_9, var_7))) ^ var_16))) && var_5));
    var_28 = (min(var_28, ((min((~var_12), var_10)))));
    var_29 = (!var_7);
    #pragma endscop
}
