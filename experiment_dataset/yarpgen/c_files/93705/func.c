/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93705
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
    var_17 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
                                var_19 = ((/* implicit */unsigned long long int) var_13);
                                arr_13 [i_0 + 2] [i_1] [i_2] [i_0] [i_4] [i_2] = max((((((/* implicit */_Bool) arr_6 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))) : (min((((/* implicit */unsigned long long int) arr_5 [i_2] [i_3 - 2] [i_0])), (var_10))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-40))))));
                                var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)-370)) ? (((/* implicit */unsigned int) var_11)) : (((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_3 + 1]))))))), (var_13)));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(var_14))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)248)) > (((/* implicit */int) (signed char)20))))))))) ? (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_8 [i_1] [i_2] [i_4]))))))) : (((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)16)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((min((((/* implicit */int) (signed char)-16)), (arr_1 [i_0] [i_1]))) + (2147483647))) << (((var_1) - (3650759370590092152ULL))))) >> (min((((((/* implicit */_Bool) (unsigned short)19048)) ? (12U) : (((/* implicit */unsigned int) 1822842754)))), (((/* implicit */unsigned int) max(((signed char)1), (arr_3 [i_1]))))))));
                var_22 = var_6;
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-7))));
    var_24 = ((/* implicit */unsigned short) 22U);
}
