/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76894
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) 0LL);
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((signed char) arr_10 [6] [i_1 + 1] [i_2] [i_3])))));
                        arr_11 [i_3] = ((((((/* implicit */_Bool) (((_Bool)1) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((~(939107833))) : (((/* implicit */int) arr_10 [i_1 - 1] [1LL] [i_1 - 2] [i_1 + 1])))) ^ (((/* implicit */int) var_14)));
                        arr_12 [i_0] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned char) 67108863))) << (((arr_7 [i_3] [i_0] [i_0]) - (2477687561024706263LL))))) << (((((/* implicit */int) arr_10 [(short)7] [i_1 + 1] [i_2] [(signed char)8])) - (79)))));
                        arr_13 [i_3] [i_3] [13U] [(short)10] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((((/* implicit */int) var_11)) / (939107833)))))) - (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (max((((/* implicit */unsigned int) arr_3 [i_3] [i_1])), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                        var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)192))))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 4) 
                    {
                        arr_16 [3LL] [(_Bool)1] [3LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) & (((/* implicit */int) arr_0 [i_1 - 1] [i_2]))))) ? (((((((/* implicit */int) (short)0)) == (((/* implicit */int) (short)0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-81)) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_10 [i_1 + 1] [i_4] [(unsigned short)11] [i_4 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [9] [9U] [i_4])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13375)))))))))));
                        arr_17 [i_0] [i_1] = ((/* implicit */long long int) (-(0U)));
                    }
                    for (unsigned int i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        arr_22 [6LL] [i_1 - 2] [(unsigned short)9] [i_5 + 1] = ((/* implicit */signed char) 4294967295U);
                        arr_23 [i_2] [i_1 + 1] = ((/* implicit */_Bool) arr_7 [i_5 + 1] [(unsigned char)11] [i_0]);
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (_Bool)0))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)8608), (((/* implicit */short) var_10))))) ? (4294967295U) : (max((((/* implicit */unsigned int) arr_20 [i_0] [i_1] [i_2] [i_0])), (arr_14 [i_0] [i_1] [(unsigned char)0] [i_5 + 1]))))))));
                        arr_25 [i_0] [7LL] [7LL] [i_2] [i_2] [i_5 + 1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_5 + 1] [i_2] [2ULL])) ? (((/* implicit */int) arr_20 [i_0] [i_2] [i_1 - 2] [i_0])) : (((/* implicit */int) arr_18 [i_5 + 1] [i_5 - 1] [i_2] [i_1] [(_Bool)1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), (var_6)));
                    }
                    arr_26 [i_0] [i_0] = ((long long int) ((unsigned char) arr_19 [i_0] [i_0] [i_0] [i_0]));
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_7))));
                }
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        var_20 = ((/* implicit */signed char) arr_28 [i_6]);
        var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) max((((/* implicit */short) var_1)), (arr_29 [i_6])))) ? (((((/* implicit */_Bool) max((-5366678369838309169LL), (((/* implicit */long long int) (signed char)-13))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_28 [7]))))) : (((((/* implicit */_Bool) arr_29 [i_6])) ? (5366678369838309169LL) : (1890688151635092631LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21520)))))));
    }
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) arr_32 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7]))) : ((+(11744810476625310476ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_13)))) : (max((((/* implicit */unsigned int) (short)7997)), (1517647746U)))))))))));
        var_23 = ((/* implicit */short) min((var_23), (((short) ((((/* implicit */_Bool) arr_31 [i_7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_31 [i_7])))))));
    }
    var_24 &= ((/* implicit */unsigned long long int) var_10);
}
