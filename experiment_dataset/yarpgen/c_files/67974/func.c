/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67974
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) max((max((((((/* implicit */int) (unsigned char)25)) & (((/* implicit */int) (unsigned char)231)))), (((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_1 + 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)21))))))))));
                    var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_8)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_1] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned short)20] [i_1])) ? (((unsigned int) var_5)) : (33423360U)))))))));
                    var_13 = ((/* implicit */_Bool) 3505649200U);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_8))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) var_4))))))));
}
