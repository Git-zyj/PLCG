/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76231
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
    var_11 = ((/* implicit */unsigned char) min((max((-5522648837111475917LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_10)))))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) max((max((var_8), (var_10))), (var_10))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) arr_2 [i_0]))));
                var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) ((unsigned char) var_7)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) != (var_4))))) ^ (((unsigned long long int) arr_4 [i_0] [i_0]))))));
            }
        } 
    } 
}
