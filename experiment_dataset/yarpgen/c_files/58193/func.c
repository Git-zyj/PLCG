/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58193
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)31977)) ? (((/* implicit */int) var_18)) : (var_3)))) > (var_13)))), (((var_19) / (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
    var_21 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((((/* implicit */signed char) var_11)), ((signed char)124)))) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) max((var_9), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (2415353569U))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_1])))) % (max((1099910520), (((/* implicit */int) (signed char)-44))))));
                var_23 = ((/* implicit */_Bool) arr_3 [i_1]);
                var_24 ^= ((/* implicit */unsigned int) arr_4 [(unsigned char)10] [i_1] [i_0]);
                var_25 = arr_1 [i_0] [i_1];
                arr_8 [i_0] [i_0] = var_5;
            }
        } 
    } 
}
