/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59879
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((unsigned long long int) var_3)))));
    var_18 -= ((/* implicit */unsigned char) max((893662025U), (((((/* implicit */_Bool) min((804487758U), (((/* implicit */unsigned int) var_6))))) ? ((~(4223803774U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)190)))))))));
    var_19 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 &= ((/* implicit */short) min((((unsigned char) max((835887556U), (((/* implicit */unsigned int) (unsigned short)6))))), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_14)), (var_7))))) == (min((var_15), (((/* implicit */unsigned int) var_6)))))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */long long int) 3120111049U);
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) ((_Bool) var_15)))));
                var_22 *= ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (arr_2 [4U] [i_1 - 1] [4U])));
                var_23 |= ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) arr_2 [(unsigned char)8] [i_1 + 1] [i_1 + 3]))), (((((/* implicit */_Bool) ((unsigned int) 1023U))) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) min(((unsigned char)244), (var_13))))))));
            }
        } 
    } 
}
