/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56195
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
    var_12 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)53355))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                var_14 = ((/* implicit */signed char) 4294967295U);
                var_15 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_3 [i_0] [i_1 - 2])) % (((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))));
                arr_4 [i_1 + 1] = ((/* implicit */unsigned short) arr_0 [i_1 - 2]);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) max((max((((/* implicit */short) (unsigned char)187)), (var_2))), (((/* implicit */short) (unsigned char)34)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        for (signed char i_3 = 2; i_3 < 7; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_2 - 1]), (arr_1 [i_2 - 1])))) ? (((/* implicit */int) ((-1LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 1])))))) : (((/* implicit */int) ((9223372036854775807LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)12924)))))))))));
                var_19 = ((/* implicit */unsigned short) (signed char)65);
                var_20 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59624)) ? (((/* implicit */int) (short)-16725)) : (((/* implicit */int) (short)32746))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235))) : (-8911801825785612821LL))));
                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)124))));
            }
        } 
    } 
}
