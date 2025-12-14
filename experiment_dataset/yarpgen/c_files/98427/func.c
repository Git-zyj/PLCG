/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98427
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)8061)) - (((/* implicit */int) ((4294967281U) > (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1 + 3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((arr_4 [i_0] [i_1 - 2] [i_1 + 1]), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1]))))))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) var_13))));
                arr_6 [i_0] [i_0 + 2] [i_0] = ((/* implicit */_Bool) (+(max((min((((/* implicit */int) arr_3 [i_0])), (var_9))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)8056))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) var_14)))));
}
