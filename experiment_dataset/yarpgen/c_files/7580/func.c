/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7580
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
                var_14 += ((/* implicit */unsigned short) (!(arr_2 [i_0])));
                arr_6 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((var_7) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((arr_3 [(signed char)0]) % (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))) : (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_0] [i_0])))))));
            }
        } 
    } 
    var_15 = (~((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((2130767902) < (((/* implicit */int) (short)-692))))))));
}
