/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63242
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
    var_18 &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_17))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((((/* implicit */int) (signed char)75)) << (((((/* implicit */int) (short)32751)) - (32744)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_6 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (_Bool)1))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])) % (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])))))));
                    var_19 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_2])))))) | (((/* implicit */int) arr_3 [i_0] [i_0]))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((451671895U) * (2419699490U))))));
                }
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)66)) & (((/* implicit */int) (unsigned char)66)))) >> (((arr_0 [i_0] [i_1]) + (2238122279029803902LL)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [18LL] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1]))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])) : (arr_2 [i_0] [14LL] [i_0]))))))))));
                arr_8 [(short)8] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1745985002222040884LL)) ? (-1745985002222040885LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)167))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)27745)) && (((/* implicit */_Bool) (signed char)59))))))))));
            }
        } 
    } 
}
