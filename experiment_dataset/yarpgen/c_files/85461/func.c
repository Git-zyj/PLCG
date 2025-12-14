/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85461
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [16] [i_0] = ((/* implicit */long long int) ((unsigned int) var_7));
        var_19 = ((/* implicit */int) min((arr_1 [i_0] [i_0]), (((long long int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = arr_1 [i_0] [i_0];
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) arr_7 [i_1] [i_1])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (-2052337107) : (var_3)))) ? (arr_11 [6U] [6U]) : (arr_15 [i_4 - 2] [i_4] [i_4] [i_4 - 2])));
                        arr_16 [i_4] [i_3] [i_2] [i_3] [i_1] = ((/* implicit */long long int) ((unsigned int) arr_13 [i_4 - 2] [i_3] [i_3] [i_3]));
                        /* LoopSeq 4 */
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            var_22 = ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 1])) ? (arr_10 [i_2 + 2] [i_2 + 1]) : (arr_10 [i_2 - 1] [i_2 + 2]));
                            arr_19 [i_1] [i_2 - 1] [i_1] [i_4 + 2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_4 - 1])) ? (arr_5 [i_4 - 1] [i_2 - 1]) : (((/* implicit */unsigned int) arr_14 [i_1] [i_2 - 1] [i_3] [i_2 - 1] [i_2 - 1] [i_4 + 3]))));
                            arr_20 [i_3] [i_3] [i_4] [i_3] [i_3] [i_1] = ((/* implicit */long long int) (~(4294967295U)));
                            arr_21 [i_3] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (((/* implicit */unsigned int) ((arr_15 [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2]) << (((((arr_14 [i_5] [i_4 + 3] [i_3] [i_3] [i_2 + 1] [i_1]) + (1889251976))) - (26)))))) : (((/* implicit */unsigned int) ((arr_15 [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2]) << (((((((arr_14 [i_5] [i_4 + 3] [i_3] [i_3] [i_2 + 1] [i_1]) + (1889251976))) - (26))) - (617755033))))));
                        }
                        for (int i_6 = 1; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            arr_25 [10] [i_3] [10] = ((/* implicit */int) ((unsigned int) arr_22 [i_3] [i_1] [i_1] [i_2 - 1] [i_3] [i_6 + 1]));
                            var_23 = ((int) arr_18 [i_1] [i_2] [1U] [i_2] [i_2] [i_2 - 1] [i_6 - 1]);
                            arr_26 [i_4] |= arr_14 [12] [i_2 + 1] [i_1] [i_1] [i_2 + 1] [i_6 + 2];
                        }
                        for (int i_7 = 1; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            arr_30 [i_3] [i_3] = ((/* implicit */int) ((long long int) 4294967295U));
                            arr_31 [i_1] [i_3] [i_3] [i_4] = ((/* implicit */int) ((long long int) arr_13 [i_1] [i_2 + 2] [i_2 + 2] [i_1]));
                        }
                        for (int i_8 = 1; i_8 < 19; i_8 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_4] [i_8 - 1])) ? (arr_22 [i_3] [i_2 + 1] [i_8 + 2] [i_4 + 1] [i_2 + 2] [i_4 - 1]) : (arr_33 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 + 1])));
                            var_25 = ((/* implicit */long long int) ((arr_22 [i_3] [i_2 - 1] [i_4 - 2] [3] [i_8] [i_8 + 1]) < (var_18)));
                            var_26 = ((/* implicit */int) ((arr_10 [i_8 - 1] [i_8 + 1]) | (arr_10 [i_8 - 1] [i_8 + 2])));
                            var_27 = ((/* implicit */int) ((((/* implicit */long long int) arr_11 [i_4 - 2] [i_2 + 2])) <= (((((/* implicit */_Bool) -9159427892255907642LL)) ? (((/* implicit */long long int) 0U)) : (4665178874303431325LL)))));
                        }
                    }
                } 
            } 
            arr_34 [i_1] [i_2 + 1] |= ((/* implicit */int) ((((/* implicit */long long int) 177423734U)) != (-5047495622956829277LL)));
        }
        for (int i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            arr_37 [i_1] [12] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_22 [i_1] [i_9] [i_1] [i_1] [i_9] [i_9])) ? (arr_9 [i_1] [i_1]) : (var_12))))))));
            arr_38 [i_1] = ((/* implicit */unsigned int) ((arr_9 [i_1] [i_1]) / (min((-5047495622956829294LL), (((/* implicit */long long int) 599108640U))))));
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_11)) ? (var_6) : (-1299506375))))))))));
            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -5855046185537226809LL)) ? (((/* implicit */long long int) 524284U)) : (-599305081408442413LL))))) ? ((-(arr_24 [i_1] [i_9]))) : (((/* implicit */long long int) (-(-1704728281))))));
        }
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
    {
        arr_41 [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1047302607U))));
        arr_42 [i_10] = ((/* implicit */int) (-(arr_36 [i_10] [i_10] [2LL])));
    }
    /* LoopSeq 3 */
    for (int i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
    {
        arr_45 [i_11] |= ((/* implicit */unsigned int) ((((-5521672163556474577LL) >= (-2185651214464588401LL))) ? (((8484885123793736569LL) / (((/* implicit */long long int) 65665294)))) : (((/* implicit */long long int) ((unsigned int) arr_43 [i_11] [i_11])))));
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_14 = 1; i_14 < 24; i_14 += 1) 
                    {
                        for (int i_15 = 0; i_15 < 25; i_15 += 2) 
                        {
                            {
                                arr_56 [5] [5] [5] = ((/* implicit */unsigned int) arr_43 [i_15] [i_15]);
                                var_30 = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) var_17))), ((~(var_5)))))) ? (((long long int) var_9)) : (((long long int) arr_54 [i_14 + 1] [i_11])));
                                arr_57 [i_11] [i_11] [i_11] [i_11] [i_11] [3LL] = ((/* implicit */unsigned int) ((((max((7325937601689994805LL), (((/* implicit */long long int) 722106877)))) + (((/* implicit */long long int) arr_46 [i_13] [i_12] [i_11])))) / (max((arr_49 [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_14]), (((/* implicit */long long int) arr_55 [i_14 - 1] [i_14] [i_14]))))));
                            }
                        } 
                    } 
                    arr_58 [i_11] [22U] [9] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_55 [i_11] [i_12] [i_13]), (((/* implicit */unsigned int) var_3)))))));
                }
            } 
        } 
        arr_59 [i_11] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_11] [i_11] [i_11]))));
        var_31 *= ((/* implicit */int) ((max((arr_49 [i_11] [i_11] [i_11] [i_11]), (arr_47 [i_11] [i_11] [i_11]))) / (max((arr_47 [i_11] [3LL] [3LL]), (arr_47 [i_11] [i_11] [i_11])))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
    {
        arr_64 [i_16] = ((int) ((((/* implicit */_Bool) 1505430265)) ? (-2185651214464588387LL) : (((/* implicit */long long int) -1952274599))));
        /* LoopSeq 4 */
        for (int i_17 = 0; i_17 < 25; i_17 += 2) 
        {
            var_32 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */long long int) arr_53 [i_16] [i_16] [i_16] [i_16] [i_16]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_48 [i_16] [i_16])))))) : (((((/* implicit */_Bool) var_13)) ? (arr_62 [i_16]) : (((/* implicit */long long int) var_15))))));
            var_33 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_16] [8] [i_16]))));
            arr_67 [i_16] [i_17] = ((/* implicit */unsigned int) (+(arr_43 [i_16] [i_17])));
        }
        for (int i_18 = 1; i_18 < 24; i_18 += 1) 
        {
            arr_71 [i_16] [i_18] = ((int) arr_70 [i_18 - 1] [i_18 - 1]);
            var_34 |= ((/* implicit */long long int) ((int) arr_65 [i_16] [i_18 + 1] [i_18]));
            arr_72 [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) (((-(var_9))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [i_16])))))));
        }
        for (int i_19 = 0; i_19 < 25; i_19 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_20 = 0; i_20 < 25; i_20 += 1) 
            {
                var_35 = (-(arr_69 [i_16] [i_19] [i_16]));
                var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_76 [i_20] [i_19] [i_16])) : (arr_74 [i_16]))) * (((/* implicit */long long int) (-(var_14)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_21 = 0; i_21 < 25; i_21 += 2) 
                {
                    var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (-(((2147483647) >> (((-4199513065744733873LL) + (4199513065744733880LL))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_22 = 1; i_22 < 24; i_22 += 3) 
                    {
                        arr_85 [i_21] [i_21] [i_22] [19U] [i_16] = ((/* implicit */unsigned int) ((long long int) arr_74 [i_22 + 1]));
                        arr_86 [i_20] [10] [i_19] [i_19] &= (-(((int) arr_76 [i_16] [i_16] [i_16])));
                    }
                    arr_87 [i_16] [i_16] &= ((/* implicit */long long int) ((int) ((unsigned int) arr_70 [15] [i_20])));
                    arr_88 [i_16] [4] [i_20] [i_21] = ((/* implicit */int) arr_54 [i_16] [i_20]);
                }
                for (int i_23 = 1; i_23 < 23; i_23 += 2) 
                {
                    arr_93 [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1759095934))));
                    arr_94 [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_50 [i_23 + 1] [i_23] [i_23 + 2] [i_23 + 2]))));
                    arr_95 [i_16] = ((int) 1162135145);
                    var_38 = ((/* implicit */int) ((long long int) 1929926676));
                }
            }
            /* LoopNest 3 */
            for (int i_24 = 0; i_24 < 25; i_24 += 1) 
            {
                for (int i_25 = 1; i_25 < 21; i_25 += 3) 
                {
                    for (long long int i_26 = 0; i_26 < 25; i_26 += 1) 
                    {
                        {
                            var_39 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_49 [i_16] [i_16] [i_16] [i_16]) : (arr_49 [i_24] [i_19] [i_24] [i_25 + 1])));
                            arr_105 [i_24] [i_24] [i_24] [i_26] = arr_66 [i_25] [i_25 + 4] [i_25 + 4];
                            var_40 = ((arr_50 [i_25 + 2] [21] [i_24] [i_25 + 2]) ^ (((/* implicit */long long int) ((unsigned int) arr_76 [i_16] [i_19] [i_24]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_27 = 0; i_27 < 25; i_27 += 3) 
        {
            var_41 = ((/* implicit */long long int) arr_100 [i_16] [i_27]);
            arr_108 [i_27] = ((int) -1704728280);
        }
        var_42 &= arr_48 [i_16] [i_16];
        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) arr_77 [i_16])) ? ((-(arr_83 [i_16] [i_16] [i_16] [i_16] [i_16]))) : (((/* implicit */long long int) ((unsigned int) 5U)))));
    }
    /* vectorizable */
    for (int i_28 = 0; i_28 < 25; i_28 += 4) /* same iter space */
    {
        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) (-(arr_78 [i_28]))))));
        var_45 = ((int) arr_99 [i_28]);
        var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) 1618601239))) ? (((/* implicit */long long int) arr_54 [i_28] [i_28])) : (((((/* implicit */_Bool) arr_50 [i_28] [i_28] [i_28] [i_28])) ? (-2645577353410646191LL) : (arr_49 [i_28] [i_28] [i_28] [i_28])))));
        var_47 = ((arr_92 [i_28] [i_28] [i_28] [i_28]) >> (((arr_92 [i_28] [i_28] [i_28] [i_28]) - (790894839))));
    }
    var_48 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((int) (~(var_8))))) < (((((/* implicit */_Bool) ((unsigned int) 4294967291U))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
}
