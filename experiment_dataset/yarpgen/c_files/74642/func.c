/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74642
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
    var_11 = ((/* implicit */unsigned char) (-((+(var_6)))));
    var_12 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) (signed char)1);
                var_14 = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) max((((/* implicit */unsigned int) var_9)), (var_8)))));
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((short)9969), ((short)-31172)))), (((unsigned int) (signed char)66))))) && (((/* implicit */_Bool) min((-72057594037927936LL), (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned char) (signed char)38))))))))));
                var_16 &= ((/* implicit */unsigned long long int) arr_0 [i_0]);
            }
        } 
    } 
}
