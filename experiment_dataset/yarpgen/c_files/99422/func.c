/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99422
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (min((arr_7 [i_1 - 1] [i_1]), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)190)))))))));
                    arr_9 [i_1] [i_1 + 1] [i_2] = max(((-(var_5))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (signed char)114))))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */signed char) (unsigned char)255);
                    var_17 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (((~(((/* implicit */int) (signed char)-7)))) >> (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)0)) : (var_2)))))), (max((((/* implicit */long long int) (-(var_14)))), (var_3)))));
}
