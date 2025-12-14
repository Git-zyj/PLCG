/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67084
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 -= ((/* implicit */unsigned char) min((min((arr_1 [i_0 - 1]), (((/* implicit */unsigned long long int) 6019848742659900295LL)))), (((/* implicit */unsigned long long int) ((unsigned char) min((arr_3 [i_0]), ((unsigned short)18984)))))));
                var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (((((((/* implicit */_Bool) var_3)) ? (var_7) : (var_15))) * (((/* implicit */unsigned long long int) -1)))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (short)20682)), (var_17))) * (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)-125))))))) >= ((((~(arr_1 [i_1]))) >> ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))) : (4279324279459092498ULL))) - (18446744073709551461ULL)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_9)))), (min((((var_16) << (((var_17) - (7083778030074340102LL))))), (((/* implicit */int) var_4))))));
    var_22 = ((/* implicit */long long int) ((_Bool) var_0));
}
