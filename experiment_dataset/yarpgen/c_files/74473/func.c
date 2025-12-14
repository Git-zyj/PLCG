/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74473
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_10))));
    var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (!((_Bool)0))))) || (((/* implicit */_Bool) var_11))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [(signed char)7] [(signed char)7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)36)) | (((((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 3])) - (((/* implicit */int) arr_3 [i_0 + 2] [i_1 + 2]))))));
                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_9))))) : (var_11)));
                arr_5 [i_0 - 1] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_3 [i_0] [i_1])) << (((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)37717)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) - (37717))))), (((((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (signed char)0)))) ? (((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) arr_3 [i_0] [i_0])))) : (((/* implicit */int) (short)-29330))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_8))));
    var_17 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (var_2))))));
}
