/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89664
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) var_11)), (var_7))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))));
    var_18 = var_14;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) max((arr_1 [i_0] [(short)9]), (var_2)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_20 = ((/* implicit */_Bool) ((long long int) ((((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) / (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [(_Bool)1])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                arr_8 [i_0] [i_0] [(unsigned char)17] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)41197)), (((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (arr_3 [i_2 - 1]) : (arr_3 [i_2 - 1])))));
            }
            arr_9 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_0])) && (((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (8055737417385558815ULL))))))) == ((-(((/* implicit */int) (unsigned short)65518))))));
        }
        var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_8))));
    }
    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) (+(((unsigned int) min((var_5), (((/* implicit */int) arr_12 [i_3])))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (long long int i_7 = 1; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned char) max((((/* implicit */int) arr_12 [i_3])), (max((((((/* implicit */int) var_4)) / (((/* implicit */int) (signed char)93)))), (((/* implicit */int) arr_11 [i_7 - 1] [i_7 + 1]))))));
                                var_23 = ((/* implicit */long long int) var_1);
                                var_24 = max((max((((/* implicit */unsigned long long int) (unsigned char)255)), (((((/* implicit */unsigned long long int) -16777216)) | (10391006656323992799ULL))))), (((/* implicit */unsigned long long int) ((arr_25 [i_3] [i_3] [2] [i_7 + 1] [i_6] [13LL]) < (((/* implicit */int) max((arr_17 [i_3] [i_6] [i_7]), (((/* implicit */short) (unsigned char)7)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 1; i_9 < 20; i_9 += 4) 
                        {
                            arr_34 [i_9] [i_4] [i_4] [i_4] [i_9] [i_4] [i_4] = ((/* implicit */short) (+(((((/* implicit */long long int) var_5)) / (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)47208))))))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_14))));
                            arr_35 [i_8] [14LL] [i_9] &= ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_32 [i_9 + 1] [i_9 + 2] [i_9 + 3] [i_9 + 2] [i_9 - 1] [i_9 + 2] [i_9 + 3])) | (((/* implicit */int) arr_32 [i_9 + 3] [i_9 - 1] [i_9 + 3] [i_9 + 3] [i_9 + 3] [i_9 + 3] [i_9 - 1]))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((unsigned int) (unsigned short)47206))))) ? (min((((/* implicit */long long int) ((arr_26 [i_3] [i_9] [i_5] [i_8] [(short)10]) ^ (((/* implicit */int) var_11))))), (min((var_10), (var_10))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 3; i_10 < 21; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8] [i_8]))) * (8055737417385558832ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_38 [i_10] [i_10 + 2] [i_10 - 3] [i_10 - 3] [i_10 - 3])))))));
                            var_28 &= ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)-70)), ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_27 [i_10] [i_10 - 1] [i_8] [i_5] [9U] [i_3]))))))));
                            var_29 += ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) var_16)) >= (arr_26 [i_3] [i_4] [8U] [(unsigned short)22] [8U])))) & (((/* implicit */int) var_15)))) == (var_5)));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                        {
                            arr_44 [i_5] [i_4] [i_5] [i_8] [i_11] [i_8] [i_4] = ((/* implicit */unsigned int) (!(((_Bool) var_9))));
                            arr_45 [i_3] [i_3] [(_Bool)1] [i_3] [i_3] = ((unsigned char) var_13);
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)234))) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) arr_41 [i_3] [i_4] [i_4] [i_4] [i_5] [(unsigned short)11] [i_11]))))) ? (max((((/* implicit */unsigned int) var_14)), ((-(var_9))))) : (arr_29 [i_3] [i_3] [i_8] [i_11])));
                            var_31 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_14)) ^ (var_5)))) / (arr_24 [i_5] [i_4])))) * (max((((unsigned long long int) var_1)), (((((/* implicit */_Bool) var_2)) ? (15521638572049217672ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                            var_32 &= ((/* implicit */unsigned short) (~(arr_23 [i_5] [i_5] [i_5] [i_5])));
                        }
                        /* LoopSeq 2 */
                        for (short i_12 = 4; i_12 < 21; i_12 += 4) /* same iter space */
                        {
                            arr_49 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */short) var_11);
                            var_33 = ((/* implicit */_Bool) (unsigned char)247);
                        }
                        for (short i_13 = 4; i_13 < 21; i_13 += 4) /* same iter space */
                        {
                            var_34 = ((/* implicit */signed char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))) & ((~(((/* implicit */int) (unsigned char)238))))));
                            arr_52 [i_3] [i_4] [i_5] [i_8] = ((/* implicit */int) min((min((((/* implicit */short) (unsigned char)248)), ((short)32764))), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_38 [i_4] [i_13 - 3] [i_13] [i_13] [i_13])))))));
                            var_35 = ((/* implicit */int) arr_33 [i_3] [(unsigned char)19] [i_3] [i_8]);
                        }
                    }
                    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_15 = 1; i_15 < 22; i_15 += 1) 
                        {
                            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3] [i_5])) / (((/* implicit */int) max((((/* implicit */short) (unsigned char)23)), ((short)12182)))))))));
                            var_37 = ((/* implicit */unsigned int) (~(min((((arr_16 [i_4] [i_15]) ? (((/* implicit */int) arr_42 [14ULL] [14ULL] [i_4] [i_5] [i_14] [i_15 - 1])) : (((/* implicit */int) arr_15 [i_3] [i_4] [i_4])))), (((var_12) >> (((((/* implicit */int) arr_28 [i_5] [(unsigned char)4])) - (35219)))))))));
                        }
                        var_38 &= ((/* implicit */unsigned short) var_13);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 23; i_16 += 4) 
        {
            for (long long int i_17 = 0; i_17 < 23; i_17 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        arr_67 [0ULL] [i_16] [i_17] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_66 [i_3] [i_16] [i_16] [i_17] [i_18])) ? (var_5) : (((/* implicit */int) arr_66 [i_3] [i_16] [i_17] [i_18] [i_18]))))) : (max((((/* implicit */unsigned int) var_8)), (var_0)))));
                        arr_68 [i_18] [i_18] [i_17] [i_18] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_64 [i_3] [i_16] [i_18])), (((((/* implicit */_Bool) arr_64 [i_3] [i_3] [i_3])) ? (arr_36 [i_3] [i_16] [i_3] [i_17] [i_18] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_16])))))));
                        var_39 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min(((unsigned char)247), (arr_32 [(unsigned char)21] [i_3] [i_16] [i_16] [i_17] [i_18] [i_18])))), (var_13)));
                    }
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)8593)) >> (((3826565779465834752LL) - (3826565779465834725LL)))))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) ((((/* implicit */_Bool) (short)12212)) && ((_Bool)1))))))));
                    var_41 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_29 [i_3] [i_3] [i_16] [i_17])) ? (arr_29 [i_3] [i_3] [(unsigned short)6] [i_16]) : (arr_29 [i_3] [i_3] [i_16] [i_17]))), (((arr_29 [i_3] [i_16] [i_3] [i_16]) / (arr_29 [i_17] [i_16] [(unsigned char)7] [i_3])))));
                }
            } 
        } 
        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((14403359182023986082ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) : (((var_9) | (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)251)) * (((/* implicit */int) arr_54 [i_3] [i_3] [i_3] [i_3])))))))));
        var_43 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max(((~(4294967284U))), (((/* implicit */unsigned int) ((unsigned short) var_4)))))) * (max((var_6), (((/* implicit */unsigned long long int) ((int) var_6)))))));
    }
    var_44 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((-6867060393565170842LL), (((/* implicit */long long int) var_3))))) & (((((/* implicit */_Bool) 6867060393565170849LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (22ULL))))))));
}
