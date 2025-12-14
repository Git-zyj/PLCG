/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55456
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 2]))) - (var_9))))))));
                arr_5 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(var_2))))));
            }
        } 
    } 
    var_20 = ((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (5102028843681728685ULL))) : (((/* implicit */unsigned long long int) var_10)))) * (((/* implicit */unsigned long long int) var_12)));
}
