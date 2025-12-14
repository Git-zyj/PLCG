/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58256
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_3 [i_0] [(unsigned short)3] [i_1]))));
                arr_5 [i_0] [i_0] = (+((((-(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) min((arr_1 [i_1]), (((/* implicit */unsigned short) var_7))))))));
                var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */signed char) var_4)), (var_1))))));
}
