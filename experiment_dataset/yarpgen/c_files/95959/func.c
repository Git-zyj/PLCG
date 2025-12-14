/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95959
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
    var_19 |= ((/* implicit */short) var_1);
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max(((~(9539526192957421531ULL))), (((/* implicit */unsigned long long int) max(((~(var_0))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-67)) | (((/* implicit */int) var_7)))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15343)) - (((/* implicit */int) (unsigned short)20791))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)50192))));
        var_22 |= ((/* implicit */short) (+(var_8)));
        arr_2 [i_0] = ((((/* implicit */_Bool) (signed char)-118)) ? (((4294967281U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15343)))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned short) var_14);
                arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */int) (unsigned short)50195)) / (((/* implicit */int) (unsigned short)50193)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))));
            }
        } 
    } 
}
