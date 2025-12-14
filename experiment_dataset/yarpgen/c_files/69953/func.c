/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69953
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
    var_13 -= (signed char)22;
    var_14 = ((/* implicit */signed char) var_10);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)22)))))) : (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 = (unsigned char)15;
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((unsigned long long int) arr_5 [i_0]))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_5))))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))), ((((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) var_10))))))));
}
