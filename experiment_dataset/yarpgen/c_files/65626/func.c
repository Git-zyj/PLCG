/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65626
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_7))))) == ((-(arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((unsigned char) (+(var_0))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (max((var_1), (((/* implicit */unsigned long long int) -2147483647)))))))));
        var_21 *= ((/* implicit */unsigned char) ((((((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) var_18)))) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (252))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2147483647))))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (+(2147483647)));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    arr_14 [i_1] [i_1] [i_1] [i_2] [10] [i_4] = ((/* implicit */int) ((arr_11 [i_1] [i_2]) && (((/* implicit */_Bool) arr_5 [i_1]))));
                    var_22 &= ((/* implicit */int) ((unsigned long long int) var_1));
                    var_23 = 2147483646;
                }
                var_24 = ((unsigned long long int) arr_5 [i_2]);
                var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_3])) & (2147483636)));
                var_26 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2147483634)))) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2147483644)))))));
                arr_15 [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131))) >= (((((/* implicit */_Bool) arr_13 [i_2] [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_2]))) : (arr_9 [i_1] [i_2] [i_2] [22])))));
            }
            var_27 = ((/* implicit */int) (+(arr_8 [i_1] [i_1] [i_2])));
        }
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_28 ^= ((/* implicit */unsigned char) -97043338);
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) arr_5 [i_1]))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                var_30 = ((/* implicit */unsigned char) 2147483632);
                var_31 ^= ((/* implicit */int) arr_6 [i_1] [i_6]);
                arr_27 [i_1] [i_1] [18U] [i_7] = max((((((((/* implicit */_Bool) arr_13 [i_1] [i_6] [i_6] [i_7])) && (((/* implicit */_Bool) (unsigned char)131)))) ? (((arr_20 [(unsigned char)5]) ? (((/* implicit */unsigned int) -2147483645)) : (var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_7]))))), (((/* implicit */unsigned int) ((int) arr_24 [20] [i_6] [i_7] [16]))));
                arr_28 [i_7] [i_6] [i_1] = (((!(((/* implicit */_Bool) ((((/* implicit */int) var_16)) % ((-2147483647 - 1))))))) ? (2147483632) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [12ULL]))))));
            }
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                {
                    arr_36 [i_1] [i_1] [i_6] [i_8] [i_9] = ((((((/* implicit */_Bool) arr_25 [i_1])) || (((/* implicit */_Bool) arr_10 [i_6] [i_8])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-97043342) + (2147483647))) << (((((/* implicit */int) (unsigned char)112)) - (112)))))) ? (((/* implicit */int) ((unsigned char) 97043354))) : (((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) (-2147483647 - 1))))))))));
                    var_32 = (!(((/* implicit */_Bool) var_10)));
                }
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((unsigned char) (-(6197969242209205894ULL)))))));
                        arr_41 [i_10] [i_6] [i_6] [i_10] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-2147483647)))) ? ((~(((/* implicit */int) (unsigned char)131)))) : (97043337))))));
                    }
                    arr_42 [i_8] [i_8] [i_8] [8] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_8 [i_10] [i_8] [i_1])))) ? (max((((/* implicit */unsigned int) arr_5 [i_1])), (arr_8 [i_10] [i_10] [i_10]))) : ((+(arr_8 [i_1] [i_1] [i_1])))));
                    var_34 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (97043317) : (((/* implicit */int) (unsigned char)122))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (17506702431789482746ULL))));
                    arr_43 [i_8] [i_10] [i_8] [i_1] [i_1] [i_8] = ((arr_24 [i_1] [i_6] [i_8] [i_10]) ? (max((((/* implicit */int) var_15)), (2091865026))) : (((/* implicit */int) ((((/* implicit */int) arr_24 [i_1] [i_6] [i_8] [i_10])) < (((/* implicit */int) arr_24 [i_1] [7ULL] [i_8] [i_10]))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    var_35 = ((/* implicit */int) (((!(var_7))) ? ((+(max((((/* implicit */unsigned long long int) arr_21 [i_1] [i_1] [i_1])), (17506702431789482731ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_25 [i_6]))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        arr_48 [i_1] [i_1] [i_6] [i_8] [i_8] [i_12] [i_13] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1]))))))));
                        var_36 = ((/* implicit */unsigned int) (+((-(arr_45 [i_6])))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        var_37 = ((/* implicit */_Bool) arr_29 [i_8] [i_8] [i_8] [i_8]);
                        arr_53 [i_8] [i_8] [i_8] [i_12] [i_12] = min(((unsigned char)15), (((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) 713052293)), (arr_39 [i_1] [i_8] [i_12]))) == (((/* implicit */unsigned long long int) 2147483628))))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_4 [i_6])))))));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned char) arr_34 [i_1] [(unsigned char)21] [(unsigned char)21] [(unsigned char)21]))))) ? (((/* implicit */unsigned int) -2147483646)) : (((unsigned int) var_17))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_23 [i_1] [i_6] [i_6] [i_6]))))) ? (((/* implicit */int) ((arr_45 [i_6]) >= (((/* implicit */int) arr_30 [21U] [i_12] [i_8] [i_1]))))) : (arr_31 [i_8]))) : (max((((/* implicit */int) ((unsigned char) arr_33 [(unsigned char)5] [i_6] [i_8] [i_15] [i_15] [i_12]))), (max((2147483643), (-2147483646)))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        var_40 = ((/* implicit */int) (+((~(min((((/* implicit */unsigned long long int) arr_29 [i_8] [i_12] [(unsigned char)14] [i_8])), (18446744073709551615ULL)))))));
                        var_41 -= ((/* implicit */unsigned int) -2147483645);
                        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) arr_11 [i_1] [i_1]))));
                    }
                    for (int i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        var_43 = ((/* implicit */int) min((((unsigned char) -713052293)), (((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_1] [i_6] [i_8] [i_12])) > (((/* implicit */int) arr_24 [14ULL] [i_8] [i_6] [i_1])))))));
                        var_44 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1190841168)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_37 [i_17] [i_1] [i_8] [i_6] [i_1])), (var_10))))) : (max((((/* implicit */unsigned int) 2147483645)), (var_18)))))));
                        arr_64 [i_8] [i_12] [i_8] [i_6] [i_8] = ((/* implicit */unsigned char) (_Bool)0);
                    }
                    var_45 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((int) arr_21 [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) -713052293)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)15)) / (-1190841168)))) : (arr_8 [i_6] [i_8] [i_12])))));
                }
            }
            /* LoopSeq 4 */
            for (unsigned long long int i_18 = 1; i_18 < 23; i_18 += 4) 
            {
                var_46 = (((!(((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_18 + 1])))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_46 [i_6] [i_18] [i_18] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 - 1]))))));
                var_47 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-2147483645)))) ? (min((1190841167), (1190841177))) : (((/* implicit */int) (unsigned char)125))))) ? (((max((288230376151711616ULL), (arr_54 [i_1] [i_1] [i_1] [i_1] [5] [i_18] [i_18 - 1]))) - (((/* implicit */unsigned long long int) 1190841168)))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1778140860)) ? (((/* implicit */unsigned int) arr_61 [i_18 - 1] [i_18 - 1] [i_18] [i_18] [i_1] [(unsigned char)16])) : (var_2)))) : (max((((/* implicit */unsigned long long int) -1190841177)), (8544889080930045596ULL))))));
            }
            for (unsigned char i_19 = 0; i_19 < 24; i_19 += 4) 
            {
                arr_72 [i_1] [i_6] [i_6] = (-(((((/* implicit */_Bool) ((arr_71 [i_1]) ? (var_0) : (((/* implicit */unsigned long long int) arr_31 [i_19]))))) ? (((/* implicit */unsigned long long int) ((int) 1608575390U))) : (((((/* implicit */_Bool) -1190841168)) ? (arr_49 [i_19]) : (((/* implicit */unsigned long long int) arr_19 [i_1] [i_19] [i_19])))))));
                var_48 = ((/* implicit */int) ((unsigned long long int) ((((2147483624) << (((((/* implicit */int) var_13)) - (33))))) << (((((((/* implicit */int) arr_47 [i_19] [i_19] [i_6] [i_1] [i_1])) % (2147483644))) - (196))))));
                /* LoopSeq 2 */
                for (unsigned int i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 4) 
                    {
                        var_49 = ((/* implicit */int) ((((/* implicit */_Bool) (((+(2147483647))) >> ((((~(1190841184))) + (1190841211)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_23 [i_1] [i_6] [i_20] [(unsigned char)8]), (arr_23 [i_20] [i_19] [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_26 [i_20] [i_1])) ? (arr_26 [i_21] [i_1]) : (arr_26 [i_20] [i_21])))));
                        arr_79 [i_1] [i_6] [i_20] [i_6] [i_21] = min((max((arr_8 [(unsigned char)16] [(_Bool)1] [i_21]), (((/* implicit */unsigned int) arr_75 [i_21] [i_21] [i_20] [i_19] [i_6] [i_1])))), (max((((/* implicit */unsigned int) arr_75 [i_1] [i_6] [14ULL] [i_19] [i_20] [i_21])), (var_18))));
                    }
                    for (unsigned long long int i_22 = 3; i_22 < 22; i_22 += 2) 
                    {
                        var_50 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_13), (var_13))))))), (arr_35 [i_1])));
                        arr_83 [i_1] [i_20] = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) 333784532)) ? (288230376151711593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_1] [i_6] [i_20] [i_19] [i_6] [i_6]))))))));
                        var_51 |= arr_50 [i_1] [i_6] [i_19];
                        var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) -2147483644))));
                    }
                    arr_84 [17ULL] [i_6] [i_6] [i_20] [i_6] = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) var_8)))));
                }
                for (int i_23 = 1; i_23 < 20; i_23 += 3) 
                {
                    var_53 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_85 [i_23 + 3] [i_23 + 3] [i_23 - 1] [i_23 - 1])) ? (arr_85 [i_23 + 4] [i_23] [i_23 + 2] [i_23 + 3]) : (arr_85 [i_23 + 4] [i_23] [i_23 + 4] [i_23 + 4]))));
                    /* LoopSeq 4 */
                    for (unsigned char i_24 = 0; i_24 < 24; i_24 += 1) /* same iter space */
                    {
                        var_54 *= ((/* implicit */unsigned int) (unsigned char)136);
                        var_55 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) ((((/* implicit */int) arr_75 [i_1] [i_6] [i_19] [i_23 + 4] [11] [i_24])) != (-1190841169))))))));
                        arr_91 [i_23] [i_23] [i_23] [i_1] [i_23] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_65 [i_1] [i_1])))), (((/* implicit */int) arr_24 [i_1] [i_6] [i_19] [i_6]))))), ((((!(((/* implicit */_Bool) -713052306)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (arr_68 [i_23] [i_24])))) : (arr_35 [i_24])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_25 = 0; i_25 < 24; i_25 += 1) /* same iter space */
                    {
                        var_56 ^= (~(((/* implicit */int) (unsigned char)63)));
                        arr_96 [i_23] [i_25] = ((/* implicit */unsigned long long int) (!(arr_87 [i_23 + 2] [22ULL] [i_23 + 1] [i_23])));
                        var_57 *= ((/* implicit */unsigned char) arr_87 [i_19] [i_23 + 3] [i_23 + 2] [i_19]);
                    }
                    /* vectorizable */
                    for (unsigned char i_26 = 0; i_26 < 24; i_26 += 1) /* same iter space */
                    {
                        arr_100 [i_6] [i_6] [i_23] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_62 [(unsigned char)16] [i_19] [i_26]))))) ? (arr_98 [i_1] [i_1] [i_26]) : (arr_94 [i_23] [i_23 + 4] [i_23] [i_23] [i_23 + 4] [i_23] [i_23 + 3])));
                        var_58 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_23 + 4] [i_23 + 4]))));
                    }
                    for (int i_27 = 0; i_27 < 24; i_27 += 4) 
                    {
                        var_59 |= ((/* implicit */unsigned int) max((((unsigned char) -1778140860)), ((unsigned char)29)));
                        var_60 = ((/* implicit */unsigned char) arr_67 [(unsigned char)0] [i_1] [i_1]);
                    }
                }
            }
            for (unsigned char i_28 = 0; i_28 < 24; i_28 += 3) 
            {
                arr_106 [i_28] [i_6] [i_28] [15] = ((/* implicit */unsigned char) (-((+(arr_99 [i_1])))));
                arr_107 [i_28] [i_6] [i_28] = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_4 [i_1]), (arr_95 [i_28] [i_28] [(unsigned char)22] [i_28] [1])))) >> (((/* implicit */int) ((((/* implicit */int) arr_95 [i_1] [i_6] [i_6] [i_28] [i_28])) >= (-1277192857))))));
            }
            for (unsigned char i_29 = 0; i_29 < 24; i_29 += 4) 
            {
                arr_110 [8U] [i_6] [i_29] [i_29] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_104 [i_6])) ? (((/* implicit */int) var_17)) : (2147483644)))) ? (((/* implicit */unsigned long long int) arr_17 [i_29])) : (((unsigned long long int) 288230376151711593ULL)))));
                arr_111 [i_1] [i_1] [i_29] [i_1] = ((/* implicit */unsigned char) 2075741437U);
                var_61 = 1190841168;
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 24; i_30 += 3) 
                {
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        {
                            var_62 = ((((((/* implicit */_Bool) arr_5 [i_31])) ? (var_11) : (((/* implicit */unsigned long long int) 1778140860)))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (18158513697557840023ULL) : (3105048477942945624ULL)))) ? (((((/* implicit */_Bool) -1277192861)) ? (15341695595766605968ULL) : (15341695595766605990ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_29] [i_29] [i_29] [(unsigned char)21] [i_31]))))));
                            var_63 = ((/* implicit */int) max((var_63), (1190841177)));
                        }
                    } 
                } 
            }
        }
        arr_119 [i_1] [i_1] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_50 [i_1] [i_1] [4]))))));
    }
    var_64 = ((/* implicit */unsigned char) var_9);
}
