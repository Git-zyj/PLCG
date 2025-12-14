/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66006
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (var_7)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((1143654162478255829ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))) > ((+(((/* implicit */int) (unsigned char)9))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (var_7)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_2)))));
    var_16 = ((/* implicit */unsigned long long int) ((_Bool) ((((2122498262) % (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((_Bool) var_13));
                                var_18 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 869689970)) : (var_8)))) ? (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) : (arr_12 [i_4] [i_4] [i_3 - 2] [2U] [i_3 + 1] [i_1 - 2] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [0LL] [i_0] [i_1 - 1] [(unsigned char)6] [i_3] [i_1 - 1] [i_4])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_4)))))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */int) ((((/* implicit */int) (signed char)-48)) == (((/* implicit */int) (_Bool)1))))) < (((/* implicit */int) (_Bool)1))))));
                                var_20 = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_2] [i_4])), (var_5)))), (var_14))));
                            }
                        } 
                    } 
                } 
                var_21 *= ((((/* implicit */_Bool) min((((/* implicit */int) var_12)), ((+(((/* implicit */int) arr_8 [i_1] [i_1] [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3200641557496092360LL)) & (arr_11 [4ULL] [4ULL] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [6U] [i_1])) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1]))))) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_1 + 4])))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 2] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
}
