/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70864
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
    var_19 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */unsigned long long int) (short)-1)), (18446744073709551612ULL))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) ((signed char) max((((/* implicit */long long int) var_1)), (var_3))))), ((+(((((/* implicit */int) (short)10946)) - (((/* implicit */int) (unsigned short)32768))))))));
                var_21 = ((/* implicit */_Bool) arr_1 [i_0 - 1]);
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4096))) <= (18446744073709551615ULL))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((short) var_0));
}
