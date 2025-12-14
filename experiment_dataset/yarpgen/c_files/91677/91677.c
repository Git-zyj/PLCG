/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 -= max((((!(arr_0 [16])))), var_3);
        var_19 = (((((!(arr_0 [i_0])))) <= (((((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) || var_1)))));
        var_20 = ((((min((arr_0 [i_0]), (arr_1 [i_0])))) ? (min(431810506239207360, -1141755597)) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_21 = (max(((((min((arr_9 [i_1]), var_14))) || (arr_5 [i_2]))), (((((-19 ? -425717186 : var_10))) >= (min(-827477793, var_2))))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_22 = (-223133676 ? 0 : 15);
                arr_13 [i_1] [i_2] [i_1] [i_3] = (((arr_9 [i_1]) != var_4));
            }
            var_23 = ((arr_4 [i_1]) | (((!(arr_4 [i_2])))));
            arr_14 [i_1] [i_1] [i_2] = ((((var_14 ? (arr_5 [i_1]) : (arr_5 [i_2])))) ? ((~(arr_12 [i_1] [i_1] [i_1]))) : (169 == -2674567312248755234));
            var_24 |= ((var_4 ? 1 : 3));
        }
        arr_15 [i_1] = ((!((((arr_1 [i_1]) ? (arr_1 [i_1]) : var_6)))));

        /* vectorizable */
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            var_25 = ((20725 ? 9 : 53481));
            arr_18 [i_1] [i_4] [i_1] = ((!(arr_5 [i_4 - 2])));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_26 = ((-(arr_4 [i_6])));
                var_27 = (min(((((min(var_3, 39))) ? (2674567312248755232 | 3070949776) : (var_8 == var_10))), var_6));
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_28 = (max((min(-2096036979, 1971809014)), (((-(arr_27 [i_1] [i_5]))))));
                            var_29 = ((!((max(((170580010305686452 ? -19 : (arr_11 [i_1] [i_1] [i_7] [i_8]))), var_15)))));
                            arr_31 [i_1] [i_5] [i_7] [i_8] [i_8] [i_9] [i_1] = (((((arr_21 [i_5] [i_7] [i_8] [i_9]) ? (arr_21 [i_9] [i_8] [i_7] [i_1]) : (arr_21 [i_1] [i_7] [i_7] [i_8]))) != (((!(arr_21 [i_1] [i_5] [i_7] [i_8]))))));
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_30 = ((!((max((arr_3 [i_7]), 2096036979)))));

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        arr_36 [i_11] [i_1] [i_7] [i_1] [i_1] = 15;
                        var_31 = var_8;
                    }
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        var_32 = min((((arr_11 [i_12 - 1] [i_1] [i_7] [i_10]) ? (arr_11 [i_12 - 1] [i_1] [i_7] [i_10]) : (arr_11 [i_12 - 1] [i_1] [i_7] [i_10]))), (arr_11 [i_12 + 1] [i_1] [i_7] [i_10]));
                        var_33 = (max(var_33, var_13));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    {
                        var_34 = (min(var_34, (((((~(!var_7))) | (((!-2674567312248755233) - ((min((arr_37 [i_1] [i_13] [i_14]), (arr_27 [i_5] [i_1])))))))))));
                        var_35 = min((arr_17 [i_1]), ((~(arr_22 [i_1] [i_1] [i_13] [i_14]))));
                        var_36 = (min(var_13, ((min(((min(61383, var_16))), ((~(arr_1 [i_1]))))))));
                    }
                }
            }
            var_37 = ((~(arr_25 [i_1] [i_1] [i_5])));
            var_38 = (((!13236156951930399867) == (var_15 <= var_6)));
            var_39 = (!var_9);
        }
        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            arr_48 [i_15] [i_15] &= (min(((((((-(arr_46 [i_1])))) ? (arr_10 [i_1] [i_15] [i_15] [i_15]) : ((var_16 ? (arr_39 [i_15] [i_15]) : var_1))))), (((arr_33 [i_15] [i_15] [i_15] [i_1]) ? ((~(arr_8 [i_15]))) : (min(1048575, var_4))))));
            arr_49 [i_1] = (max((arr_44 [i_1] [i_1] [i_15] [i_1]), ((~(arr_44 [i_1] [i_1] [i_1] [i_15])))));
            arr_50 [i_1] [i_15] &= (arr_46 [i_1]);
            var_40 = ((((((-24871 == (arr_0 [i_1])))) - (((-373469915 != (arr_7 [i_1] [i_15] [i_15])))))) & (((!var_0) ? (min(var_7, 30399)) : (var_13 >= var_9))));
            arr_51 [i_1] [i_1] = ((max(((var_10 | (arr_1 [i_15]))), (max(var_5, (arr_16 [i_1] [i_15]))))) - (max(((-(arr_4 [i_15]))), (((!(arr_20 [i_1] [i_15] [i_15])))))));
        }
    }
    var_41 = (max(((-var_14 ? (min(var_7, var_2)) : var_3)), (((~(max(var_12, var_13)))))));
    #pragma endscop
}
