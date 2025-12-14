/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91062
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 79986614U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)4952))))) ? (arr_6 [(unsigned char)11]) : (((/* implicit */int) (unsigned short)65516))))) ? (((/* implicit */int) max((arr_7 [i_2] [i_2] [i_2] [i_2]), (arr_7 [i_0] [i_1] [i_2] [(short)10])))) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))));
                    var_19 = ((arr_2 [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_2]);
                }
            } 
        } 
    } 
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) (unsigned short)65507)))) : (((/* implicit */int) var_9))))) || (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (unsigned char)230)) : (var_16)))))));
    var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned char)213)))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551607ULL)))))));
}
