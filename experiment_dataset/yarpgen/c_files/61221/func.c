/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61221
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_0)))) && (((/* implicit */_Bool) ((int) var_7)))));
                arr_5 [(unsigned char)21] [(unsigned char)21] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((11891558734429362893ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (max((var_0), (((/* implicit */long long int) (-2147483647 - 1))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) -681597426)))))), (((/* implicit */long long int) ((unsigned short) var_5)))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) -850196190);
                var_17 = ((/* implicit */int) ((unsigned char) -285903306));
                var_18 *= ((/* implicit */int) max((((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned long long int) (unsigned char)59))))) ? ((~(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)28)) >= ((~((+((-2147483647 - 1))))))));
}
