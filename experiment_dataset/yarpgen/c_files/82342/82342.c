/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((var_5 ? (max((-32767 - 1), var_18)) : (((arr_0 [8] [i_0]) & 1970374399004771792))))) ^ ((~(((arr_1 [4]) & var_12)))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] = ((~((-(((arr_3 [3] [i_1] [i_1]) ? (arr_0 [i_0] [i_1]) : 8126464))))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_20 = (max((min(((-(arr_8 [i_1] [i_2]))), 228)), (min((min(21, 18446744073709551615)), (((arr_5 [i_2 - 1]) ? 0 : (arr_8 [i_2] [i_3])))))));
                        var_21 = (min(var_21, (arr_9 [i_1] [i_2 + 1] [i_2 - 1] [i_2 - 1])));
                        var_22 = ((~(((arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ^ ((-1970374399004771802 ? var_9 : (arr_12 [i_0] [i_1] [i_2] [i_3])))))));
                        var_23 &= (((arr_3 [14] [i_2 - 1] [i_2 + 1]) ? var_0 : (arr_3 [i_2 - 1] [i_2] [i_2 - 1])));
                        arr_13 [i_0] = (min(((((var_17 ? var_10 : var_15)))), (min(var_15, (((arr_10 [i_3] [1] [i_2 - 1] [i_1] [i_0]) & (arr_7 [i_1] [i_1] [i_1])))))));
                    }
                }
            }
            var_24 = ((-(arr_4 [i_0])));
            var_25 = (arr_1 [3]);
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_26 = var_7;
            var_27 -= (((~(arr_4 [i_0]))));
            var_28 = (max(var_28, ((max((-9223372036854775807 - 1), -1970374399004771805)))));
            var_29 = (max((((var_3 & 3568688790) | (arr_14 [i_4]))), (arr_3 [i_0] [i_0] [10])));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_30 = -var_11;
            var_31 = ((3549685343 ? 20554 : -24107));
            arr_18 [15] [15] |= (((4 << (var_13 + 16))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    {

                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            arr_28 [i_6] = ((+((((var_4 | 1970374399004771804) >= 4194303)))));
                            arr_29 [i_6] [i_0] = ((max(18446744073709551615, (arr_26 [i_8 + 1] [i_9] [i_9] [i_9 + 1] [i_9 - 1] [i_9] [i_9]))));
                        }
                        var_32 = (max(var_32, (((~((((((arr_3 [i_8] [4] [4]) & 39))) ? var_9 : (arr_1 [i_8 + 1]))))))));
                        var_33 = ((min((arr_23 [i_0] [i_0] [i_0] [i_7] [i_7] [i_8 + 1]), (arr_5 [i_8 - 2]))));
                        var_34 = (var_19 & var_5);
                    }
                }
            }
            arr_30 [i_0] |= ((1 ? (min((((arr_12 [i_0] [i_6] [i_6] [4]) ? var_16 : (arr_10 [i_0] [i_0] [i_6] [i_6] [i_6]))), (arr_26 [i_0] [i_6] [i_6] [i_6] [i_0] [i_0] [i_0]))) : ((min(((25 ? -8331580227609114124 : var_11)), 12)))));
            arr_31 [i_6] = (arr_3 [i_0] [i_0] [i_6]);
        }
        var_35 = (min(var_35, ((((((~(arr_24 [1] [i_0] [i_0] [i_0] [i_0])))) ? (((-4513648320972350815 != 4) % ((120 % (arr_14 [i_0]))))) : (~6))))));
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        var_36 = (max((((((max(var_7, (arr_23 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])))) >= -255))), ((~((var_15 ? 32763 : 29295))))));
        var_37 = (0 ? 2359012773618667921 : 25);
        arr_34 [i_10] [i_10] = ((max((arr_12 [i_10] [i_10] [i_10] [i_10]), var_1)));
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        arr_38 [i_11] = (~-472646833);
        arr_39 [i_11] = ((((arr_5 [i_11]) ? (arr_24 [i_11] [i_11] [8] [i_11] [i_11]) : (arr_5 [i_11]))) ^ ((max((arr_21 [i_11] [i_11] [i_11]), (arr_25 [i_11] [i_11] [i_11] [i_11])))));
        var_38 = ((var_10 + ((max(var_13, (arr_17 [i_11] [i_11]))))));
        var_39 = (~19);
    }
    var_40 = (~-4513648320972350815);
    var_41 = ((var_17 ? (max(var_18, ((max(var_14, 7016))))) : ((min(((min(var_7, var_2))), 1)))));
    var_42 = 280949767;
    #pragma endscop
}
