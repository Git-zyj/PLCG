/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56521
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
    var_11 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_6) < (((var_6) - (((/* implicit */long long int) ((/* implicit */int) (short)0))))))))) + (((((unsigned int) var_0)) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) (signed char)68);
        arr_4 [i_0] = var_4;
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_13 = ((((arr_5 [i_1] [i_1]) + (9223372036854775807LL))) << (((((((int) var_10)) + (2037055260))) - (52))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))));
    }
    for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_14 = ((/* implicit */_Bool) arr_1 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    arr_16 [11U] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_9))) | (arr_14 [(_Bool)1] [i_2] [i_2]))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_3))))))))));
                    var_15 = ((((/* implicit */_Bool) ((unsigned short) (signed char)85))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)231))))) ? (((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_7))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)7))))))) : (arr_3 [i_2] [(unsigned short)2]));
                }
            } 
        } 
    }
    var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) 4))) ? (max((0LL), (((/* implicit */long long int) (short)0)))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((((/* implicit */int) (short)0)) << (((((/* implicit */int) var_3)) - (45403))))))))));
}
