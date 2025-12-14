/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78858
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (var_7)))) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */int) var_18)) % (((/* implicit */int) arr_2 [i_1] [i_1] [i_1])))), (((((/* implicit */int) arr_1 [i_1])) - (((/* implicit */int) (short)-32757))))));
                var_20 = ((/* implicit */int) (((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_11)) : (var_4))))) / ((~((~(var_1)))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_19)) ? ((-(((var_2) | (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0] [i_0] [i_1]), (((/* implicit */short) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_1 [(unsigned short)0])))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) 7155397399568753280ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)23678))))) : (min((((/* implicit */unsigned long long int) var_19)), (var_4))))) & (((/* implicit */unsigned long long int) (+(((var_14) + (((/* implicit */int) (signed char)-72)))))))));
    var_23 = ((/* implicit */unsigned short) ((5944106987072876560LL) == (((/* implicit */long long int) ((/* implicit */int) (short)-28072)))));
}
