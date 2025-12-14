/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67191
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
    var_17 = ((/* implicit */short) max(((~(((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((var_2) + (2147483647))) >> (((((/* implicit */int) var_14)) - (72))))), (((/* implicit */int) var_15))))) ? (((unsigned int) min(((signed char)65), (var_5)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? ((~(-877152266))) : (((/* implicit */int) var_12)))))));
    var_19 = ((/* implicit */short) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)241))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)32884)), (var_10))))))), (min((var_0), (((/* implicit */unsigned short) var_14))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_20 *= (((~(((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [i_3] [i_2]))))))) >> ((((((((~(((/* implicit */int) (unsigned char)130)))) + (2147483647))) >> (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_4] [(unsigned short)9] [i_0])))))) - (2147483490))));
                                arr_14 [i_2] = ((unsigned short) var_13);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) min((((/* implicit */long long int) var_13)), (var_10)));
}
