/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86962
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
    var_18 = (_Bool)1;
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [(unsigned char)1] = ((/* implicit */int) (short)-13614);
                var_19 = ((/* implicit */_Bool) -1961764833);
                arr_7 [i_0] = ((/* implicit */unsigned char) var_10);
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_9);
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_8) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224)))))) ? (var_16) : (((/* implicit */int) var_15))))), (var_0)));
}
