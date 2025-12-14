/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70412
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
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((max((((((/* implicit */int) arr_3 [(_Bool)1] [i_1] [i_1 - 1])) | (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((_Bool) (_Bool)1))))), (((/* implicit */int) (signed char)49)))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_3)) == (-1002266699))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_1] [i_2 - 1]))))))) : (max((((((/* implicit */_Bool) var_10)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29)))))))));
                    arr_11 [i_0] [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [2ULL] [i_1] [i_2])))))) ? (min((0U), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_1] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */short) (_Bool)1)))))))));
                    var_16 += ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) max((var_0), (((/* implicit */short) (signed char)23))))) <= ((~(((/* implicit */int) arr_5 [i_0 + 2] [i_0]))))))), (arr_5 [(signed char)3] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_4] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)34022)) * (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_3] [i_4])))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)40038)), (arr_18 [i_0] [i_1 - 1] [i_0] [i_4] [i_4])))) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_17 [i_0 - 3] [i_1 - 1] [i_0 - 3] [i_3] [i_4 + 1])))) : ((+((~(((/* implicit */int) (_Bool)1))))))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 0U)) ? (0U) : (4294967291U))))) ? (((((/* implicit */_Bool) ((unsigned short) arr_18 [i_0] [i_0] [i_2 + 2] [i_4] [i_4]))) ? (((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) max((var_12), ((_Bool)0)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4088865775U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_12 [(short)3] [i_3])))))))));
                                arr_21 [i_0] [i_0] [i_4] [i_3] [i_4 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)35792))));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 1; i_7 < 7; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_2))));
                            var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_16 [i_0] [i_0 + 1] [i_1 - 1] [i_6] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0 - 3] [i_1 - 1] [i_6] [i_7]))) : (var_4))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_0 + 1] [i_7 + 1] [i_1 - 1]))))));
                        }
                        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))) + ((~(((/* implicit */int) arr_24 [i_6] [i_1] [i_5] [i_5] [(_Bool)1] [(unsigned short)6]))))));
                        arr_29 [i_1] [i_6] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_17 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_0 + 1]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_1 - 1] [i_1 - 1] [(signed char)2] [i_1 - 1] [i_0 + 2])))))));
                        var_21 = ((/* implicit */short) arr_15 [4ULL] [(unsigned char)2] [(_Bool)1] [(_Bool)1] [(signed char)5] [i_0 - 2]);
                        arr_30 [i_6] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2013589572)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_19 [(_Bool)1] [(_Bool)1] [i_5] [i_0] [i_0])) ? (((/* implicit */int) (short)-32750)) : (((/* implicit */int) arr_8 [(unsigned short)3] [i_1 - 1])))) : ((-(((/* implicit */int) var_0)))))), (((/* implicit */int) ((_Bool) arr_3 [i_1] [i_5] [i_6])))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        arr_35 [i_0] [i_1] [i_8] [i_8] [i_1] [(signed char)3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_16 [i_0 + 1] [i_1 - 1] [i_5] [i_8] [i_0 - 1]))) ^ ((~(((/* implicit */int) arr_16 [i_0] [i_0] [(unsigned char)8] [i_8] [i_0]))))));
                        var_22 = ((/* implicit */unsigned short) arr_27 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 1]);
                    }
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                    {
                        arr_40 [i_9] [i_1] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-41)) ? ((~(((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 3])))) : (((arr_23 [2U]) << (((((/* implicit */int) arr_27 [i_0] [i_1 - 1] [i_1] [i_5] [i_9])) - (2962)))))));
                        var_23 = ((/* implicit */short) var_4);
                        arr_41 [i_0] [i_0] [i_5] [i_9] [(unsigned short)2] = ((/* implicit */signed char) ((unsigned long long int) arr_15 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0 + 2] [i_0 + 1] [i_1 - 1]));
                    }
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
                    {
                        arr_46 [i_0] [i_1] [i_0] [0ULL] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_5] [i_1])), (var_5))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))))))));
                        var_24 |= ((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1]);
                    }
                    var_25 += ((/* implicit */unsigned short) ((signed char) var_10));
                    arr_47 [i_0] [i_1 - 1] [i_5] [(signed char)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1574379149)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0 + 2] [i_0] [i_1 - 1] [i_0])) : ((~(((/* implicit */int) var_11))))))) ? ((-(((((/* implicit */_Bool) arr_3 [(unsigned short)8] [i_1] [i_0])) ? (2013589572) : (((/* implicit */int) (signed char)-49)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) <= (var_7))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) ((828579286U) / (((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) var_0))), (((((/* implicit */int) var_12)) + (((/* implicit */int) var_8)))))))));
}
