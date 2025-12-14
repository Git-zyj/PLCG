/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68176
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
    var_11 = ((/* implicit */unsigned char) ((-366058996) == (-366059010)));
    var_12 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_3)) - (((unsigned long long int) 2893201754U))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (366058995)))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) -366058996)))));
                var_14 ^= ((/* implicit */unsigned int) min((0LL), (((/* implicit */long long int) (short)10736))));
                arr_7 [i_0] [i_0 + 2] [i_1 - 3] = ((/* implicit */signed char) arr_1 [i_1 + 2]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), (max((((((/* implicit */_Bool) 2686139703U)) ? (((/* implicit */long long int) 366058995)) : (var_4))), (((/* implicit */long long int) ((int) 366059007)))))));
    var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (-366058996)))) ? ((-(var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 366058985)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5)))))) % (((((/* implicit */_Bool) min((var_2), (((/* implicit */short) (_Bool)1))))) ? (min((var_4), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) max((-366058995), (((/* implicit */int) (_Bool)0)))))))));
}
