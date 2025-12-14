/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_8 ? (var_7 == var_5) : var_3));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 ^= var_7;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_12 ^= (max((arr_3 [1]), (arr_1 [i_0])));
                    var_13 *= (arr_4 [i_2]);
                    arr_11 [i_2] [i_1] [11] [17] [10] = (max((((var_4 ? 697873504 : (arr_3 [i_0])))), (arr_7 [i_0] [i_0] [i_2] [i_0])));
                }
                arr_12 [i_0] [i_1] [1] = ((((((arr_10 [i_2]) ? (arr_10 [i_0]) : (arr_10 [13])))) ? (((arr_0 [i_0] [17]) ? (((arr_3 [6]) ? var_2 : 3008678127)) : (((4579690806067414034 ? 1970324836974592 : (arr_2 [i_0])))))) : (((arr_9 [i_0] [i_0] [i_0] [16] [i_0] [i_0]) ? -10026645653763741965 : (((var_4 ? (arr_9 [i_0] [16] [16] [i_0] [i_0] [i_0]) : var_5)))))));
            }
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                arr_16 [i_1] [14] [14] [i_1] = 15309681511567006946;
                var_14 += (min((min(99, ((var_5 ? (arr_8 [i_0] [i_0] [i_1] [13]) : (arr_1 [i_0]))))), ((min(7680, var_9)))));

                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_15 = (max(var_15, (arr_14 [i_0])));
                    var_16 = (max((~var_1), ((~(arr_1 [i_0])))));
                    var_17 = (max(var_17, ((((((arr_3 [i_4 - 1]) | 9037537808615870905)) / (min((arr_3 [i_4 + 1]), (arr_3 [i_4 - 2]))))))));
                    var_18 = (max(var_18, (arr_7 [12] [12] [17] [18])));
                    var_19 += (((+-0) ? (arr_17 [i_0] [i_1] [i_4] [i_5]) : 23811));
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_20 = var_2;
                    var_21 = (min(var_21, (arr_7 [11] [i_1] [i_4] [i_6])));
                    var_22 = var_9;
                    var_23 ^= ((((((arr_6 [i_0] [i_4 + 2] [i_0]) - var_9))) ? (arr_4 [i_0]) : ((7685 ? (2 || 4294967295) : ((3342167915 ? -7686 : (arr_17 [i_0] [i_0] [i_4] [i_6])))))));
                    var_24 = (min(var_24, var_3));
                }
            }
            var_25 = (min(var_25, (!11626671858757326852)));
            /* LoopNest 3 */
            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_8] [i_9] = (((arr_4 [i_8]) ? ((1636270855 << ((((var_5 ? 15309681511567006946 : (arr_26 [5] [i_1] [i_7]))) - 15309681511567006929)))) : (arr_5 [i_0] [6])));
                            var_26 -= 99;
                        }
                    }
                }
            }
            arr_29 [8] [1] &= (((~68) ? (((((0 ? (arr_0 [17] [i_1]) : (arr_17 [i_0] [i_1] [12] [i_1])))) | (max(var_2, (arr_20 [i_0] [i_1] [i_0] [7]))))) : (min(var_2, 13))));
            arr_30 [i_0] [i_1] = ((((max((min(var_1, var_8)), ((((arr_8 [i_1] [i_1] [i_0] [i_1]) ? var_6 : (arr_2 [i_0]))))))) ? (((arr_0 [1] [i_1]) & (arr_0 [i_0] [i_1]))) : (var_6 ^ var_0)));
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_27 = ((((min((~var_1), (var_7 ^ 267911168)))) ? (min(144080003703767040, var_3)) : (!320095317)));
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    {
                        var_28 &= ((-(((arr_1 [i_11 + 1]) ? ((~(arr_35 [i_12] [i_12]))) : var_2))));
                        var_29 = (min(var_29, (arr_19 [i_0] [i_0] [i_0])));
                        arr_37 [i_11 - 1] [i_10] [i_11] = (((arr_7 [i_0] [i_10] [i_11 - 1] [i_12]) && ((min((var_0 >= var_5), 188614718)))));
                        arr_38 [i_0] [i_0] [i_11 + 2] [i_12] [i_10] = (i_10 % 2 == 0) ? ((min((((min((arr_25 [i_10] [i_12]), (arr_3 [i_0]))) >> (((arr_32 [i_11] [i_10]) - 55)))), (arr_35 [i_0] [i_10])))) : ((min((((min((arr_25 [i_10] [i_12]), (arr_3 [i_0]))) >> (((((arr_32 [i_11] [i_10]) - 55)) + 167)))), (arr_35 [i_0] [i_10]))));
                    }
                }
            }
        }
        for (int i_13 = 1; i_13 < 17;i_13 += 1)
        {
            var_30 = (((arr_42 [i_13 + 3]) ? (arr_14 [i_0]) : var_3));
            var_31 &= ((arr_5 [i_0] [i_0]) == (arr_26 [i_0] [i_0] [i_0]));
        }
        var_32 ^= ((~(min((min(var_8, (arr_23 [i_0] [i_0] [i_0] [i_0]))), (min((arr_26 [1] [i_0] [i_0]), var_7))))));
    }
    var_33 = (((var_3 | var_0) ? var_9 : (~12293)));
    var_34 = ((32747 >> ((703805974 ? 14 : var_1))));
    var_35 = var_4;
    #pragma endscop
}
