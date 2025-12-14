/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64165
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
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_9 [2ULL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((arr_5 [i_0] [i_1] [i_2] [i_0 + 2]) ? (var_6) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((short) (short)6498))) : (((/* implicit */int) (short)-5295)))))));
                    var_10 = var_9;
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_4] &= ((/* implicit */unsigned long long int) ((short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17172))) < (var_0))) ? (max((var_1), (((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_3] [i_0 + 2] [i_3])))) : (((/* implicit */int) ((unsigned char) (unsigned short)0))))));
                                var_11 = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)26)) ? (((/* implicit */int) (short)3397)) : (arr_1 [i_2])))));
                                arr_16 [i_1] [i_3] [i_2] [i_1] [i_1] = max((((/* implicit */unsigned int) ((var_6) > (var_4)))), (((((/* implicit */_Bool) ((long long int) 4294967291U))) ? (((/* implicit */unsigned int) max((arr_14 [i_0 - 1] [i_0 - 1] [(short)2] [i_0 - 1] [i_0] [i_0 - 1]), (var_5)))) : (((unsigned int) 4294967291U)))));
                            }
                        } 
                    } 
                    var_12 &= max((((max((4591260393396969725ULL), (((/* implicit */unsigned long long int) (unsigned short)16)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((9857147370503424756ULL) == (var_9))))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)65535)) + (var_5))))));
                    arr_17 [i_0] [(short)5] [i_1] = ((/* implicit */signed char) arr_1 [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            {
                arr_23 [i_6] = ((/* implicit */_Bool) (+(321164662U)));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_8 = 4; i_8 < 14; i_8 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 2) 
                        {
                            var_13 |= ((/* implicit */unsigned long long int) ((((_Bool) var_5)) ? (((/* implicit */int) var_2)) : (var_3)));
                            arr_32 [i_5] [i_6] [i_6] [i_8] [i_7] [7U] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((long long int) 4294967287U)) : (((/* implicit */long long int) ((unsigned int) 15291380845045188422ULL)))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 65011712)) ? (((/* implicit */int) arr_18 [i_7])) : (((/* implicit */int) arr_18 [i_5 - 1]))));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_10] [i_8 - 1] [i_5 - 1] [i_5 - 1] [10ULL] [i_5])) ? (arr_22 [i_6] [(unsigned short)11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            var_16 = ((/* implicit */short) ((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) 2004735868))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */short) arr_19 [i_5 - 1]);
                            arr_38 [i_6] = ((/* implicit */long long int) 4294967287U);
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) (~(var_8)));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((unsigned short) var_4)))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) -827683903))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            var_22 &= ((/* implicit */int) ((unsigned long long int) var_2));
                            arr_43 [(short)2] [i_6] [i_6] [i_6] [i_6] [i_5 - 1] = ((/* implicit */short) (-(var_3)));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6086))) + (var_4))))))));
                            var_24 = ((/* implicit */int) arr_19 [i_5 - 1]);
                        }
                    }
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (max((arr_42 [7U] [i_5 - 1] [i_6] [i_6] [i_6]), (((arr_33 [(signed char)15] [(signed char)3] [(signed char)15] [(short)10] [(short)14]) - (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) == (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_6] [(_Bool)1] [i_6] [i_5] [i_5 - 1])))))))))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_28 [i_5 - 1] [i_5 - 1])), (2321450627U)))) ? (((((/* implicit */_Bool) arr_42 [i_5 - 1] [(unsigned char)6] [i_6] [i_7] [i_6])) ? (arr_42 [i_5 - 1] [i_5 - 1] [i_6] [i_6] [(signed char)11]) : (((/* implicit */unsigned long long int) arr_41 [i_5 - 1] [i_6] [11] [(_Bool)1] [(unsigned char)14])))) : (var_6)));
                }
            }
        } 
    } 
}
