/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63133
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 &= ((/* implicit */_Bool) var_10);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_0 [10]);
                arr_6 [i_1] &= ((/* implicit */unsigned short) (signed char)63);
                var_15 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)8691))))), (3877973569694913087ULL)));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_5);
    var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (var_2) : (((/* implicit */int) max((var_8), ((signed char)-64))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) > (max((((/* implicit */int) (short)24423)), (var_11))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)48653)) > (((/* implicit */int) var_6))))), (var_1)))));
    var_18 = ((/* implicit */long long int) var_12);
}
