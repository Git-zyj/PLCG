/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60724
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_12 = ((/* implicit */unsigned int) var_8);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned char) arr_1 [i_0]);
            arr_4 [i_1] [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
        }
    }
    for (short i_2 = 4; i_2 < 21; i_2 += 2) 
    {
        var_14 = ((/* implicit */int) var_4);
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2]))) : (arr_5 [i_2]))) >= (arr_5 [i_2 + 2])))))))));
    }
    var_16 = ((/* implicit */int) var_8);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_2))))) : ((-((+(((/* implicit */int) (signed char)-54))))))));
}
