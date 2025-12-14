/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77652
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
    var_20 = ((/* implicit */_Bool) var_6);
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)63))))), (var_0)))) ? (var_7) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) (unsigned char)42))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 255U)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((min((((long long int) arr_0 [i_1])), (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0]))))))) + (((/* implicit */long long int) var_6)))))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((/* implicit */unsigned long long int) var_17)), (min((min((1281608808757868065ULL), (((/* implicit */unsigned long long int) 4294967062U)))), (((/* implicit */unsigned long long int) 4294967290U)))))))));
            }
        } 
    } 
    var_24 |= (!(((/* implicit */_Bool) ((unsigned short) var_0))));
    var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) var_17)) ? (1281608808757868071ULL) : (((/* implicit */unsigned long long int) var_17)))))) / (((/* implicit */unsigned long long int) ((((var_1) + (9223372036854775807LL))) << (((var_12) - (4258054217U))))))));
}
