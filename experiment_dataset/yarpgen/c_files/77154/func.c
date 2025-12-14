/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77154
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
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((int) ((int) arr_4 [i_0] [i_0])))), (max((((/* implicit */long long int) (~(arr_1 [i_0])))), ((~(-1LL)))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (((~((~(var_0))))) * (((/* implicit */unsigned long long int) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [(unsigned short)17])))))))))));
                    var_14 = ((/* implicit */unsigned int) max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(var_9)))) != (arr_1 [i_0]))))));
                    var_15 |= ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned int) (-(var_7)))), ((+(arr_1 [i_0]))))));
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) ((unsigned char) var_10))) : (var_9))))));
}
