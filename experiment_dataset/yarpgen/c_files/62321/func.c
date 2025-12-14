/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62321
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
    var_10 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3913262757100713590LL)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (unsigned char)0))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [(unsigned char)8] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_11 += ((/* implicit */unsigned char) min((6797375110077410903LL), ((~(((((/* implicit */_Bool) 6797375110077410886LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_0);
                        arr_17 [4ULL] [(unsigned char)1] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) arr_5 [i_0] [i_0] [6ULL]))))) | (((long long int) 3ULL)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 2) 
                        {
                            arr_21 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4 - 4] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_19 [i_4] [(unsigned char)5] [i_0])) ? (arr_9 [12LL] [12LL]) : (arr_2 [i_0]))) != (((2625139723001948901LL) >> (((-2847569033513793307LL) + (2847569033513793347LL)))))));
                            arr_22 [i_0] [i_0] [i_2] [6ULL] = arr_20 [i_0] [i_1] [i_0] [i_3] [3LL];
                            arr_23 [(unsigned char)14] [i_1] [i_1] = arr_4 [(unsigned char)6];
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 2) 
                        {
                            var_12 = ((/* implicit */long long int) ((unsigned long long int) -3913262757100713590LL));
                            var_13 *= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0]);
                            var_14 &= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            arr_29 [i_1] [i_1] [i_2] [15ULL] [i_1] [i_6] |= arr_7 [i_2];
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) ^ (arr_2 [i_0]))))));
                            arr_30 [i_0] [i_0] [i_0] [i_3] [11LL] [16ULL] [10LL] = ((/* implicit */unsigned char) 207779147819618371LL);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            var_16 = arr_8 [14ULL] [3ULL] [14ULL] [(unsigned char)4];
                            arr_35 [i_0] [i_0] [i_0] [15LL] [i_7] = ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_2]) - (((((((/* implicit */_Bool) 3387095171658311124LL)) ? (arr_24 [i_0] [i_0] [i_0] [i_2] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) - ((-(arr_9 [i_3] [i_1])))))));
                            arr_36 [i_3] [i_3] [i_3] [2ULL] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18045189030520515465ULL)) ? (arr_19 [i_0] [i_0] [(unsigned char)11]) : (arr_19 [i_0] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) (-(max((var_9), (var_2)))))) : (8925956516297053038ULL));
                            var_17 &= ((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_1]);
                            var_18 = var_0;
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_24 [i_0] [i_1] [i_3] [i_2] [i_8] [i_2]))));
                            arr_39 [i_0] [i_0] [7ULL] [i_0] [(unsigned char)12] [i_0] [(unsigned char)12] = ((/* implicit */unsigned long long int) arr_38 [i_0] [i_0] [6ULL] [i_0] [i_0] [i_0]);
                            arr_40 [i_0] [13ULL] [i_2] [i_3] [(unsigned char)12] [11LL] [i_8] = ((/* implicit */long long int) arr_5 [i_2] [0LL] [i_8]);
                        }
                    }
                    var_20 = ((/* implicit */long long int) ((unsigned long long int) (+(arr_4 [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        arr_43 [i_0] [i_1] [i_2] [i_2] [(unsigned char)11] = ((/* implicit */unsigned long long int) var_0);
                        var_21 |= ((long long int) arr_8 [i_1] [i_1] [i_1] [i_0]);
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) ((long long int) arr_19 [i_0] [i_0] [(unsigned char)9]))) ? (arr_19 [i_0] [i_0] [i_0]) : (arr_19 [i_0] [i_0] [i_0])))));
        /* LoopSeq 3 */
        for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 4) 
        {
            arr_48 [i_0] [i_10] [i_0] = (+(arr_37 [i_10] [i_10] [i_10 + 2] [i_0] [i_0] [i_0] [i_0]));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_11 = 1; i_11 < 16; i_11 += 1) 
            {
                arr_52 [8ULL] &= arr_2 [1ULL];
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 4; i_12 < 15; i_12 += 1) 
                {
                    arr_57 [i_0] [8ULL] [i_11] [(unsigned char)0] [i_11 - 1] [i_10] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3735341047767761763LL)) ? (((/* implicit */unsigned long long int) 7323169086550047738LL)) : (7952895842187255917ULL)));
                    var_23 ^= ((long long int) (unsigned char)181);
                    arr_58 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_12] [(unsigned char)8] [i_10] [i_0])) ? (262143LL) : (arr_8 [i_12 - 1] [i_11 + 1] [i_11 - 1] [i_10 + 3])));
                    arr_59 [i_10] [i_12] [i_12] = ((unsigned char) arr_50 [i_11] [i_11] [i_11 - 1] [0ULL]);
                }
                for (long long int i_13 = 2; i_13 < 13; i_13 += 3) 
                {
                    arr_62 [i_11] [i_11] [i_10] [i_11] = ((/* implicit */unsigned char) arr_20 [i_13 + 3] [i_0] [i_10 + 3] [i_0] [i_0]);
                    var_24 = ((/* implicit */unsigned long long int) arr_34 [i_11] [i_13] [i_11] [i_11] [i_0] [i_0] [i_0]);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 1; i_14 < 15; i_14 += 2) 
                {
                    for (long long int i_15 = 4; i_15 < 13; i_15 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((-2198358564064142456LL) - (arr_9 [8LL] [i_10]))) > (arr_38 [(unsigned char)16] [i_10] [i_11] [i_14] [i_15] [i_14]))))));
                            var_26 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_14] [i_14] [i_0] [i_14])) ? (arr_1 [i_0] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) & (((((/* implicit */_Bool) 4780320165908287330ULL)) ? (586737241508540619ULL) : (((/* implicit */unsigned long long int) -3913262757100713596LL))))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 17860006832201011020ULL)) ? (8959263000699932122ULL) : (586737241508540619ULL)));
                            var_28 = ((/* implicit */unsigned char) arr_14 [i_10] [i_10] [i_10]);
                            arr_69 [i_0] [i_10] [i_15] [i_11] [i_14] [i_15] |= (+((+(arr_19 [(unsigned char)13] [(unsigned char)13] [i_0]))));
                        }
                    } 
                } 
            }
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_24 [i_10] [i_10 - 1] [i_10 + 1] [4LL] [i_10 + 1] [11ULL]))));
        }
        for (long long int i_16 = 1; i_16 < 14; i_16 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_17 = 2; i_17 < 16; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 1; i_18 < 14; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 2; i_19 < 16; i_19 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (arr_67 [i_0] [i_17 + 1] [i_0] [i_0] [i_18 + 3] [i_19] [i_17])));
                            var_31 -= ((/* implicit */unsigned char) arr_32 [i_0] [9ULL] [9ULL] [i_17] [i_18] [i_19]);
                        }
                    } 
                } 
                arr_80 [i_17] = arr_28 [i_17] [i_17] [i_17 - 2] [i_17 + 1] [i_17];
                arr_81 [i_0] [i_0] [i_16 + 1] [(unsigned char)16] &= ((/* implicit */unsigned char) var_2);
            }
            var_32 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (-7563955572942059153LL)))) >= (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (9487481073009619464ULL))))))) ^ (((arr_55 [0LL] [(unsigned char)15] [i_16] [i_16] [15LL] [i_16]) & (var_7))));
            var_33 = ((/* implicit */long long int) arr_54 [4LL] [0LL] [i_16] [4LL]);
        }
        for (long long int i_20 = 2; i_20 < 13; i_20 += 1) 
        {
            arr_84 [i_20] = ((unsigned char) var_9);
            arr_85 [(unsigned char)7] = ((/* implicit */unsigned long long int) arr_75 [2LL] [i_0]);
        }
    }
    for (unsigned char i_21 = 1; i_21 < 19; i_21 += 2) 
    {
        arr_88 [i_21 + 1] = ((/* implicit */long long int) var_4);
        /* LoopNest 3 */
        for (unsigned long long int i_22 = 3; i_22 < 17; i_22 += 1) 
        {
            for (unsigned char i_23 = 1; i_23 < 19; i_23 += 4) 
            {
                for (unsigned long long int i_24 = 3; i_24 < 19; i_24 += 2) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) (+(var_9)));
                        /* LoopSeq 1 */
                        for (unsigned char i_25 = 0; i_25 < 20; i_25 += 1) 
                        {
                            arr_102 [i_21] [i_21] [i_22] = ((/* implicit */unsigned char) ((long long int) 7165897809217830586LL));
                            var_35 *= ((/* implicit */unsigned long long int) (!(((((/* implicit */int) ((((/* implicit */_Bool) 6088879388684696652ULL)) || (((/* implicit */_Bool) arr_94 [i_22] [i_22] [6LL] [13LL]))))) >= (((/* implicit */int) arr_90 [i_22] [i_22]))))));
                            var_36 = ((unsigned char) ((((/* implicit */int) arr_94 [i_23 - 1] [i_23 - 1] [i_22] [10LL])) * (((/* implicit */int) arr_94 [i_22 - 2] [i_22 - 1] [i_22 + 3] [i_22 + 2]))));
                            var_37 = ((/* implicit */unsigned long long int) ((((long long int) ((((/* implicit */_Bool) arr_101 [i_22] [i_22] [i_22])) ? (((/* implicit */unsigned long long int) arr_99 [i_25] [i_21] [i_23] [i_23] [i_22 + 1] [i_22] [i_21])) : (var_6)))) / (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        }
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -8953385209195649605LL)))) & (((((/* implicit */_Bool) ((unsigned long long int) arr_87 [i_24]))) ? (arr_92 [i_22] [i_22]) : (arr_87 [i_24])))));
                        arr_103 [i_22] [i_22] [i_23] [i_24] = var_8;
                    }
                } 
            } 
        } 
        arr_104 [i_21] = arr_87 [8ULL];
        arr_105 [i_21] [19LL] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_99 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 + 1] [i_21] [(unsigned char)4] [i_21])) ? (arr_99 [i_21] [i_21 - 1] [i_21 + 1] [i_21 - 1] [(unsigned char)0] [i_21] [i_21 - 1]) : (var_2))), (((arr_99 [i_21] [i_21] [i_21 - 1] [i_21] [i_21 - 1] [i_21 - 1] [i_21]) | (arr_99 [10ULL] [i_21] [(unsigned char)13] [i_21] [i_21 + 1] [i_21 + 1] [i_21])))));
    }
    for (unsigned long long int i_26 = 0; i_26 < 22; i_26 += 2) /* same iter space */
    {
        var_39 = arr_107 [i_26];
        arr_108 [8LL] [i_26] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_107 [i_26]))) <= (var_5))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_106 [i_26]))) % (var_2))) : (((/* implicit */long long int) ((/* implicit */int) arr_107 [i_26])))));
    }
    for (unsigned long long int i_27 = 0; i_27 < 22; i_27 += 2) /* same iter space */
    {
        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) arr_107 [i_27]))));
        var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((6086050449858955870ULL) - (((/* implicit */unsigned long long int) -6939670764214909669LL)))))));
    }
    var_42 |= ((/* implicit */unsigned long long int) ((unsigned char) var_9));
}
