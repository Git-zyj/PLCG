/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69792
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
    var_12 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) min((var_9), (((/* implicit */signed char) var_7))))) ? (((/* implicit */unsigned int) 1542995466)) : (arr_1 [i_1])))));
                arr_6 [i_1] = ((/* implicit */_Bool) arr_5 [i_0]);
                var_14 = ((/* implicit */short) min(((-(((unsigned int) 16516162346004323930ULL)))), (max((((/* implicit */unsigned int) ((short) var_6))), (var_10)))));
                var_15 = ((/* implicit */unsigned char) min((1930581727705227685ULL), (((/* implicit */unsigned long long int) arr_5 [(unsigned char)16]))));
            }
        } 
    } 
}
