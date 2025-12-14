/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74292
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((((/* implicit */int) var_17)) + (2147483647))) << (((((/* implicit */int) var_5)) - (140))))) < (((((/* implicit */_Bool) (-(var_2)))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) var_17)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [16LL] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((arr_1 [18ULL]) - (((/* implicit */int) arr_0 [i_1])))) - (((/* implicit */int) arr_0 [i_0 - 2]))))), (((unsigned long long int) ((((/* implicit */long long int) arr_3 [i_0] [i_0])) + (arr_2 [i_0] [i_0]))))));
                var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_3 [i_0 - 1] [i_0 - 1])) >= ((+(arr_2 [10LL] [10LL])))));
                var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1957486934)))))));
            }
        } 
    } 
}
