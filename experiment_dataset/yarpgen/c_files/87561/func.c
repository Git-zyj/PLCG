/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87561
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
    var_20 = var_7;
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_18))));
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)65535))))) + (((((/* implicit */_Bool) 4263530267401369291LL)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_1)))) * (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531))) : (var_14)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_24 = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0])))));
                var_25 = ((/* implicit */signed char) 3924017521U);
            }
        } 
    } 
}
