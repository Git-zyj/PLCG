/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80149
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
    var_14 = ((/* implicit */unsigned char) var_10);
    var_15 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_16 |= ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)45)) ? (18446744073709551615ULL) : (var_0)))) ? ((+(18446744073709551586ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_1) : (arr_4 [i_1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)192)) : (((/* implicit */int) (short)-19539)))))));
                    var_17 = ((/* implicit */unsigned short) var_8);
                }
            } 
        } 
    } 
}
