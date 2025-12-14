/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81325
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_1 [i_0 - 2] [i_1 + 2]) == (var_19)))) / (((/* implicit */int) ((((/* implicit */int) var_11)) >= (arr_3 [i_0])))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                arr_8 [i_1] [(signed char)2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 3] [i_0 - 3])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_0 [(unsigned char)0] [i_0 - 2]))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)2711)) * (((/* implicit */int) (short)(-32767 - 1)))))))) & (((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 3])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) : (arr_1 [i_0 - 1] [i_1 + 2]))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_10 [i_1])), (var_16)))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)195)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) == (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (70368744177663ULL))))))));
                                arr_17 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_0] [i_1])) && (((/* implicit */_Bool) 5326003220359986167ULL)))) ? (((3378662725U) << (((2535445957026562344ULL) - (2535445957026562324ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? ((-(((/* implicit */int) (signed char)15)))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) == (min((arr_3 [i_2]), (var_9))))))));
                                var_24 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned char)41)) : (arr_3 [i_4 - 1]))) : (((/* implicit */int) ((unsigned char) (_Bool)1))))) ^ ((~(((/* implicit */int) arr_16 [i_2]))))));
                                var_25 = ((/* implicit */unsigned int) max((var_25), (max((arr_1 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])) > (13120740853349565449ULL))))))));
                                var_26 |= ((/* implicit */unsigned int) ((((unsigned long long int) max((((/* implicit */unsigned char) arr_15 [i_2] [i_3] [i_2] [i_1] [i_2])), ((unsigned char)189)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_14), (((/* implicit */unsigned short) arr_0 [i_1 + 1] [i_1 + 1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
