/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69950
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
    var_20 = var_15;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_21 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) ((max((((/* implicit */unsigned int) var_7)), (1061173528U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))))))));
                var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) < (max((((/* implicit */int) arr_4 [i_0] [i_1])), (arr_7 [i_0])))))), (min(((unsigned char)241), ((unsigned char)35)))));
                arr_8 [i_0] [i_1 + 2] [i_0] &= ((/* implicit */short) ((((973129858U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)20140))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_7 [i_0])) == (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2469))) : (var_13)))))) : (((/* implicit */int) ((((arr_7 [i_0]) | (((/* implicit */int) arr_3 [i_0])))) < (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1])))))))));
            }
        } 
    } 
}
