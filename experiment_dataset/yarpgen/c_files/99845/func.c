/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99845
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) (unsigned char)7);
                    var_16 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 743740744623210038LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (var_5)))))), ((!(((((/* implicit */_Bool) arr_10 [i_2] [7LL])) || (((/* implicit */_Bool) -8997750666727666602LL))))))));
                    arr_11 [i_2] = (((~(((/* implicit */int) (unsigned char)60)))) ^ ((~(((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) - (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_10 [i_0] [i_1]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~((((~(((/* implicit */int) (unsigned char)73)))) % ((+(((/* implicit */int) (signed char)-113)))))))))));
    /* LoopSeq 2 */
    for (long long int i_3 = 1; i_3 < 17; i_3 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_2))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_14))));
            /* LoopNest 2 */
            for (signed char i_5 = 2; i_5 < 16; i_5 += 4) 
            {
                for (unsigned short i_6 = 1; i_6 < 15; i_6 += 4) 
                {
                    {
                        arr_23 [i_6] [i_4] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) (-(max((((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_16 [i_3]))))), ((-(((/* implicit */int) (unsigned char)15))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                        {
                            arr_26 [i_3] [i_3] [i_3 + 1] [i_3 - 1] [i_3] [i_3] [i_3] = ((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 824307233840366732LL)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (signed char)121)))))));
                            var_21 = ((/* implicit */unsigned short) var_14);
                        }
                        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((((/* implicit */int) arr_21 [i_5 + 1] [i_5 + 1] [i_5] [i_8])), (((((/* implicit */int) arr_21 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_8])) ^ (((/* implicit */int) (signed char)100)))))))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((((((((/* implicit */_Bool) arr_25 [i_3] [i_5] [i_5] [i_3] [i_8] [i_3] [i_3])) ? (-2350862520148636005LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_3] [i_3 + 1] [i_3] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))) : (arr_20 [i_8] [i_6 + 4] [i_5 - 2] [i_3 - 1])))) : (((long long int) 1961958879))))));
                            arr_30 [i_6 + 2] [i_3] [3LL] [i_6] [i_3] = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) arr_24 [i_3] [i_4 - 2] [i_4 - 2] [i_6 + 4] [i_8])) ? (((/* implicit */int) arr_18 [i_6] [i_4] [i_3 - 1])) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_24 [i_4 + 2] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]))))));
                            arr_31 [i_3] [i_3] [i_5] [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5] = var_13;
                        }
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_13 [i_4 + 1] [i_4 - 2]))))))));
                        var_25 = ((/* implicit */unsigned char) 4294967295U);
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)60)) == (((((/* implicit */int) arr_24 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 - 2] [i_4 - 2])) / (((/* implicit */int) arr_24 [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 + 1] [i_4 - 2])))))))));
                    }
                } 
            } 
            arr_32 [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)105)), (var_0))))))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_9 = 2; i_9 < 18; i_9 += 3) 
        {
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? ((-(var_7))) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (-(var_10)))))) : (((unsigned int) (signed char)-74))));
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [(signed char)10])) <= (min(((-(((/* implicit */int) (signed char)100)))), (((/* implicit */int) arr_27 [i_9] [i_9] [(signed char)16] [i_9 - 2] [i_9 + 1] [i_9 - 1])))))))));
            arr_35 [i_3] = ((/* implicit */long long int) min(((~(((var_8) * (((/* implicit */int) (_Bool)0)))))), (((((/* implicit */_Bool) (unsigned char)25)) ? ((-(((/* implicit */int) arr_12 [i_3])))) : ((~(var_8)))))));
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_25 [i_9] [(unsigned char)16] [i_9] [i_9] [i_9] [i_9 - 1] [i_9 - 2])) : (((/* implicit */int) arr_25 [i_9] [(signed char)16] [(signed char)16] [i_9] [i_9] [i_9] [i_9 - 2])))))))));
                /* LoopSeq 2 */
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_10] [i_11])))))) == (((unsigned int) 3407859745U)))))));
                    var_31 = ((/* implicit */signed char) (_Bool)0);
                }
                /* vectorizable */
                for (unsigned char i_12 = 4; i_12 < 16; i_12 += 3) 
                {
                    arr_47 [i_12] [i_3] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_10])) | (var_1)));
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_9] [i_9 - 1] [2U])))))));
                }
            }
        }
        /* vectorizable */
        for (signed char i_13 = 3; i_13 < 17; i_13 += 4) 
        {
            arr_50 [i_3] [i_13] = ((/* implicit */unsigned int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3407859745U)))))));
            arr_51 [i_3] [i_3] [i_13 + 1] = ((/* implicit */unsigned char) ((unsigned int) arr_34 [i_3 + 1] [i_13 - 3]));
        }
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)2)) : (arr_13 [i_3] [i_14]))), (((/* implicit */int) ((unsigned char) (unsigned char)27)))))) - (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)230)) && ((_Bool)1))))) & (((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_3] [12U] [i_14] [i_14] [i_14 - 1] [i_14] [i_14]))) / (var_11))))))))));
            arr_55 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1038939391)) ? (max((-7655797153978530620LL), (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
            arr_56 [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_7);
        }
    }
    for (long long int i_15 = 1; i_15 < 17; i_15 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_35 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_49 [i_15] [i_16]))));
            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (signed char)31))) ? ((+(((((/* implicit */long long int) var_8)) + (var_10))))) : (((/* implicit */long long int) arr_19 [i_15] [(unsigned short)18])))))));
            arr_61 [17] [i_16] = ((/* implicit */signed char) (~(((/* implicit */int) ((((arr_44 [i_15] [i_15] [i_15] [i_15]) & (var_11))) < (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_16] [i_16] [i_16] [i_16] [i_16]))))))));
        }
        /* vectorizable */
        for (unsigned char i_17 = 0; i_17 < 19; i_17 += 4) 
        {
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_15 + 2] [i_17] [i_15 - 1] [i_15 - 1] [i_15 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_17]))) : (var_11)));
            var_38 = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) arr_17 [i_15] [i_15])))));
            arr_65 [(unsigned short)4] [(unsigned short)4] = arr_45 [i_15 + 1] [i_17] [i_15 + 1] [i_17];
            var_39 = ((/* implicit */signed char) max((var_39), ((signed char)69)));
            arr_66 [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned char)170)) : (1961958885)));
        }
        for (unsigned char i_18 = 0; i_18 < 19; i_18 += 1) 
        {
            var_40 = ((/* implicit */int) max((var_40), (min(((+(((/* implicit */int) arr_58 [i_15 + 1])))), (((/* implicit */int) ((signed char) arr_36 [i_15 + 1])))))));
            arr_70 [i_15] [i_18] = ((/* implicit */unsigned int) (signed char)114);
        }
        for (signed char i_19 = 1; i_19 < 17; i_19 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_20 = 2; i_20 < 16; i_20 += 2) 
            {
                var_41 = ((/* implicit */signed char) ((var_10) ^ (min((((/* implicit */long long int) ((signed char) var_8))), (8959882186308032025LL)))));
                arr_76 [i_19] = ((signed char) var_10);
                arr_77 [i_19] [i_19] [i_20] = ((/* implicit */unsigned int) (((((_Bool)1) ? (var_0) : (((/* implicit */long long int) var_1)))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (arr_13 [i_15 - 1] [i_15 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2413353150158837592LL)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned char)8))))))))));
            }
            /* vectorizable */
            for (unsigned int i_21 = 0; i_21 < 19; i_21 += 4) 
            {
                arr_80 [6LL] [6LL] [i_19] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_15 + 1] [i_19] [i_19 - 1] [i_19] [i_21] [i_21] [i_21]))) : (var_7)))));
                var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) 2939704279U))));
            }
            arr_81 [17LL] [i_19] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-71))));
            arr_82 [i_19] [i_19 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)56972)) <= ((+(((/* implicit */int) arr_59 [i_15 + 1] [i_19 + 1]))))));
            arr_83 [i_19] = ((/* implicit */signed char) min((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((2147483647) / (((/* implicit */int) arr_40 [i_15] [i_19] [i_19 + 1] [i_19] [i_19])))) : (((/* implicit */int) arr_45 [i_15] [i_15] [i_19] [i_19])))))));
        }
        var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) arr_29 [i_15] [i_15 - 1] [i_15] [i_15] [i_15] [i_15]))));
        arr_84 [i_15] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (arr_28 [i_15] [i_15 - 1] [(_Bool)1])))))));
    }
}
