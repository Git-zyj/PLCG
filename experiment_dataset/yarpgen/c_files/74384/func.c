/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74384
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) var_7)), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (short)-25210)))))))));
                arr_7 [i_0] [i_0] = (+(((/* implicit */int) (short)25210)));
                arr_8 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) && ((!(((/* implicit */_Bool) var_16)))))) ? (((var_11) << (((/* implicit */int) (_Bool)0)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)-25211), (((/* implicit */short) var_16))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_9), (((((/* implicit */_Bool) var_3)) ? (min((2250808065489601518ULL), (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_13) : (588563141))))))));
}
