/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6013
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned char) max((var_4), (((/* implicit */short) (unsigned char)211))));
                var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)30))));
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [5LL])) > (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_2 [i_1 - 1])) % (((/* implicit */int) var_1))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_9))));
}
