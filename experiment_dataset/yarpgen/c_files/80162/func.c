/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80162
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
    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((var_0), (((/* implicit */long long int) 0)))) : (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))) && (((/* implicit */_Bool) ((unsigned long long int) 651355446052916237ULL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */signed char) arr_2 [i_0] [i_0] [i_1]);
                var_22 = arr_1 [i_1];
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_10))))) * (((/* implicit */int) var_3))));
    var_24 = ((/* implicit */unsigned short) 0U);
}
