/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75056
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_16))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 86466010U)) ? (9039816469768799024ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (signed char)28))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) (((~(9039816469768799012ULL))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)17)))))));
                arr_5 [(unsigned char)5] [i_0] = (signed char)-26;
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4491)) - (271743502)))) ? (((((/* implicit */_Bool) (unsigned char)45)) ? (2309756256746541322ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-83)) ? (-647194010) : (((/* implicit */int) (unsigned short)24624)))))));
            }
        } 
    } 
}
