/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81645
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_8 [i_0] [i_0 + 1])) > (((/* implicit */int) arr_9 [i_0] [i_0 - 1] [(unsigned short)0] [i_3]))))))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                            {
                                var_13 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 + 1])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_1]))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0] [i_1] [i_3]), (((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2] [i_0])))))))), (((/* implicit */long long int) var_9))));
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_5 [i_1] [i_2] [i_2]), (((/* implicit */unsigned short) var_6)))))))) ? (max((((/* implicit */long long int) (unsigned char)153)), (-6145112655534506980LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((8244468661322907608ULL), (((/* implicit */unsigned long long int) (unsigned char)177))))) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) var_0))))))))));
                                arr_13 [(signed char)18] [i_0] [(unsigned short)11] [i_2] [i_3] [i_4] = var_8;
                            }
                            for (long long int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                            {
                                var_15 = ((/* implicit */long long int) max((var_15), (arr_6 [i_0 + 1] [0U])));
                                var_16 = ((/* implicit */unsigned char) var_2);
                                arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)79)), ((unsigned short)14)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) arr_14 [i_0] [i_0 - 1]))))) : (max((max((((/* implicit */long long int) arr_1 [i_0])), (var_8))), (arr_11 [i_0] [i_0 - 1] [i_0 - 1] [i_2] [i_2] [i_3])))));
                            }
                            var_17 = max((((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (arr_6 [i_0 + 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]))) + (arr_6 [i_0 + 1] [i_0 + 1]))));
                            /* LoopSeq 1 */
                            for (long long int i_6 = 2; i_6 < 18; i_6 += 2) 
                            {
                                arr_20 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_1 [i_2])))), (((/* implicit */int) ((unsigned short) ((long long int) var_9)))))))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0 - 1] [i_6 - 1] [i_6 - 2])) | (((/* implicit */int) arr_17 [5LL] [5LL]))))) ? (((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (arr_19 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_19 [i_6] [i_6 - 2] [i_6 - 2] [i_6] [i_6])) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_17 [i_6] [(unsigned short)16])) + (2147483647))) << (((((/* implicit */int) arr_8 [i_0] [i_2])) - (52095)))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_3] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0])))))));
                            }
                            arr_21 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [i_3])) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_2])) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 1])))) : (((/* implicit */int) max((arr_8 [i_0 + 1] [i_0 + 1]), (arr_8 [i_0 + 1] [i_0 + 1]))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (long long int i_7 = 1; i_7 < 18; i_7 += 3) 
                {
                    var_20 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_24 [i_1] [i_1] [i_1]) : (arr_24 [i_7 - 1] [i_7 + 1] [i_7 - 1])))) ? ((~(var_2))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_11 [i_0] [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_7]))))));
                    arr_25 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53646)) ? (3166424148137136387ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)91)))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_9 [i_0] [1ULL] [9U] [i_7])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned char)9])) : (((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) ((long long int) arr_17 [8LL] [i_0]))) ? (((var_11) - (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [9LL])))))));
                }
                for (short i_8 = 3; i_8 < 15; i_8 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((3702658417402810585LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5)))))) ? (((-1LL) | (-3702658417402810587LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))))));
                    arr_29 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_8] [i_1] [i_8])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_22 [14LL] [(unsigned short)8] [(unsigned short)8])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_8 - 3] [i_0 - 1])) > (((/* implicit */int) arr_5 [i_0] [i_8 - 2] [i_0 + 1]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((arr_12 [i_8 + 4] [(unsigned short)17] [i_0 - 1]), (arr_12 [i_8 + 4] [i_1] [i_0 + 1])))) < (max((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0])) ? (var_2) : (arr_11 [i_0] [i_8 + 4] [i_1] [i_1] [i_0 + 1] [i_0]))), (var_11)))));
                    arr_30 [i_8] [i_0] [i_0] = ((((((/* implicit */unsigned long long int) (~(8751557025198785578LL)))) < ((+(18446744073709551615ULL))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [(short)16] [i_0 - 1]))) : (min((var_5), (((/* implicit */long long int) arr_7 [(short)1] [(short)1] [i_8])))))) : (min((max((((/* implicit */long long int) arr_2 [i_0])), (var_11))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (arr_19 [i_0] [i_0] [i_1] [(unsigned short)6] [i_8]))))));
                }
                for (short i_9 = 3; i_9 < 15; i_9 += 2) /* same iter space */
                {
                    var_23 = min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0])) >> ((((~(arr_23 [i_0] [i_1] [i_9 + 2]))) - (5110064044119506219LL)))))), (min((arr_4 [i_0 - 1] [i_0]), (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0 + 1] [i_1] [12ULL] [i_9]))))))));
                    arr_34 [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (var_5)));
                }
                for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    var_24 = ((((/* implicit */_Bool) arr_23 [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_26 [14ULL] [14ULL] [0ULL] [i_0 + 1])) + (((/* implicit */int) arr_3 [i_0] [i_1] [i_10])))) >= (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10])) ? (((/* implicit */int) arr_9 [i_0 - 1] [0LL] [i_0] [9LL])) : (((/* implicit */int) arr_7 [(signed char)5] [(signed char)5] [i_10])))))))) : ((-(arr_6 [i_0] [i_0 + 1]))));
                    arr_37 [i_10] [i_10] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (max((arr_31 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]), (arr_31 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0 + 1] [i_0 + 1] [i_0]))))))));
                    var_25 &= ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0]);
                }
                arr_38 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0]) | (arr_4 [i_0] [i_0])))) | (((((/* implicit */_Bool) arr_14 [i_0] [18LL])) ? ((~(arr_0 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_33 [i_0] [i_0] [i_1] [i_1]) : (var_11))))))));
                var_26 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-92))) : (15207902079185586317ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40556))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [11LL] [i_1] [i_1])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_4 [i_0 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))))));
            }
        } 
    } 
    var_27 += ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_3))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)26104)) ? (((/* implicit */int) (short)-30539)) : (((/* implicit */int) (unsigned char)197))))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) % (var_11))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) 1563715029U)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (unsigned char)137)))) + (160)))));
    var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((var_7), (var_7))), (((/* implicit */unsigned int) max((var_9), (var_3)))))))));
}
