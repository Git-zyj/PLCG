/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65888
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
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((((/* implicit */int) var_12)) << (((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)15534)) : (((/* implicit */int) (unsigned char)0)))) - (15527))))) | (((/* implicit */int) ((unsigned char) arr_0 [i_1]))))))));
                var_15 |= ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_12))))));
            }
        } 
    } 
    var_16 -= ((/* implicit */int) var_2);
    var_17 = ((/* implicit */unsigned char) (_Bool)1);
    var_18 |= ((/* implicit */int) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)55392))))))), (((/* implicit */unsigned long long int) (unsigned char)88))));
}
