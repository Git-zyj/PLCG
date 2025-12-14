/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93981
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
    for (signed char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned char) var_0);
                arr_4 [i_1] = ((/* implicit */short) var_10);
            }
        } 
    } 
    var_12 = ((/* implicit */int) var_10);
    var_13 = ((/* implicit */unsigned long long int) var_10);
    var_14 = ((/* implicit */_Bool) var_2);
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((((!(((/* implicit */_Bool) 1457587354)))) ? (((4036006770U) & (((/* implicit */unsigned int) -1457587355)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (2325635126804870513LL) : (((/* implicit */long long int) var_1)))))))))));
}
