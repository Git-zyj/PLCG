/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85542
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
    var_19 = ((/* implicit */unsigned char) var_2);
    var_20 = var_1;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((((/* implicit */int) var_5)) >> (((min((-980276590781473592LL), (((/* implicit */long long int) (unsigned char)255)))) + (980276590781473595LL))));
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_17)) ? (((((/* implicit */int) (short)0)) - (var_4))) : ((+(((/* implicit */int) var_13)))))), ((+(((/* implicit */int) var_5)))))))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (min((-980276590781473586LL), (((/* implicit */long long int) (unsigned char)7)))) : (((/* implicit */long long int) (-(min((arr_2 [i_1]), (((/* implicit */unsigned int) var_10)))))))));
                arr_7 [i_0] [i_0] [i_1] = var_2;
                var_24 = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) (~(((/* implicit */int) var_14))))), (9223372036854775787LL)))));
            }
        } 
    } 
}
