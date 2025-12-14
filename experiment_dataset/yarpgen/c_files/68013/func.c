/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68013
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [2] [i_0] = ((/* implicit */_Bool) (-(max((((/* implicit */long long int) -177883020)), ((~(-3978953424913595695LL)))))));
                arr_6 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) max((((/* implicit */int) var_6)), (max((((((/* implicit */int) var_6)) * (((/* implicit */int) (signed char)-62)))), ((-(((/* implicit */int) (_Bool)1)))))))))));
    var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) : (min((4615151472736349280ULL), (((/* implicit */unsigned long long int) -8821298310764920672LL))))));
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */short) (+(((((/* implicit */int) (unsigned char)120)) >> (((((/* implicit */int) var_2)) - (171)))))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (signed char)96))));
        arr_12 [(unsigned short)2] = ((/* implicit */long long int) (((~(var_0))) ^ (-1178121719)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_23 [i_3] [i_5] [i_5] [i_6] [i_5] &= ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_21 [i_3] [i_3] [i_5] [i_5] [i_5])) * (((/* implicit */int) var_1))))));
                        var_14 += ((/* implicit */short) ((unsigned long long int) (+(arr_19 [i_3] [19ULL] [i_5] [i_6]))));
                        arr_24 [16] [i_6] = ((/* implicit */unsigned long long int) ((min(((!(((/* implicit */_Bool) 0ULL)))), (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)114)) ? (((((/* implicit */_Bool) var_7)) ? (-7803815509168410089LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32256))))) : (((/* implicit */long long int) arr_16 [i_5] [i_3]))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */long long int) (-(((/* implicit */int) (!((_Bool)1))))));
        arr_25 [0LL] = ((/* implicit */_Bool) var_1);
    }
    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_29 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) : (var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-7042)))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) * (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (signed char)-109)))))));
                    var_18 = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */signed char) arr_27 [i_8])), ((signed char)-62))))));
                    /* LoopSeq 4 */
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        arr_38 [i_7] [i_8] [i_9] [i_10] [(_Bool)1] = (~((~(arr_13 [i_7] [i_7]))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_19 [i_10] [i_9] [i_7] [i_7]))));
                    }
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), ((-((((!(var_10))) ? (arr_35 [i_11 - 1] [i_7] [i_8] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                        arr_41 [i_7] [i_7] [i_7] [(unsigned short)5] [(unsigned short)2] = ((/* implicit */unsigned long long int) (~(min((min((((/* implicit */int) arr_36 [i_7] [i_7] [i_7])), (arr_40 [i_11]))), (((/* implicit */int) var_1))))));
                        arr_42 [i_7] [i_8] [i_8] [i_9] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65533)) ? (-1154428356) : (((/* implicit */int) (unsigned char)60))))), (max((((/* implicit */unsigned long long int) var_8)), (15929639736653697753ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_7] [i_8] [i_11])) >> (((((/* implicit */int) (unsigned char)151)) - (138))))))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (max((((/* implicit */unsigned int) var_7)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56059))) - (arr_39 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11])))))));
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */long long int) var_2);
                        arr_45 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15554370958728355675ULL)) ? (((/* implicit */int) arr_32 [19ULL] [19ULL] [i_12 - 1])) : (((/* implicit */int) arr_21 [i_12] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12]))))) ? (((/* implicit */int) min((max((arr_15 [i_7]), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) var_9))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1] [i_12 - 1]))) <= ((-9223372036854775807LL - 1LL)))))));
                        arr_46 [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (min((15808875399931947187ULL), (((/* implicit */unsigned long long int) (unsigned char)62))))))) ? (((/* implicit */int) arr_33 [i_7] [i_8] [i_9] [i_12])) : (((/* implicit */int) (signed char)-30))));
                        var_23 = ((/* implicit */long long int) (~((+(((/* implicit */int) var_7))))));
                        arr_47 [i_12 - 1] [i_9] [i_8] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
                    }
                    for (unsigned short i_13 = 2; i_13 < 19; i_13 += 2) 
                    {
                        arr_51 [i_9] [i_8] &= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (((!(((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)12219))))), ((+(min((9223372036854775807LL), (((/* implicit */long long int) (_Bool)0))))))));
                        arr_52 [i_7] [i_8] [i_9] [i_13] [i_13 - 1] = ((/* implicit */int) min((0LL), (((/* implicit */long long int) (unsigned short)6))));
                    }
                    arr_53 [i_9] [(signed char)2] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_7] [i_8] [i_9]))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) * ((~(11470618522270964052ULL)))))));
                    arr_54 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((~(((/* implicit */int) arr_36 [i_7] [(unsigned char)7] [i_9])))) : (((((/* implicit */_Bool) arr_36 [i_7] [(short)11] [i_7])) ? (((/* implicit */int) arr_32 [i_9] [i_8] [i_9])) : (((/* implicit */int) arr_36 [i_9] [i_8] [i_7]))))));
                }
            } 
        } 
        arr_55 [i_7] = (((((-(((/* implicit */int) arr_26 [i_7])))) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned short)8)) ? (((((/* implicit */int) var_3)) ^ (arr_40 [i_7]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)(-32767 - 1))) : (var_0))))) + (327841465))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 596135828U)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                {
                    var_25 = (-(((arr_44 [i_7] [i_14] [i_14] [i_15 - 1]) ? (arr_60 [i_15 - 1] [i_15 - 1] [i_15 - 1]) : ((+(184086082))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_16 = 1; i_16 < 17; i_16 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_43 [i_15 - 1] [i_16 + 1] [i_16] [i_16] [i_16 + 3]))));
                        arr_65 [i_7] [i_15] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_16 + 1] [i_15 - 1] [i_15 - 1]))));
                    }
                    for (signed char i_17 = 0; i_17 < 20; i_17 += 2) /* same iter space */
                    {
                        arr_69 [i_7] [i_7] |= min((((((/* implicit */_Bool) arr_49 [i_17] [i_15 - 1] [(signed char)13])) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) ((((/* implicit */int) arr_34 [i_15])) != (((/* implicit */int) (short)32754))))))), (((/* implicit */int) (signed char)110)));
                        arr_70 [i_14] = arr_21 [i_7] [14LL] [i_14] [(unsigned short)1] [i_14];
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (~(-1030654253))))));
                        arr_71 [i_7] [i_14] [16ULL] [(unsigned short)19] [(_Bool)1] [i_17] = (unsigned short)0;
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_34 [i_15 - 1])), (var_4)))) - (((4608599775417958133LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))))));
                    }
                    for (signed char i_18 = 0; i_18 < 20; i_18 += 2) /* same iter space */
                    {
                        arr_74 [i_7] [i_7] [i_15 - 1] [i_18] = ((/* implicit */int) (unsigned short)64568);
                        arr_75 [(unsigned short)8] [i_14] [i_14] [i_14] [11LL] [i_14] = ((/* implicit */unsigned long long int) var_1);
                        arr_76 [i_7] [i_7] [i_14] [i_15] [i_18] [i_15] = ((/* implicit */unsigned int) (unsigned short)55404);
                    }
                    arr_77 [(short)1] [(short)1] [(short)9] [i_15] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_7] [(signed char)18] [i_14] [i_15 - 1])) + ((-(((/* implicit */int) arr_61 [i_14] [i_15]))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_7] [i_14] [i_15 - 1]))) / (max((7ULL), (((/* implicit */unsigned long long int) arr_34 [13ULL]))))))));
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)28894), (((/* implicit */unsigned short) (unsigned char)60))))) | (((/* implicit */int) arr_59 [i_15] [i_14] [i_7]))))) ? (arr_18 [(unsigned char)2] [i_14] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)50)))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned char i_19 = 0; i_19 < 12; i_19 += 4) 
    {
        var_30 = ((/* implicit */unsigned long long int) -7020012003117505375LL);
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (min((var_4), (((/* implicit */unsigned int) var_7))))))) ? (max(((~(4841722807011716179LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)59318)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-113))))))) : (((/* implicit */long long int) max((arr_8 [i_19]), (((/* implicit */unsigned int) var_7)))))));
        var_32 = arr_58 [i_19] [i_19];
        var_33 ^= ((/* implicit */unsigned long long int) arr_39 [i_19] [i_19] [i_19] [i_19] [i_19]);
    }
    for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 2) 
    {
        arr_82 [i_20] = ((unsigned long long int) var_1);
        arr_83 [i_20] = ((/* implicit */unsigned char) (_Bool)1);
        arr_84 [i_20] [i_20] = ((/* implicit */long long int) var_2);
    }
    for (short i_21 = 0; i_21 < 18; i_21 += 4) 
    {
        arr_87 [i_21] = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_21]))))), ((+(-1LL)))));
        arr_88 [i_21] = ((/* implicit */unsigned long long int) (~(arr_20 [(unsigned char)16] [i_21] [(unsigned char)16])));
        var_34 -= (signed char)65;
    }
}
