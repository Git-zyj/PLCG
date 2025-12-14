/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66947
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(var_17))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5))))))) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)7168))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) >= (var_1)))) > (((((((/* implicit */int) var_15)) | (((/* implicit */int) var_0)))) % (((/* implicit */int) var_12))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0 + 2] = ((((/* implicit */long long int) ((unsigned int) arr_1 [i_0]))) / (-1944802341355289217LL));
        arr_4 [i_0] = ((/* implicit */long long int) var_0);
        arr_5 [i_0] = ((/* implicit */unsigned int) (~((~(var_13)))));
        arr_6 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) var_3)) ^ (9223372036854775807LL))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (var_1)))))));
    }
}
