/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64113
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_10))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) & (max((((/* implicit */unsigned int) var_3)), (3817762074U)))))));
        var_16 = arr_0 [i_0];
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_6))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_18 *= (+(((((/* implicit */_Bool) var_9)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) var_11)))));
        var_19 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1]))))), (min((arr_5 [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            arr_9 [i_1] [i_2] = (-(max((17979214137393152LL), (-17979214137393153LL))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 2) 
            {
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)3435))))) + (max((var_13), (var_8))))))));
                var_21 *= ((/* implicit */_Bool) (-(var_2)));
            }
        }
        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_5 = 4; i_5 < 14; i_5 += 2) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) (+(var_11)));
                    arr_21 [i_1] [i_1] [(signed char)6] [i_4] [i_1] [i_1] = ((/* implicit */signed char) arr_7 [i_1] [i_4]);
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_4 - 1])) & (((/* implicit */int) arr_3 [i_4 + 1]))));
                }
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_20 [i_8] [i_4] [i_4] [i_4])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_23 [i_1] [i_4] [3] [i_1] [i_1])) : (var_8)))) ? (min((((/* implicit */long long int) arr_6 [(_Bool)1])), (var_9))) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [(unsigned char)1] [i_7 + 1])))));
                        var_25 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-3431))))), (max((var_2), (((/* implicit */unsigned int) (signed char)41)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_4 - 1] [i_7] [i_8])))))));
                    }
                    for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        arr_30 [i_1] [i_4] [6ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_1] [i_4] [i_4] [i_4] [(unsigned short)13])) / (min(((~(arr_23 [i_1] [i_4] [i_5] [i_7] [i_9]))), (var_5)))));
                        arr_31 [i_7] [i_1] &= ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4 + 3] [i_5 - 4] [i_7 + 1])) ? (((/* implicit */int) arr_12 [i_4 + 2] [i_5 + 1] [i_7 + 1])) : (((/* implicit */int) arr_12 [i_4 + 2] [i_5 - 1] [i_7 + 1]))))) / (max((((/* implicit */long long int) arr_12 [i_4 + 2] [i_5 + 1] [i_7 + 1])), (var_12))));
                    }
                    for (signed char i_10 = 2; i_10 < 12; i_10 += 2) 
                    {
                        arr_35 [i_1] [i_1] [i_4] [(short)7] [i_10 - 1] = 17979214137393152LL;
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) -1496257340)) || (((/* implicit */_Bool) (short)-3421)))))))));
                        var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) -17979214137393153LL)))))));
                    }
                    var_28 &= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (arr_27 [i_1] [i_1] [i_4 - 1] [i_5] [i_7])));
                    var_29 |= ((/* implicit */unsigned char) max((var_8), (((/* implicit */long long int) (!(arr_2 [i_1] [i_4 - 1]))))));
                    var_30 *= -17979214137393153LL;
                }
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)143))) & ((~(var_12)))))));
                    arr_38 [i_1] [i_4] [(_Bool)1] [i_4] [i_4] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) arr_8 [i_4] [i_5 - 1]))))) : ((-(arr_37 [2LL] [i_4])))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) arr_22 [i_4 + 2] [i_11 + 1] [i_4])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_22 [i_4 + 3] [i_11 + 1] [i_4]))));
                    var_32 = ((/* implicit */unsigned int) ((max((var_7), (((/* implicit */unsigned long long int) arr_20 [i_4 + 1] [i_4 + 2] [i_4] [i_4 + 2])))) > (min((229582804626866642ULL), (((/* implicit */unsigned long long int) arr_20 [i_4 - 1] [i_4 - 1] [i_4] [12U]))))));
                    var_33 = arr_15 [i_1] [i_4];
                }
                var_34 = ((/* implicit */unsigned char) arr_7 [i_4 + 3] [i_4 - 1]);
                var_35 = ((/* implicit */long long int) var_7);
                arr_39 [i_1] [i_4] = ((/* implicit */unsigned short) max((15971319878507762662ULL), (((/* implicit */unsigned long long int) -17979214137393153LL))));
            }
            arr_40 [i_4] = ((/* implicit */_Bool) max((var_9), (((((/* implicit */long long int) (~(var_6)))) ^ ((~(var_13)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) arr_32 [i_1] [i_4] [i_4] [i_13] [(unsigned char)6])) > (((/* implicit */int) arr_32 [i_1] [i_1] [i_4] [i_1] [i_1]))))), ((-(var_1)))));
                            arr_50 [i_1] [i_12] [i_12] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_8))), (((/* implicit */long long int) var_0))))) ? (((max((((/* implicit */long long int) arr_44 [i_1] [5LL] [i_12] [i_13] [i_14])), (281472829227008LL))) & (var_9))) : (((/* implicit */long long int) var_6))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            arr_55 [i_1] = ((/* implicit */unsigned char) (~(min(((~(arr_14 [i_1] [(_Bool)1] [i_15]))), (((/* implicit */long long int) (_Bool)1))))));
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (+(var_13))))));
            var_38 += ((/* implicit */long long int) max((max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)3430))))), (1501649237U))), (((/* implicit */unsigned int) var_0))));
            /* LoopSeq 1 */
            for (unsigned long long int i_16 = 3; i_16 < 14; i_16 += 2) 
            {
                var_39 = ((/* implicit */short) ((((/* implicit */int) var_10)) != ((~(((/* implicit */int) (signed char)-42))))));
                var_40 &= ((/* implicit */unsigned long long int) var_8);
                var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
            }
            /* LoopSeq 3 */
            for (int i_17 = 1; i_17 < 12; i_17 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_18 = 2; i_18 < 14; i_18 += 2) 
                {
                    var_42 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) 8041016556960618447ULL)))))))));
                    arr_62 [i_15] [i_15] [i_17 + 1] [i_15] &= ((/* implicit */unsigned char) var_1);
                    arr_63 [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_1)) == ((-(17979214137393152LL)))));
                }
                for (unsigned char i_19 = 0; i_19 < 15; i_19 += 2) 
                {
                    arr_68 [i_17] [(short)8] [i_17] [i_15] [i_1] |= ((/* implicit */unsigned int) (+(12670021554985557882ULL)));
                    var_43 -= ((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) ((((/* implicit */int) ((var_9) > (((/* implicit */long long int) var_5))))) >= (arr_23 [i_1] [i_19] [i_1] [i_1] [12ULL]))))));
                    var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) var_11))));
                }
                var_45 = ((/* implicit */short) var_2);
            }
            for (int i_20 = 1; i_20 < 13; i_20 += 2) 
            {
                var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)71)) | (((/* implicit */int) (short)27043))))), (var_9))))));
                var_47 = ((/* implicit */short) var_4);
                /* LoopNest 2 */
                for (unsigned int i_21 = 2; i_21 < 12; i_21 += 2) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 2) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(1559846757)))), (min((17979214137393132LL), (1611382195421801374LL)))));
                            var_49 = ((/* implicit */int) var_4);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_23 = 2; i_23 < 13; i_23 += 2) /* same iter space */
                {
                    var_50 = max((((/* implicit */unsigned long long int) min((var_8), ((~(var_9)))))), (12670021554985557893ULL));
                    arr_79 [i_1] [i_15] [i_15] [i_15] [i_1] [i_20] = ((/* implicit */unsigned long long int) (+(var_1)));
                }
                for (unsigned char i_24 = 2; i_24 < 13; i_24 += 2) /* same iter space */
                {
                    var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) ((((/* implicit */_Bool) (~((+(var_1)))))) && (((/* implicit */_Bool) arr_29 [i_1] [i_15])))))));
                    arr_82 [i_1] [i_15] = ((/* implicit */_Bool) arr_81 [i_20 + 1] [i_20 + 2]);
                    arr_83 [i_1] [i_15] [i_15] [i_24] = ((/* implicit */unsigned char) ((4643248997957730601ULL) * (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_0)), (var_4))) * (((/* implicit */long long int) ((/* implicit */int) arr_77 [10ULL] [10ULL] [i_20 + 1] [i_20 + 1]))))))));
                }
                for (unsigned char i_25 = 2; i_25 < 13; i_25 += 2) /* same iter space */
                {
                    var_52 = (+(max((var_7), (((/* implicit */unsigned long long int) arr_56 [i_25])))));
                    var_53 = ((/* implicit */unsigned int) max((max((-17979214137393153LL), (((/* implicit */long long int) max(((short)27022), ((short)-27018)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_25 + 2] [i_15])))))));
                    var_54 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) var_0)), (min((var_7), (((/* implicit */unsigned long long int) var_11)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_1] [i_1] [i_15] [(short)0] [i_1]))))) ? (arr_11 [5] [i_15] [i_15] [i_25 - 2]) : (((/* implicit */unsigned long long int) (-(var_9))))))));
                }
                arr_87 [i_1] [i_15] [i_20] = ((/* implicit */unsigned short) (short)30513);
            }
            for (unsigned char i_26 = 3; i_26 < 14; i_26 += 2) 
            {
                var_55 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_12 [i_1] [(short)9] [i_1])), (min((((/* implicit */unsigned long long int) var_10)), (2873722409440620362ULL))))) / (min((max((10405727516748933167ULL), (var_7))), (((/* implicit */unsigned long long int) var_2))))));
                arr_90 [12U] [12U] [i_26] [i_15] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_26 + 1])) ? (var_6) : (var_5)))));
                /* LoopNest 2 */
                for (unsigned char i_27 = 4; i_27 < 11; i_27 += 2) 
                {
                    for (signed char i_28 = 0; i_28 < 15; i_28 += 2) 
                    {
                        {
                            var_56 = max((((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)-104)), ((unsigned short)26173)))), (-17979214137393153LL));
                            arr_95 [i_27] [i_28] &= ((/* implicit */unsigned char) var_13);
                            var_57 = ((/* implicit */signed char) max(((+(339328861U))), (((/* implicit */unsigned int) (~(arr_27 [i_15] [i_15] [i_28] [i_1] [i_28]))))));
                            var_58 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) var_13)) % (10405727516748933169ULL)))))));
                        }
                    } 
                } 
            }
        }
    }
}
