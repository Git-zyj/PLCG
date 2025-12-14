/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5914
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) (unsigned short)29399)))));
                var_16 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) ((max((((/* implicit */long long int) arr_2 [i_0])), (arr_4 [14ULL]))) < (((/* implicit */long long int) arr_3 [i_0])))))));
                arr_5 [(unsigned char)7] = ((/* implicit */short) arr_0 [i_1]);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)29399))))) | ((+(max((((/* implicit */unsigned int) var_7)), (var_12)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((var_2) % (((/* implicit */unsigned long long int) var_11))));
}
