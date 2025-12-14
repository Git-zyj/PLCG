/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93537
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
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_3 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0]))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((signed char) 4001860954U)))));
                    var_22 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((784165559U) << (((/* implicit */int) ((signed char) (_Bool)1)))))) <= (((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1]))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [(signed char)8] [i_1])) ? (1467176614081093738LL) : (((/* implicit */long long int) 3510801736U)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_2 [i_0 - 2] [i_0] [i_0 - 3])) - (3679))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((arr_10 [i_1] [i_2] [i_2] [i_1]) != (arr_10 [i_0] [i_1] [i_2] [i_4])));
                                arr_14 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) & (arr_5 [i_0] [i_1] [i_2] [i_4])))) ? (arr_10 [i_0 - 2] [i_2] [i_2] [i_4]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_3])) ? (3510801707U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))))) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned char)121)))))));
                                var_24 = ((/* implicit */unsigned long long int) arr_8 [i_2]);
                                var_25 = ((int) arr_3 [i_1] [i_1] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 ^= ((/* implicit */unsigned int) arr_8 [(unsigned short)4]);
    }
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((_Bool) arr_16 [i_5])))) ? (((/* implicit */int) (unsigned short)48129)) : (((/* implicit */int) arr_15 [i_5] [i_5]))));
        var_28 += ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [i_5])) ? (784165559U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [i_5]))))) / (((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_5] [(unsigned char)2])))))))) ? (((/* implicit */int) arr_15 [i_5] [(signed char)4])) : (((/* implicit */int) arr_15 [i_5] [i_5]))));
        var_29 = ((/* implicit */unsigned char) max((var_29), (((unsigned char) arr_15 [i_5] [17]))));
        arr_18 [i_5] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) arr_15 [i_5] [i_5])))) << (((((/* implicit */int) arr_15 [i_5] [i_5])) - (94))))) << (((((/* implicit */int) arr_16 [(signed char)13])) - (21126)))));
    }
    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        arr_21 [i_6] [i_6] |= ((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6] [i_6]);
        arr_22 [i_6] = ((/* implicit */_Bool) arr_2 [14] [14] [14]);
    }
    var_30 = ((/* implicit */short) 3510801737U);
    var_31 = ((/* implicit */unsigned int) var_18);
    var_32 = ((/* implicit */long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_9))))))) * (((/* implicit */int) ((((var_6) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) > (((/* implicit */long long int) 784165559U)))))));
    var_33 = ((((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)1713))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (_Bool)1)))))) : (-5417881959541997627LL)))));
}
