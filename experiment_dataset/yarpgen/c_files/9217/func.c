/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9217
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
    var_20 = ((/* implicit */long long int) var_18);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((max(((signed char)-91), (var_7))), (min((max(((signed char)90), (((/* implicit */signed char) (_Bool)0)))), (var_11))))))));
        var_22 += ((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)4095))))));
        var_23 ^= min((2095624706U), (((/* implicit */unsigned int) (short)4104)));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            {
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)1)), (var_9))))));
                arr_6 [i_1] [i_2] = max((((((/* implicit */int) (unsigned short)61553)) * (((/* implicit */int) var_11)))), (min((((((/* implicit */int) var_4)) / (((/* implicit */int) (unsigned char)59)))), (((((/* implicit */int) (_Bool)1)) / (-1156491106))))));
                arr_7 [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((var_15) > (((/* implicit */int) var_7))))), (min((((/* implicit */unsigned int) (_Bool)1)), (2435318661U)))));
            }
        } 
    } 
}
