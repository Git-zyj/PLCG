/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61777
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) min((((/* implicit */unsigned short) var_14)), ((unsigned short)38700))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) var_11)))));
                        arr_10 [i_1] [i_1] [i_3] [i_3 + 2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47231)) && (((/* implicit */_Bool) (unsigned char)4))))) : (((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))));
                    }
                    var_19 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_4 [i_0 - 1])) >> (((((((/* implicit */_Bool) var_6)) ? (arr_2 [(unsigned short)15] [(unsigned short)15] [(unsigned short)15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47231))))) - (10306747594282551877ULL))))), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_4 [i_1])))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [(unsigned short)7]))))))) ^ (((arr_7 [i_2] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
