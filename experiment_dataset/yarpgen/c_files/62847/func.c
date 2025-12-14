/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62847
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
    var_17 = ((/* implicit */unsigned long long int) var_15);
    var_18 = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)94)) || (var_10))) ? (((/* implicit */int) (unsigned short)25287)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
    var_19 = ((/* implicit */signed char) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_12)))), (((var_0) ? (((/* implicit */int) (unsigned short)53170)) : (((/* implicit */int) (_Bool)1))))))) ? (arr_0 [(signed char)4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105)))));
                    var_20 = ((/* implicit */signed char) arr_4 [i_0] [i_0]);
                }
            } 
        } 
    } 
}
