/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = 109;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 ^= (max((((!(arr_1 [20] [i_0])))), -6257058669829186073));
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ^ 18627));
        var_13 = ((((max(var_8, (((var_1 && (arr_0 [i_0] [i_0]))))))) - (arr_0 [19] [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_14 = (max(var_14, (!var_6)));
            arr_6 [i_0] [i_1] = (((1 ? var_5 : var_5)));
            var_15 = ((-739821172 / (arr_3 [i_0] [i_0])));
            var_16 = (((arr_4 [i_0] [i_0] [i_0]) >= (arr_1 [i_0] [i_1])));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_17 = (max(var_17, ((((arr_9 [i_2 + 1] [i_2 + 1] [i_2 - 1]) != (arr_9 [i_2 - 1] [i_2 + 1] [i_2 - 2]))))));
            var_18 = (arr_7 [i_2] [i_2] [i_2]);
            var_19 -= (((!16976) > ((((arr_9 [i_2] [i_2 - 2] [i_2]) <= (arr_8 [i_0] [0] [i_0]))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    {
                        var_20 = (((((arr_7 [i_0] [i_4] [i_0]) && 48569)) ? ((-7775577220314881650 ? 44026 : -13443)) : 53));

                        for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            arr_18 [13] [i_0] [i_3] [i_4] [20] = (arr_14 [i_0] [i_0] [i_4 + 1] [i_4]);
                            var_21 += ((((var_1 ? (arr_4 [i_3] [i_2] [i_3]) : (arr_0 [i_0] [i_2]))) >= (arr_10 [i_0])));
                        }
                        for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_0] [17] [i_0] = (arr_20 [i_0] [i_0] [i_6] [i_4] [i_6]);
                            arr_24 [i_0] [i_2 - 2] [i_2] [i_4] [i_6] &= (arr_17 [i_6] [i_6 - 1]);
                            var_22 = (-(arr_5 [i_0] [i_0]));
                            var_23 = (min(var_23, (((+(((arr_11 [i_2] [i_2]) ? (arr_14 [i_0] [i_2] [i_3] [i_6 + 1]) : (-9223372036854775807 - 1))))))));
                        }
                    }
                }
            }
            var_24 ^= ((1040707817388695927 ? (arr_10 [i_2 - 1]) : (1353246773 / 255)));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_25 = (min(var_25, (arr_21 [10] [0] [i_7] [20] [i_7])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 19;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_7] [i_8] [i_9] [i_10] = (((arr_1 [i_0] [i_9 - 1]) + 61801));
                            var_26 = ((!((!(arr_28 [i_7] [i_8])))));
                            var_27 = (max(var_27, ((((arr_19 [4] [4] [i_8] [i_0] [i_10]) & ((((arr_32 [i_9] [i_7]) ? -104 : (arr_33 [i_0] [i_7] [i_8] [8])))))))));
                            var_28 ^= (arr_17 [i_9 - 2] [i_9 - 3]);
                        }
                        for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            var_29 = 178;
                            arr_39 [i_0] [i_0] [19] [i_0] [i_0] [i_0] [i_0] = (var_5 & (((0 ? (arr_11 [i_0] [i_11]) : 50088))));
                            var_30 ^= (((var_4 >= var_0) && var_9));
                            var_31 ^= var_8;
                            var_32 = (max(var_32, (arr_27 [10])));
                        }
                        for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            var_33 = (-4962022228127823636 < 99);
                            arr_43 [i_0] [i_0] [i_8] [i_9] [10] = (((((var_2 ? -23 : (arr_34 [i_0] [i_7] [i_8] [i_9])))) ? 27 : (arr_28 [i_0] [i_0])));
                            arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] = (((var_4 + -118) >= (((480863723474845153 || (arr_30 [i_8] [i_9]))))));
                        }
                        arr_45 [i_0] [i_0] = (arr_3 [i_8] [i_9]);
                    }
                }
            }
            var_34 = (arr_22 [4] [i_7] [i_7] [i_7] [i_7]);

            for (int i_13 = 1; i_13 < 20;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        {
                            var_35 = ((53 ? (arr_48 [i_0] [i_7]) : ((~(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_36 &= (-6702440859253048396 & 8);
                        }
                    }
                }
                var_37 ^= 230;
            }
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                arr_56 [i_0] = ((6346317400493022352 < (arr_16 [i_0] [18] [i_0] [i_0] [i_0])));
                var_38 = ((~(arr_48 [i_7] [i_16])));
            }
        }
        for (int i_17 = 3; i_17 < 17;i_17 += 1)
        {
            arr_60 [i_0] = (((((max(14319, 14)) * (arr_13 [i_17 + 1] [i_17]))) >> (!7548397627354939409)));
            var_39 = ((-(max(160, 2574615088))));
            var_40 = (max(var_40, (((((((var_6 && ((((arr_26 [i_0] [0]) / 9169))))))) == ((~(arr_5 [0] [i_17 - 2]))))))));
            var_41 -= 7168;
        }
        var_42 = arr_48 [i_0] [i_0];
    }
    for (int i_18 = 3; i_18 < 11;i_18 += 1)
    {
        var_43 = 21140976;
        arr_63 [i_18 - 3] = ((((min((arr_21 [i_18] [i_18] [i_18] [i_18 - 2] [i_18]), (min(-20249, -1237270073))))) ? (var_8 & var_5) : (max((((var_7 ? (arr_53 [6]) : var_3))), ((var_2 + (arr_54 [18])))))));
        var_44 = (max((min((arr_30 [i_18 - 3] [i_18]), var_1)), (((arr_30 [18] [i_18 + 3]) ? (arr_30 [i_18] [i_18 + 2]) : (arr_30 [i_18 + 2] [i_18 + 2])))));
        var_45 = (max(-9, 269659295));
    }
    #pragma endscop
}
