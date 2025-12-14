/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60603
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
    var_18 = var_6;
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)166))));
    var_20 = ((((/* implicit */_Bool) 3237044374U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) var_13)) == (((/* implicit */int) (_Bool)1))))), (max(((unsigned char)188), (((/* implicit */unsigned char) (_Bool)1))))))) ? (var_17) : (((((/* implicit */_Bool) (unsigned char)217)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))) : (16038272997357386978ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))))))));
                var_22 = ((/* implicit */int) (((+(((/* implicit */int) (unsigned char)234)))) > (((((/* implicit */int) var_7)) % (((/* implicit */int) (short)23313))))));
            }
        } 
    } 
    var_23 += ((/* implicit */unsigned char) (_Bool)1);
}
