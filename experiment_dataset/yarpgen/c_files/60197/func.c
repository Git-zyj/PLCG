/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60197
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) ((max((7691859536874561022LL), (((((/* implicit */_Bool) 1784842973)) ? ((-9223372036854775807LL - 1LL)) : (var_0))))) <= (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-23174)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_1))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */int) max(((+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) 2048356895)) : (arr_2 [i_0] [i_1] [i_1]))))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 0U)) ? (var_1) : (((/* implicit */int) var_3))))))));
                    arr_7 [(_Bool)1] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_2 - 3])) % (arr_2 [i_0] [i_2 - 2] [i_2]))), (arr_6 [i_2] [i_2 + 2] [i_2])));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) -1784842974)) ? (min((max((((/* implicit */long long int) (signed char)53)), (7691859536874561024LL))), (max((((/* implicit */long long int) 1498149954)), (0LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-20650)))))));
}
