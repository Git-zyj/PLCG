/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65499
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
    var_17 = (unsigned short)65535;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */long long int) arr_1 [(unsigned short)3] [i_0]);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned short)11]))) / (arr_3 [i_0] [i_0] [i_1])));
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((var_12), (min(((+(((/* implicit */int) (unsigned char)63)))), (((/* implicit */int) var_3))))));
}
