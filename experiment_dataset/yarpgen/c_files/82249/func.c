/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82249
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
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (unsigned char)68))));
    var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(var_8))), (((((/* implicit */unsigned int) var_9)) % (var_7)))))) ? ((~((~((-2147483647 - 1)))))) : (((/* implicit */int) ((unsigned char) ((short) var_0))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)29159)) ? (((/* implicit */int) (unsigned short)53207)) : (((/* implicit */int) (unsigned short)5))));
                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
                var_17 &= ((/* implicit */signed char) max((((/* implicit */int) ((short) var_1))), (27545841)));
                var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (unsigned short)53222)), (1193809588814963952LL))), (((/* implicit */long long int) var_2))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_5 [i_1] [i_1] [i_0])), ((-(((/* implicit */int) (_Bool)1))))))) : (((unsigned long long int) (!(((/* implicit */_Bool) (short)22280)))))));
            }
        } 
    } 
}
