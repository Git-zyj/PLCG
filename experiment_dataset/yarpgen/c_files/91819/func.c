/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91819
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((var_1) < (((/* implicit */int) var_13))))))) : (((/* implicit */int) ((((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) var_15))))) != (((/* implicit */long long int) ((/* implicit */int) max((var_2), (var_4))))))))));
    var_18 = ((/* implicit */unsigned long long int) (-(var_14)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 2])) + (((/* implicit */int) arr_1 [i_0 - 3]))));
        var_20 = ((/* implicit */short) arr_1 [i_0 - 3]);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 3; i_2 < 20; i_2 += 3) 
        {
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */int) (+(arr_4 [i_1] [i_2 + 1])));
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)17))));
            arr_9 [i_1] = ((/* implicit */_Bool) (+(-176248201)));
        }
        var_21 = ((/* implicit */_Bool) min((var_21), ((!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_2))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_16) >> (((/* implicit */int) var_5))))))))));
}
