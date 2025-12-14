/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66524
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
    var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_2)))), (((min((((/* implicit */unsigned int) var_12)), (var_4))) != (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_2]);
                    arr_10 [13] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (signed char)-107)) * (((/* implicit */int) (_Bool)1))))));
                    arr_11 [i_0] [9ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -2141957664792467793LL))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : ((-9223372036854775807LL - 1LL))));
                }
            } 
        } 
    } 
}
