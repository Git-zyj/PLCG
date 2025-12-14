/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68350
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
    var_13 = ((/* implicit */unsigned int) max((((((((/* implicit */int) ((signed char) (short)-31057))) + (2147483647))) << (((((/* implicit */int) (short)31070)) - (31070))))), (((/* implicit */int) (unsigned char)0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_4 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) 924265112))))) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 4])) : (((arr_4 [i_1 + 1] [i_0] [i_0]) - (((/* implicit */unsigned long long int) var_4)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((-5001544471847302370LL) != (((/* implicit */long long int) arr_2 [i_1])))))))));
                var_15 = ((/* implicit */long long int) arr_2 [i_1]);
                var_16 ^= ((/* implicit */long long int) ((unsigned long long int) var_5));
                arr_5 [i_1] [i_1] = max((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_5)), ((unsigned char)8)))) ? (-2467712668700070572LL) : (((/* implicit */long long int) max((arr_2 [i_0]), (268431360U)))))), (((-5257086520529953265LL) / (((/* implicit */long long int) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)255)), (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54079)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) : (max((((/* implicit */unsigned long long int) var_0)), (21ULL)))))) ? (((((/* implicit */_Bool) var_4)) ? (((var_6) / (var_6))) : (((/* implicit */long long int) var_4)))) : (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-3530181645282716665LL))), (((/* implicit */long long int) (unsigned short)11467))))));
}
