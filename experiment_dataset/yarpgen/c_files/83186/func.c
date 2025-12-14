/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83186
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
    var_20 = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) ((short) var_10))))));
    var_21 |= ((/* implicit */signed char) ((short) var_0));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) <= (((/* implicit */int) arr_3 [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)32764))))), (((((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])) >> (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 2]))))));
                        var_24 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */signed char) arr_2 [i_0] [i_0])), ((signed char)7)))) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((((/* implicit */int) var_15)) | (((/* implicit */int) arr_4 [i_0])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2])))))));
                        arr_11 [i_1] [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_19)), (2167622653743485193LL)))) ? (arr_10 [i_0 - 1]) : (((/* implicit */unsigned long long int) (-(var_16))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_0 - 1] [i_1] [i_0 - 1])))) : (((arr_7 [i_3] [i_0 + 1] [i_0 - 1]) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)59)) / (((/* implicit */int) arr_4 [i_2])))))))));
                        var_25 -= ((/* implicit */unsigned short) (+(min((arr_7 [i_3] [i_2] [i_1]), (((/* implicit */unsigned long long int) ((unsigned char) arr_6 [i_1] [(_Bool)1] [i_3])))))));
                    }
                    for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_2 [i_0 + 1] [i_0 + 2]), (arr_2 [i_0 + 1] [i_0 + 1]))))));
                        arr_15 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_14 [i_1] [i_1] [i_2] [i_4] [i_1] [i_4])), (min((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_4])) / (((/* implicit */int) (signed char)-8))))), ((+(1104959132451311282LL)))))));
                    }
                    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_2 [i_0 + 1] [i_1])) ^ (((/* implicit */int) var_10))))));
                        var_28 = ((/* implicit */_Bool) ((((3107618798034414979LL) / (((/* implicit */long long int) 118870742)))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0] [i_0 - 1] [i_0])) / (((var_16) + (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (((+(arr_7 [i_6] [(signed char)10] [i_6]))) <= (((((/* implicit */_Bool) arr_6 [i_0] [i_6] [i_2])) ? (arr_8 [i_6] [i_0 - 1] [i_1] [i_0 - 1]) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_6] [i_0])))))))));
                        arr_20 [i_1] [i_2] = ((/* implicit */unsigned char) ((unsigned short) arr_12 [i_1]));
                        var_30 = ((arr_8 [i_6] [i_2] [i_1] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6]))));
                        arr_21 [i_0] [i_0] [i_0] [i_0 - 1] [i_1] = ((/* implicit */int) ((arr_10 [i_0 + 1]) * (((/* implicit */unsigned long long int) arr_17 [i_0 + 2] [i_0 + 1] [i_0]))));
                    }
                    var_31 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_0] [i_0] [i_2] [i_2]))) : (max((((/* implicit */unsigned long long int) arr_19 [5ULL] [1U] [i_2] [i_1])), (18446744073709551615ULL))))) >> (((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (var_17)))) ? ((~(arr_0 [i_2]))) : (((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) (signed char)-1)))))) - (307770603)))));
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) max((((/* implicit */int) arr_5 [(unsigned short)4])), ((+(((/* implicit */int) max((arr_13 [(unsigned short)6] [(_Bool)1] [i_2] [i_0 + 1] [i_2]), (arr_13 [(unsigned short)10] [i_1] [i_1] [i_1] [(unsigned short)6])))))))))));
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) var_4))));
                }
            } 
        } 
        arr_22 [i_0 - 1] = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) (signed char)10)))));
    }
}
