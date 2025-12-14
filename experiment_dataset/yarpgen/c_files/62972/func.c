/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62972
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
    var_13 += ((/* implicit */signed char) (((((~(var_2))) != (((/* implicit */unsigned long long int) var_12)))) ? (var_12) : (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) - (-8509738180622791506LL)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_10))));
                    var_15 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (signed char)18)))) + (((((/* implicit */_Bool) 1079504352)) ? (var_12) : (((/* implicit */int) (short)-4359)))))), (((/* implicit */int) (signed char)-2))));
                    arr_7 [i_0] [(unsigned char)19] [(unsigned char)7] [(unsigned char)7] = ((/* implicit */unsigned char) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((((var_0) != (((/* implicit */long long int) ((/* implicit */int) var_7))))) ? (((long long int) var_5)) : (((/* implicit */long long int) (-(((/* implicit */int) var_4))))))) | (((/* implicit */long long int) min((((((/* implicit */int) (signed char)-2)) + (((/* implicit */int) (unsigned short)47098)))), ((((_Bool)1) ? (var_5) : (((/* implicit */int) (short)17983)))))))));
}
