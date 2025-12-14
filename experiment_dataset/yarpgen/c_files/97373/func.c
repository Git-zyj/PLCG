/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97373
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = var_2;
                var_14 -= ((/* implicit */unsigned short) (unsigned char)0);
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (2624861403431806485LL)))) : (((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
                arr_6 [i_0] = ((/* implicit */long long int) var_2);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_2);
    var_17 = ((/* implicit */long long int) (~(var_9)));
    var_18 = ((/* implicit */signed char) var_13);
}
