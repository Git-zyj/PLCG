/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94913
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
    var_20 = ((/* implicit */_Bool) ((22U) >> (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) arr_1 [(unsigned short)6]);
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (+(arr_0 [(_Bool)0])))))))))));
        var_23 = ((/* implicit */_Bool) max((((var_19) | (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) max((((unsigned int) var_15)), (((/* implicit */unsigned int) var_14)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 9; i_5 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) var_8);
                                arr_15 [(_Bool)1] [(signed char)7] [1LL] [i_3] [10ULL] [4LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_13 [i_5 + 3] [5] [8] [6] [i_5 - 1]))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) var_19))))) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) arr_12 [(short)1] [(_Bool)1] [i_3] [0ULL] [(signed char)11]))))))));
                                var_25 = ((/* implicit */long long int) ((((/* implicit */int) var_14)) << (((((/* implicit */int) ((unsigned char) max((var_7), (((/* implicit */unsigned short) var_6)))))) - (50)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                arr_20 [10ULL] [(signed char)5] [6ULL] [(signed char)1] [i_3] [1ULL] = ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) 3144443897U)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (arr_8 [i_6 + 1] [(unsigned char)5] [0ULL] [i_6 - 1])))));
                                var_26 *= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [1])), (var_16)))), (max((var_4), (((/* implicit */unsigned long long int) (short)18081)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (max((((((/* implicit */_Bool) var_1)) ? (14672034532807446428ULL) : (287104476244869120ULL))), (((((/* implicit */_Bool) 4294966784U)) ? (arr_2 [(_Bool)1]) : (var_4))))) : (((/* implicit */unsigned long long int) -6039697507651740436LL))));
    }
}
