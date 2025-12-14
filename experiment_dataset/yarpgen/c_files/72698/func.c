/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72698
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((arr_1 [i_0]) > (((((/* implicit */_Bool) 1616688457)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_1 [i_0 + 4])))));
        var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) (unsigned char)62)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 1854366804U)))) ? (min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1]))) : (max((arr_1 [i_0 + 3]), (((/* implicit */long long int) (_Bool)0))))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_10 [i_1] [i_1] [14U] = ((/* implicit */unsigned char) var_3);
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_1]))));
            arr_11 [i_1] [i_1] = ((((/* implicit */_Bool) (short)-20798)) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (0));
        }
        /* LoopSeq 1 */
        for (unsigned short i_3 = 3; i_3 < 13; i_3 += 4) 
        {
            var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (16) : (((/* implicit */int) (signed char)7))))) : (var_5))), (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned char)194), (((/* implicit */unsigned char) arr_13 [i_3]))))) + (((/* implicit */int) (_Bool)0)))))));
            arr_15 [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (signed char)-1)))) == (((/* implicit */int) (signed char)22))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
            {
                arr_19 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_1])) >> (((var_4) - (2035272157)))));
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned long long int) ((unsigned int) arr_21 [i_3 + 1] [i_3] [i_3 + 1] [i_4] [i_5]));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)191))))) ? (((unsigned long long int) arr_14 [i_3] [i_1])) : (arr_6 [(unsigned short)5]));
                    arr_22 [i_4] [i_3] [i_1] [i_4] [i_1] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_5])) ? (var_7) : (((/* implicit */unsigned int) var_6)))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                    {
                        var_22 *= ((/* implicit */signed char) ((arr_5 [i_1]) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) (unsigned short)19270))));
                        var_23 = arr_24 [i_4] [i_3] [i_4] [i_3 + 2] [i_4];
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3664800926U)) ? (((((/* implicit */_Bool) (signed char)-127)) ? (11091635647693254256ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65)))));
                        var_25 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_7])) / (-1884697954))))));
                        arr_27 [i_7] [i_7] [3U] [i_7] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)61))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
                    {
                        arr_32 [i_1] [i_3] [i_4] [i_5] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)32)) == (((/* implicit */int) var_14))));
                        arr_33 [i_3 - 2] [i_4] [i_4] [i_5] [i_8] [i_8] = ((/* implicit */short) arr_29 [i_1] [i_3] [i_3] [i_3] [i_8]);
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7797532610537930429ULL)))))));
                    }
                }
                for (int i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
                {
                    arr_36 [i_1] [7U] [7U] [7U] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_35 [i_9] [i_4] [i_3 + 1] [i_1])) > (var_6))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1] [i_3] [(unsigned char)8] [i_4] [i_9])))));
                    arr_37 [i_1] [i_1] [i_1] [(signed char)9] = ((/* implicit */long long int) (unsigned char)3);
                }
                var_27 = ((/* implicit */int) ((unsigned int) arr_8 [i_3 - 1]));
                arr_38 [i_1] [i_3] = ((/* implicit */signed char) var_5);
            }
            /* vectorizable */
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
            {
                arr_41 [i_1] [i_3] [i_10] [6] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 65011712U)) ? (((/* implicit */int) arr_25 [i_1] [(short)14] [(unsigned char)4] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)194))))));
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((var_9) ? (((((/* implicit */_Bool) var_4)) ? (arr_30 [i_1] [i_3 + 2] [i_3 + 2]) : (3664800926U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                var_29 = (-((~(((/* implicit */int) var_8)))));
            }
            for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                arr_44 [i_1] = ((/* implicit */signed char) (!(((((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) (unsigned char)65)))) >= ((~(((/* implicit */int) var_2))))))));
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_5)))) ? (min((11), (((/* implicit */int) (short)9948)))) : ((~(((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)20)), (70231305224192LL)))) ? (-792109925) : ((-(((/* implicit */int) arr_23 [i_1] [1U] [6U] [i_11] [i_1])))))) : (((/* implicit */int) arr_9 [i_3] [i_11]))));
                /* LoopSeq 1 */
                for (unsigned int i_12 = 3; i_12 < 14; i_12 += 4) 
                {
                    var_31 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((var_7), (((/* implicit */unsigned int) (unsigned char)57)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)65)))))))) : (-5043824433544983838LL)));
                    var_32 -= ((/* implicit */int) var_3);
                    arr_49 [i_1] [i_1] [i_11] [i_12] = (+(((/* implicit */int) arr_39 [i_1] [i_1])));
                    var_33 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(2147483638)))) ? (((/* implicit */int) (short)0)) : (427637856)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)81))) - (((((/* implicit */_Bool) 3362543503U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) : (arr_18 [i_12 - 2] [i_11] [i_1]))))) : (((/* implicit */long long int) -2147483633))));
                    var_34 = ((/* implicit */long long int) min((var_16), (((/* implicit */unsigned int) (~(var_15))))));
                }
            }
            var_35 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_12))) && (((/* implicit */_Bool) min((((/* implicit */int) arr_31 [i_3])), (var_6))))))), ((((!(((/* implicit */_Bool) 2147483638)))) ? (((((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_1] [i_3] [i_3] [i_3])) ? (var_6) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_5)))))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_13 = 2; i_13 < 13; i_13 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned int) var_11);
                arr_52 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_13] [i_13 + 1] [i_13 + 2]))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) var_6)) : (var_5))))))));
                var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) max((var_3), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) && (((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_13))))))))))));
                arr_53 [1ULL] [i_3 - 2] [i_1] [i_1] &= (-(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)163))) / (-8383067158547150685LL))) >= (((/* implicit */long long int) var_7))))));
                /* LoopSeq 1 */
                for (unsigned int i_14 = 3; i_14 < 12; i_14 += 3) 
                {
                    var_38 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_26 [i_1] [i_13] [i_13] [i_14 + 1] [i_13] [i_3 - 2])))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) < (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)184)), (-5683602261220995592LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5)))))));
                    arr_57 [(unsigned char)2] [i_3] [i_14] = ((/* implicit */signed char) arr_4 [11U]);
                    var_39 = ((/* implicit */long long int) max(((signed char)63), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_51 [i_14] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)193)) ? (0U) : (((/* implicit */unsigned int) -670224034))))))))));
                    var_40 = ((/* implicit */_Bool) arr_31 [i_3 - 3]);
                    var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((unsigned short) max((((((/* implicit */_Bool) (short)12236)) ? (-8383067158547150685LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */long long int) var_15))))))));
                }
            }
            for (unsigned long long int i_15 = 2; i_15 < 13; i_15 += 1) /* same iter space */
            {
                var_42 -= ((/* implicit */unsigned char) 7355108426016297362ULL);
                var_43 = ((/* implicit */_Bool) ((long long int) ((3339015610U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_1]))))));
            }
            /* vectorizable */
            for (unsigned short i_16 = 0; i_16 < 15; i_16 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 1) 
                {
                    arr_64 [i_3] [i_16] = (~(((/* implicit */int) (signed char)57)));
                    var_44 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 967350597U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))) : (13149211710110203974ULL)))));
                }
                for (short i_18 = 3; i_18 < 14; i_18 += 1) 
                {
                    arr_67 [i_1] [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_18] [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))));
                    var_45 = ((/* implicit */_Bool) ((arr_20 [i_1] [i_3 - 1]) >> (((((/* implicit */int) (unsigned char)81)) - (62)))));
                    /* LoopSeq 2 */
                    for (long long int i_19 = 2; i_19 < 12; i_19 += 1) /* same iter space */
                    {
                        arr_70 [i_16] [(_Bool)0] [i_16] [(_Bool)0] [i_16] = ((/* implicit */long long int) (short)2048);
                        var_46 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (signed char)-51)))) | (((/* implicit */int) arr_5 [i_19 - 2]))));
                    }
                    for (long long int i_20 = 2; i_20 < 12; i_20 += 1) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) | (((((/* implicit */_Bool) arr_20 [i_1] [i_1])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_13))))));
                        arr_75 [i_16] = ((/* implicit */signed char) 633896902U);
                        arr_76 [i_16] [i_18] [(unsigned char)5] [i_3] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 - 3]))) < (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-20)))))));
                        arr_77 [i_16] [i_16] [i_3] [i_16] = ((/* implicit */unsigned short) (-((+(arr_29 [i_1] [i_3 + 1] [i_16] [i_18 + 1] [i_3 + 1])))));
                        arr_78 [i_1] [i_3 - 3] [i_3 - 3] [i_1] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_18 - 1] [i_20 + 1])) ? (((/* implicit */int) ((arr_65 [i_1] [i_1] [i_16] [i_18 - 3] [i_20]) < (-1523829666587538038LL)))) : (((/* implicit */int) arr_62 [i_3 - 1] [i_18 - 3] [i_20 - 1] [i_20]))));
                    }
                    var_48 = ((/* implicit */short) 2147483642);
                    arr_79 [i_1] [i_1] [(unsigned char)14] [i_16] = ((/* implicit */_Bool) var_8);
                }
                arr_80 [i_1] [i_16] [8LL] [i_16] = var_7;
            }
        }
        var_49 *= ((/* implicit */unsigned char) (~(min(((+(((/* implicit */int) var_0)))), (arr_58 [(unsigned char)14] [i_1] [(unsigned char)14] [i_1])))));
        var_50 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_68 [i_1] [4ULL] [i_1]))));
    }
    var_51 = ((/* implicit */signed char) var_14);
    /* LoopSeq 1 */
    for (int i_21 = 0; i_21 < 12; i_21 += 4) 
    {
        var_52 = ((/* implicit */_Bool) arr_48 [(signed char)1] [i_21] [i_21]);
        arr_84 [i_21] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_6))))));
        arr_85 [(unsigned short)5] = ((/* implicit */short) ((arr_21 [i_21] [(short)2] [i_21] [i_21] [i_21]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [6ULL])))));
    }
}
