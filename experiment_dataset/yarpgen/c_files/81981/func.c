/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81981
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
    var_10 = max((1389849626U), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-24))))));
    var_11 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)77))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((4170775430U) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_6))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (0U))), (((/* implicit */unsigned int) var_8)))))));
        var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-109)) ? (2694670043U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)40))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)35056)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_7))))));
        var_16 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_4))))));
        var_17 = ((/* implicit */signed char) (unsigned char)186);
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30342))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        arr_6 [i_2] [i_2 - 2] = ((/* implicit */signed char) arr_4 [i_2] [i_2]);
        arr_7 [i_2 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((((/* implicit */int) (unsigned char)227)) > (((/* implicit */int) (unsigned char)42)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) arr_4 [i_2 + 1] [i_2])) : (((/* implicit */int) var_3))))) : (3323502209U)))));
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)112))))) ? ((~((~(((/* implicit */int) var_5)))))) : (((/* implicit */int) var_8))));
}
