/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85767
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)25317)) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (9246)))))))) ? (min((((/* implicit */unsigned long long int) ((long long int) (unsigned short)16383))), (arr_5 [i_1]))) : (arr_5 [i_0])));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) % ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)49154)) > (((/* implicit */int) arr_0 [i_1] [i_0])))))))));
            }
        } 
    } 
    var_18 = ((max((((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_13))), (((0LL) - (((/* implicit */long long int) 16128U)))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) ? ((-(var_10))) : (((((/* implicit */int) var_17)) + (((/* implicit */int) var_15))))))));
}
