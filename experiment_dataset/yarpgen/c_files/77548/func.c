/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77548
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
    var_10 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) ((554153860399104LL) % (((/* implicit */long long int) ((((((/* implicit */int) arr_0 [(_Bool)1])) > (((/* implicit */int) arr_0 [i_0])))) ? (((/* implicit */int) max((var_1), (arr_1 [i_0] [i_0])))) : (var_8))))));
        var_12 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)28))))) > (((unsigned int) ((((/* implicit */int) arr_1 [(_Bool)1] [(unsigned short)1])) >= (((/* implicit */int) var_7)))))));
        var_13 = ((/* implicit */short) ((((/* implicit */int) ((var_7) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) / (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        var_14 = ((/* implicit */long long int) (signed char)-37);
        var_15 = ((/* implicit */long long int) ((_Bool) arr_3 [i_1 + 2] [i_1]));
        var_16 = ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_1] [i_1 + 4])) % (((/* implicit */int) (unsigned short)16383)))) / (((/* implicit */int) var_5))));
    }
}
