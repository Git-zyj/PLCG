/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67176
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
    var_16 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (var_10)));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)2047))))) * ((((_Bool)0) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0]))) : (17425005102590301548ULL))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((int) var_14))), (min((((/* implicit */unsigned int) (_Bool)1)), (2875779326U)))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            {
                arr_7 [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) >= (((((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))))));
                arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) arr_5 [i_1] [10U]))), (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))))) ? (((max(((_Bool)1), ((_Bool)1))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) arr_3 [i_1]))));
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-44))));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (unsigned short)2035))));
                    /* LoopSeq 4 */
                    for (signed char i_4 = 4; i_4 < 16; i_4 += 2) 
                    {
                        arr_14 [i_1] [i_2] [i_1] [i_4] = min(((-(((((/* implicit */long long int) 1496482240U)) / (arr_11 [i_1] [i_2] [i_2] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65523)) ? (2875779326U) : (2589813731U)))));
                        arr_15 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */short) (-(max((((/* implicit */long long int) arr_3 [i_1])), (555243644300432320LL)))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) -9223372036854775789LL))));
                        var_22 = ((/* implicit */_Bool) min((var_22), ((!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (1577584417664046250LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5075))))))))))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((long long int) (((!(((/* implicit */_Bool) (signed char)-17)))) ? (arr_12 [i_2] [i_3] [i_2] [i_1]) : (arr_10 [i_2])))))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        arr_20 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_6]);
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((signed char) -1LL)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 3; i_7 < 19; i_7 += 2) 
                        {
                            arr_23 [i_1] [i_1] [i_1] [i_3] [i_6] [i_7 - 1] = (!(((/* implicit */_Bool) max((arr_10 [i_1]), (arr_10 [i_1])))));
                            arr_24 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min(((-(arr_12 [i_1 - 1] [i_3] [i_6] [i_1 - 1]))), (min((((/* implicit */long long int) var_4)), (arr_12 [i_1] [i_2] [i_3] [i_7 + 1])))));
                            arr_25 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) arr_16 [i_7] [i_1] [i_1] [i_1]);
                        }
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            arr_28 [i_1] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */long long int) arr_4 [i_8])) : (var_11)))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((((/* implicit */int) (unsigned short)63489)) << (((1577584417664046250LL) - (1577584417664046247LL))))))), ((~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)11))))))));
                            arr_29 [i_1 + 1] [i_1] [i_1 + 1] [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) min(((_Bool)1), (var_5)))) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65526))))) ? ((~(((/* implicit */int) arr_13 [i_1])))) : (arr_21 [i_1])))));
                        }
                        arr_30 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) (unsigned short)2047);
                        arr_31 [i_1] [14ULL] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [2U] [i_1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1 - 1] [i_1] [i_3] [i_6]))))))))) : (((-4908992014615921455LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56689)))))));
                    }
                    for (long long int i_9 = 3; i_9 < 19; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 698356167U)) ? ((+(((/* implicit */int) (signed char)-116)))) : ((+(((/* implicit */int) var_6))))))) ? (((/* implicit */int) (signed char)-3)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)63489)))) ? (((/* implicit */int) arr_18 [i_1] [i_3] [i_2] [i_1])) : (((/* implicit */int) (_Bool)0))))));
                        arr_34 [i_1] [i_1] [i_3] [i_9] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_15)) | (((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1])))))), ((((_Bool)1) ? (((/* implicit */int) arr_18 [i_1] [i_1 - 1] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_18 [i_1 + 1] [i_1 - 1] [i_3] [i_1]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            var_27 &= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                            arr_38 [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)21444))));
                        }
                    }
                    arr_39 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) ((signed char) (signed char)-114))) - (((/* implicit */int) min(((unsigned short)63475), ((unsigned short)2039))))))) : (arr_37 [i_1] [i_2] [i_1] [i_3] [i_3] [(unsigned char)15])));
                    var_28 = ((/* implicit */signed char) ((unsigned short) (_Bool)1));
                }
            }
        } 
    } 
}
