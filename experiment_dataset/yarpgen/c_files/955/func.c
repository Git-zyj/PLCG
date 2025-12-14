/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/955
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
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)80))))) ? (((/* implicit */int) max(((signed char)-64), (var_7)))) : (((/* implicit */int) min(((signed char)0), (var_10)))))) + (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) max(((signed char)-123), ((signed char)112)))) : (((/* implicit */int) var_6))))));
    var_15 = ((/* implicit */signed char) min((var_15), (var_7)));
    var_16 &= var_3;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [(signed char)5] = (signed char)-1;
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-123)) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) min(((signed char)63), (var_4)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-64)) < (((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_2]))))))))));
                }
            } 
        } 
    } 
}
