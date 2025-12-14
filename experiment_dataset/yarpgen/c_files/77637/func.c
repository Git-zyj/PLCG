/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77637
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_18 = ((long long int) 264241152U);
                var_19 += ((((/* implicit */_Bool) max((((long long int) 3007081959U)), (((/* implicit */long long int) arr_3 [i_0]))))) ? (((/* implicit */long long int) min((((arr_1 [i_0]) & (((/* implicit */unsigned int) 438295239)))), (((/* implicit */unsigned int) (_Bool)1))))) : ((~(((((/* implicit */_Bool) 7526083796099010438ULL)) ? (arr_5 [i_0]) : (((/* implicit */long long int) var_4)))))));
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned int) var_15);
    var_21 = ((/* implicit */int) var_16);
    var_22 = ((/* implicit */unsigned short) var_6);
}
