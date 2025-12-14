/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6692
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_3)))) > (((((((/* implicit */int) min((((/* implicit */signed char) var_11)), (var_5)))) + (2147483647))) << (((((((/* implicit */int) var_9)) + (63))) - (1))))))))));
    var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) % ((+(var_4)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) var_11);
        arr_5 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
    }
}
