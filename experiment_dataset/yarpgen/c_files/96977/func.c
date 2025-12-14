/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96977
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((((/* implicit */int) var_3)) << (((((/* implicit */int) var_3)) - (31935)))))))) & (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19491)) ? (((/* implicit */int) (short)-19491)) : (((/* implicit */int) var_3))))), (((unsigned int) (short)-19492))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (short)19491))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (short)19491))) || (((/* implicit */_Bool) (short)-19492))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), ((~(((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) (-2147483647 - 1)))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_2))))))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_0])))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_2 [21ULL] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19492)))))) : ((+(var_12))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            {
                var_20 = (+(((/* implicit */int) ((((/* implicit */long long int) var_5)) != ((~(arr_1 [i_1])))))));
                /* LoopSeq 4 */
                for (unsigned int i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(arr_0 [i_2] [i_3])))) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_1 + 2] [i_2] [i_2] [i_3] [(_Bool)1] [i_4])) == (((/* implicit */int) var_3))))) : (((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) arr_9 [i_3] [i_3] [i_1])))))))));
                        arr_14 [i_1 - 1] [i_2] [i_1] [i_4] = ((/* implicit */int) arr_5 [i_2] [(_Bool)0]);
                        var_22 = ((/* implicit */long long int) arr_5 [i_1] [i_4]);
                    }
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)19491)) | (((/* implicit */int) ((arr_1 [i_1 + 3]) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_3 + 1]))))))))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_3 + 1])) ? (arr_0 [i_2] [i_3 - 2]) : (arr_0 [i_1 + 1] [i_3 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_1]) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)63)) ? (2410713038U) : (arr_2 [i_2] [i_1]))))))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    arr_17 [i_2] |= ((((/* implicit */_Bool) ((var_13) << (((/* implicit */int) arr_11 [i_1] [i_1] [i_1 - 3] [i_1]))))) ? (((arr_4 [i_1 + 2]) << (((((((/* implicit */_Bool) (short)19492)) ? (arr_2 [(_Bool)1] [(unsigned char)0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19493))))) - (4232781102U))))) : (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_5] [i_2])) <= (arr_0 [i_1] [i_1 - 3]))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_10 [i_1]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_7 = 1; i_7 < 20; i_7 += 3) /* same iter space */
                        {
                            var_25 = arr_3 [i_6];
                            arr_23 [i_1] [i_2] [i_5] [i_6] [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_7] [i_7] [18LL] [i_5] [i_2] [i_1])) ? (arr_2 [i_7 + 1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7])))));
                            var_26 -= ((/* implicit */unsigned short) ((arr_7 [i_2]) | (arr_7 [i_2])));
                            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1 + 2] [i_7 + 1])) << (((((/* implicit */int) arr_5 [i_1 + 3] [i_7 + 1])) - (31)))));
                        }
                        for (short i_8 = 1; i_8 < 20; i_8 += 3) /* same iter space */
                        {
                            var_28 += ((/* implicit */unsigned long long int) ((((((arr_7 [i_5]) + (2147483647))) >> (((var_8) - (9701282182090003736ULL))))) != (((/* implicit */int) min(((short)19492), ((short)-19492))))));
                            var_29 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1 + 1]) : (((((/* implicit */_Bool) arr_11 [i_5] [i_2] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_26 [i_8] [i_2] [i_2] [i_1])))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-19493))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19492))) : (var_13)))));
                            arr_27 [i_1] [i_1] [i_1 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8] [(unsigned short)6] [i_2] [(unsigned short)6])) ? (((/* implicit */int) (short)-19492)) : (arr_20 [i_1] [i_1] [i_1] [12ULL] [i_6] [i_8] [1U])))) ? (((((/* implicit */int) (_Bool)0)) / (arr_7 [i_1]))) : (((int) arr_25 [i_1] [(unsigned char)0] [i_1] [i_1] [i_1] [i_1]))))) ? (((unsigned int) min((((/* implicit */unsigned long long int) arr_4 [i_1 - 3])), (arr_0 [i_5] [i_2])))) : (((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_26 [(short)19] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) min((arr_7 [i_1]), (((/* implicit */int) (short)21732))))))));
                        }
                        var_30 *= ((/* implicit */short) var_0);
                        /* LoopSeq 1 */
                        for (long long int i_9 = 3; i_9 < 17; i_9 += 3) 
                        {
                            arr_32 [i_1] [i_6] [i_6] [i_6] [8LL] [i_1] = ((((/* implicit */_Bool) max((arr_21 [i_9] [i_9] [i_9 + 2] [i_9] [i_9] [i_9]), (arr_21 [i_9] [i_9] [i_9 - 3] [i_9] [i_9] [i_9 - 2])))) ? (2560469206U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_9 + 1] [1ULL] [i_9 - 3] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_21 [i_9] [11U] [i_9 - 1] [i_9] [9U] [i_9])) : (((/* implicit */int) arr_21 [i_9] [i_9] [i_9 + 3] [(unsigned short)6] [i_9] [i_9]))))));
                            var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                            var_32 -= ((/* implicit */unsigned long long int) arr_8 [i_5]);
                            var_33 = (~((~(arr_1 [i_1 + 3]))));
                        }
                        arr_33 [i_5] [i_2] [i_1] [i_6] = arr_2 [i_2] [i_5];
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            arr_39 [i_11] [i_10] [i_10] [i_5] [i_2] [i_1 - 2] [i_11] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) arr_9 [i_11] [i_2] [i_5])) : (max((((/* implicit */unsigned long long int) var_7)), ((+(var_6)))))));
                            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((((/* implicit */_Bool) (~(var_0)))) ? (((((/* implicit */_Bool) arr_24 [i_11] [i_11] [i_10] [i_2] [i_5] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37958))) : (var_6))) : (max((((/* implicit */unsigned long long int) arr_10 [i_2])), (var_13))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_11] [4] [i_2] [i_10] [i_2] [i_2] [i_1])) && (((/* implicit */_Bool) arr_20 [i_11] [i_10] [i_5] [i_5] [i_5] [i_1] [(signed char)12])))))))))));
                            arr_40 [i_1] = ((/* implicit */_Bool) (+((~(((unsigned int) arr_19 [i_1] [i_1] [i_1] [i_1]))))));
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (~(((/* implicit */int) (unsigned short)37958)))))));
                        }
                        arr_41 [i_5] [i_2] [i_5] [i_10] |= 2560469206U;
                        arr_42 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned char) (_Bool)0);
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        var_36 = ((unsigned int) ((((/* implicit */int) arr_11 [i_1] [i_2] [i_5] [i_12])) <= (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2]))));
                        var_37 = ((/* implicit */long long int) min((var_37), (((long long int) max((((/* implicit */long long int) ((var_7) - (arr_16 [i_1] [i_2] [(signed char)12] [i_12])))), (max((((/* implicit */long long int) arr_28 [i_1 - 2] [i_1 + 2] [i_2] [i_5] [i_5] [i_12])), (arr_38 [i_1 - 3] [8LL] [i_5] [i_5] [i_12]))))))));
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [i_1 - 3])) ? (arr_10 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6010188062970261442LL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_2])))))) ? (((((/* implicit */unsigned long long int) arr_24 [i_12] [i_12] [(unsigned short)8] [i_2] [i_12] [i_12] [i_12])) * (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_1] [i_1] [0ULL] [i_5] [i_12])) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) var_3))))))))))));
                        arr_47 [(unsigned short)10] [i_2] [i_1] = ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_1] [i_1 + 4] [i_1] [i_12]))))));
                    }
                }
                for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) var_1))));
                    arr_50 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (6010188062970261442LL) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-21732))))) ? ((+(arr_16 [i_13] [i_2] [14U] [i_1 - 2]))) : (arr_12 [i_1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-19492))) | (((arr_22 [i_1 + 3] [i_1] [20U] [7ULL]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1])))))))));
                    arr_51 [i_1] [i_1] [i_13] [i_13] = ((/* implicit */unsigned long long int) arr_15 [20U] [i_2] [i_1] [i_2]);
                    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [(short)2] [i_1 - 2] [i_1] [i_1] [i_1])) ? (arr_34 [i_1 + 3] [i_1 + 2] [i_1] [i_1] [i_1]) : (arr_34 [i_1 + 3] [i_1 + 3] [(short)5] [i_1] [i_1])))) ? (max((((/* implicit */unsigned long long int) arr_24 [i_1] [i_2] [i_13] [i_1] [i_13] [i_1 + 1] [i_13])), (arr_3 [i_1 + 3]))) : (max(((~(var_6))), (arr_25 [i_13] [i_2] [i_2] [(short)17] [i_1] [i_1])))));
                    var_41 = ((/* implicit */long long int) min((var_41), (arr_46 [i_1] [i_1] [i_1] [i_1])));
                }
                for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    arr_56 [i_1] [i_1] [i_1 + 2] [i_1] = arr_24 [i_1] [i_1 - 2] [i_1 + 3] [i_1] [i_2] [i_2] [i_14];
                    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (~(((/* implicit */int) (((+(12418296527159676844ULL))) < (((/* implicit */unsigned long long int) arr_10 [i_1]))))))))));
                }
                var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((/* implicit */_Bool) (~(arr_34 [i_1 + 3] [i_1] [i_1] [i_1 + 2] [i_1])))) ? ((~(arr_10 [i_1]))) : ((~(arr_4 [i_1]))))))));
                arr_57 [i_1] = ((((/* implicit */long long int) ((/* implicit */int) ((8381170992540652802ULL) < (((((/* implicit */_Bool) 32563815)) ? (var_13) : (((/* implicit */unsigned long long int) var_5)))))))) >= (min((((/* implicit */long long int) (+(((/* implicit */int) (short)-19493))))), (arr_30 [i_2] [i_2] [i_1] [i_2] [i_2]))));
            }
        } 
    } 
}
