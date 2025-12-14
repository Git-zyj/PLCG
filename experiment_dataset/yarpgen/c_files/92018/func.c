/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92018
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((2819359098U) == (((/* implicit */unsigned int) -865409067)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_8)) : (var_11)))))))) : (((((((/* implicit */_Bool) -304587090)) && (((/* implicit */_Bool) var_13)))) ? (((((/* implicit */_Bool) var_12)) ? (1475608192U) : (var_10))) : (((((/* implicit */_Bool) (unsigned short)53597)) ? (((/* implicit */unsigned int) var_3)) : (2819359095U)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (1475608205U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111))))))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (signed char)120))) && (((_Bool) var_0))))))))));
                        var_16 = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3]))))) + ((+(((/* implicit */int) (unsigned short)49373)))))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) <= ((-(-5121797163927288304LL))))))));
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((_Bool) 14394600982356911537ULL)))) ? (((unsigned int) ((unsigned short) (signed char)125))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)39)) / (arr_2 [i_3])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-30009))))) : ((-(arr_5 [i_0]))))))))));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~((((~(arr_4 [i_0] [i_0] [i_0]))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))))))))));
                        var_19 *= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) * (13282411834001781112ULL)))) ? ((+(((/* implicit */int) (signed char)79)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_2)))))))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47))) == (5U)))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (var_11) : (((/* implicit */long long int) var_10)))))))))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((unsigned int) ((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (1475608200U))))));
                    arr_11 [i_0] [i_0] [i_0] |= (!(((/* implicit */_Bool) (-((~(arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
}
