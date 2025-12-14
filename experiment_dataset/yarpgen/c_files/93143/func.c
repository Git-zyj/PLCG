/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93143
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_10 *= ((/* implicit */unsigned short) ((((/* implicit */int) (short)5062)) >= (((/* implicit */int) (short)5062))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 ^= ((/* implicit */short) arr_1 [i_4] [i_0 - 1]);
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-5063)) % (((/* implicit */int) (short)-5062))))) ? (((/* implicit */int) (!(arr_2 [i_0 + 3])))) : (((arr_2 [i_0 + 2]) ? (((/* implicit */int) arr_2 [i_0 + 3])) : (((/* implicit */int) arr_2 [i_0 + 3]))))));
                                var_13 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) 13010710995688141379ULL)))));
                                var_14 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_8)), (arr_5 [(unsigned char)2] [(unsigned char)2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) var_5))), (min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)5062)) : (((/* implicit */int) var_7)))))))))));
    var_16 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6)))) & (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)5062)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_0))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (var_6)))))));
    var_17 = ((/* implicit */long long int) var_4);
    var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9))));
}
