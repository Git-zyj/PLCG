/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92713
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
    var_17 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_3)))))) != (min(((+(72057594037927935ULL))), (((/* implicit */unsigned long long int) var_11))))));
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18374686479671623700ULL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) == (72057594037927915ULL)))))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_14)), ((unsigned char)98)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) + (72057594037927911ULL)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 8; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */int) (((~(((((arr_7 [i_0] [i_1] [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)65526)) - (65526))))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [0ULL]))) ? (arr_9 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))))));
                    var_20 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) 18374686479671623700ULL)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7)))))))));
                    var_21 = ((/* implicit */long long int) arr_2 [i_0]);
                }
            } 
        } 
    } 
}
