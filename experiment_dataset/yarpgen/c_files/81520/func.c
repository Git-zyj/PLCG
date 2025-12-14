/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81520
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_7)) : ((~((+(-1552576643)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ^ (((((/* implicit */_Bool) -1552576643)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) 1552576643)) / (var_12)))) : (min((arr_2 [i_0]), (((/* implicit */long long int) var_12))))))));
                    arr_9 [i_0] [i_1] [i_2 - 2] [i_2 - 2] = ((/* implicit */unsigned char) ((max((arr_3 [i_0]), (((/* implicit */unsigned long long int) var_6)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))))));
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+(var_6))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_2);
}
