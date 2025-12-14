/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75895
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1 - 2])) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) (unsigned short)58489)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 2])))))));
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22076)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (2159865302935846495ULL)));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (short)-32751);
    var_19 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) (unsigned char)252)) / (((/* implicit */int) (short)-18723)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    var_20 = ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3))));
}
