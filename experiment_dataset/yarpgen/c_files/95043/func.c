/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95043
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)37596)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((var_6) + (9223372036854775807LL))) >> (((/* implicit */int) var_5))))))) : (((unsigned int) (-(((/* implicit */int) (unsigned short)31481)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_15 *= 4294967295U;
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((8606537547466767294LL), (((/* implicit */long long int) ((unsigned short) 4294967295U)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((~(var_12)))));
                    var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) + (((((/* implicit */_Bool) (unsigned short)31481)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-91))) : (arr_1 [i_0] [i_0])))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (arr_4 [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)81))))) / (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_13);
                }
                var_19 *= ((/* implicit */unsigned int) ((((((arr_7 [i_0] [i_0] [i_1] [i_1]) + (2147483647))) >> (((arr_7 [i_0] [i_0] [i_0] [i_1]) + (2081316620))))) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)81))))));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_3 [i_0] [i_1]))));
            }
        } 
    } 
}
