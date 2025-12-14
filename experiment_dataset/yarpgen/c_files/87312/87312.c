/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (min((((((min(var_0, var_9))) | (!var_9)))), (~var_6)));
    var_15 -= (max(var_7, (~var_9)));
    var_16 -= var_11;
    var_17 = (min(var_17, -32752));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_18 = (min(var_13, (((!(arr_1 [i_0]))))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_1] = (arr_4 [i_1] [i_1 - 1] [i_1 - 1]);
                            var_19 = (((((arr_4 [i_0 + 1] [i_0] [i_0 + 1]) / (arr_2 [i_0]))) / (((arr_4 [i_0 + 1] [1] [i_0 - 1]) ? (arr_9 [i_0 - 1] [2] [i_0 + 1] [i_1 - 1] [i_0 - 1]) : (arr_4 [i_0] [i_0] [i_0 + 1])))));
                            var_20 = ((!(((arr_6 [i_0] [i_0 - 1] [i_0] [i_0] [i_1 + 2] [i_2]) && ((max((arr_3 [i_1] [i_4]), (arr_5 [i_0] [i_0]))))))));
                            var_21 = (((min(var_2, (arr_4 [i_1] [i_1] [9])))) / (((arr_2 [i_1 + 1]) ^ (arr_10 [i_1 + 2] [i_1 + 1] [i_1 + 1]))));
                            var_22 = (min(var_22, ((((((5246469067250892219 ? 2112866788 : 44))) <= (((max(282466468, -4898796274158438591)))))))));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_23 = (min(var_6, var_8));
                            var_24 = ((!((var_0 && ((var_6 >= (arr_9 [i_0] [7] [i_0] [i_3] [i_5])))))));
                            var_25 += (var_11 >= ((var_3 - ((min(var_6, var_7))))));
                            var_26 = (min(var_26, (((((max((arr_2 [i_2]), var_1))) * (min((var_1 / var_3), (arr_14 [i_3]))))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_27 = var_11;
                            var_28 = -var_8;
                            var_29 ^= (((var_5 ? (arr_4 [i_0 - 1] [i_1] [i_3]) : var_6)));
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_30 = var_5;
            var_31 = (arr_14 [i_7]);
            var_32 = var_2;
        }
        for (int i_8 = 3; i_8 < 7;i_8 += 1)
        {
            var_33 = ((-((min((arr_11 [i_0] [2]), (arr_11 [i_0] [8]))))));
            var_34 = arr_6 [i_0] [i_0] [i_0] [i_0 + 1] [i_8] [i_8];
        }
    }
    for (int i_9 = 4; i_9 < 20;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    var_35 = (arr_29 [i_11]);
                    var_36 -= -var_6;
                }
            }
        }
        var_37 *= ((((((arr_30 [18]) / var_3)) * (arr_26 [i_9 + 3] [i_9 + 1] [i_9 + 3]))));
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 21;i_12 += 1)
    {
        var_38 = (max(var_38, (var_7 == -var_2)));
        var_39 = (min(var_39, ((((((21216 < (arr_22 [i_12])))) >= (((4621433490813171583 && (arr_29 [i_12])))))))));
        var_40 = arr_27 [i_12] [i_12 - 1] [i_12 - 1];
        var_41 = (arr_28 [i_12 - 1]);
        var_42 ^= 9;
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            var_43 ^= (var_3 >= (max((arr_36 [8] [8]), ((((arr_35 [i_13] [i_13]) == var_11))))));
            var_44 = (arr_35 [i_13] [i_13]);

            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                var_45 -= 65;
                var_46 = (((min((arr_40 [i_15] [i_14] [i_13]), ((34448 ? (arr_38 [i_13] [i_13]) : (arr_36 [i_13] [i_14])))))) ? (((((arr_39 [i_15] [i_13] [i_13]) <= (arr_40 [i_13] [i_14] [i_15]))))) : ((var_10 + (min(var_4, var_8)))));
                var_47 -= ((arr_41 [i_15] [i_13] [i_14] [i_15]) ? ((+((((arr_36 [i_15] [i_15]) && var_1))))) : var_1);
                var_48 = (max(var_48, var_5));
            }
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                var_49 = var_6;
                var_50 += var_0;
                var_51 = (max(var_51, (((+((((arr_43 [i_16] [i_13]) != (arr_44 [i_13])))))))));
                var_52 = var_0;
                var_53 += ((-((((arr_41 [0] [10] [i_16] [i_13]) && (arr_41 [20] [i_13] [i_16] [i_16]))))));
            }
            /* vectorizable */
            for (int i_17 = 3; i_17 < 23;i_17 += 1)
            {

                for (int i_18 = 3; i_18 < 23;i_18 += 1)
                {
                    arr_51 [i_13] [i_13] [i_18] [i_18 - 1] [i_13] [i_17] = ((1553018527 ? 78 : 13255284350044186344));
                    var_54 = var_12;
                    var_55 = (arr_35 [i_17 + 1] [i_18 + 2]);
                }
                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    var_56 = (((arr_54 [i_19] [12] [i_14] [i_13]) / (arr_54 [i_13] [i_13] [i_13] [i_13])));
                    var_57 = ((var_4 ? (arr_44 [i_17 - 2]) : var_3));
                }
                var_58 ^= (((-9223372036854775807 - 1) && (arr_45 [20] [i_17 + 2] [20])));
                var_59 |= (((arr_54 [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17]) >= var_3));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 25;i_21 += 1)
                    {
                        {
                            var_60 = (arr_50 [i_17 + 2] [i_13] [i_17 - 1]);
                            arr_60 [i_20] |= (arr_41 [i_21] [i_17 - 1] [i_20] [i_21]);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_22 = 4; i_22 < 24;i_22 += 1)
        {
            /* LoopNest 3 */
            for (int i_23 = 0; i_23 < 25;i_23 += 1)
            {
                for (int i_24 = 2; i_24 < 22;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 25;i_25 += 1)
                    {
                        {
                            var_61 = (min(var_61, (-3769548244631918041 ^ var_10)));
                            var_62 ^= (arr_64 [i_13] [i_13] [i_13]);
                            var_63 -= (~(-113 < 32406));
                            arr_71 [i_13] [i_22 - 2] [i_13] [1] [i_25] = var_6;
                            var_64 += (((arr_59 [i_23]) == (arr_59 [i_24])));
                        }
                    }
                }
            }

            for (int i_26 = 2; i_26 < 24;i_26 += 1)
            {
                var_65 = (max(var_65, ((((arr_43 [i_13] [i_22 - 2]) ? var_3 : (~var_13))))));
                var_66 = (min(var_66, ((((arr_70 [i_26 + 1] [i_22 - 1]) ? var_6 : (arr_70 [i_26 + 1] [i_22 - 1]))))));
            }
            for (int i_27 = 0; i_27 < 25;i_27 += 1)
            {
                var_67 = (((arr_43 [4] [i_27]) && var_12));
                var_68 = ((-(arr_73 [i_27] [i_13] [i_22 - 3] [i_27])));
            }
            for (int i_28 = 1; i_28 < 23;i_28 += 1)
            {
                var_69 ^= 16884887690560964705;
                var_70 = var_2;
                var_71 = ((var_6 ^ (arr_74 [i_13] [i_28])));
            }
            /* LoopNest 3 */
            for (int i_29 = 0; i_29 < 25;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 25;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 25;i_31 += 1)
                    {
                        {
                            var_72 = var_8;
                            var_73 *= (((arr_53 [i_22] [i_22] [i_22 - 1] [i_22] [i_22 - 2]) > (arr_53 [i_22 - 3] [i_22 - 3] [i_22 - 4] [i_22] [i_22 - 4])));
                        }
                    }
                }
            }
            arr_87 [i_13] [i_13] [i_13] = var_7;
            var_74 = (min(var_74, (~var_0)));
        }
        var_75 = ((~((((((arr_80 [5] [i_13] [i_13] [i_13]) >> (((arr_57 [10] [i_13] [i_13] [i_13]) + 7373505074300233820))))) & 16884887690560964705))));
    }
    #pragma endscop
}
