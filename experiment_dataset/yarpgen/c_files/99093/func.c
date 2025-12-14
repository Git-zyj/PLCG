/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99093
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)48))))));
    var_16 ^= var_2;
    var_17 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (signed char)-32))))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_7), (((/* implicit */unsigned short) (_Bool)1))))), (min((((/* implicit */unsigned int) var_5)), (arr_4 [(unsigned short)6] [10] [(_Bool)0])))))) ? (arr_0 [i_1]) : (min((((/* implicit */long long int) min((arr_4 [i_0] [4LL] [i_0]), (((/* implicit */unsigned int) arr_2 [i_1]))))), (((long long int) (_Bool)1)))))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned int) (+((((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))) ^ (((/* implicit */int) var_14))))));
}
