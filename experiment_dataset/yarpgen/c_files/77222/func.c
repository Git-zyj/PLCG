/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77222
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
    var_20 = var_8;
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [(unsigned char)10] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) min((2096304302U), (((/* implicit */unsigned int) var_6))))) : (((9019505481024730934LL) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [9] [i_0]))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */int) arr_6 [i_2] [i_0] [i_0]);
                    var_21 = ((/* implicit */int) min((2198663018U), (arr_3 [i_0] [i_0] [0])));
                    var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) -1069215138)), (var_18)))))) ? (((/* implicit */long long int) 1069215138)) : (((((/* implicit */long long int) arr_0 [i_0])) - (((4899894988333841391LL) << (((var_9) - (1886411517U)))))))))));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        arr_12 [i_3] = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3])) || (((/* implicit */_Bool) arr_5 [11]))))), (arr_5 [i_3]))), (((/* implicit */unsigned int) ((int) var_3)))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_10 [i_3]) << (((((arr_0 [7U]) ^ (var_9))) - (3766374841U)))))))))));
    }
}
