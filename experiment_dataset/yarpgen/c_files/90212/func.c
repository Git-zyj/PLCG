/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90212
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_10))));
    var_18 = ((/* implicit */short) var_12);
    var_19 ^= ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 = min((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) arr_3 [6] [i_1]))))))), ((+(((long long int) arr_5 [14ULL] [i_1])))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1] [i_1])) * (max((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [1ULL]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_0)) + (((int) var_0))))));
}
