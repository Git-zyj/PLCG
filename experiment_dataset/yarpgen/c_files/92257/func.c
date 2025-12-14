/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92257
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
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_7 [i_0] [i_0 + 2] [i_0 + 2]) : (arr_7 [i_0] [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_0] [i_0 + 2] [i_0 - 1]) <= (arr_7 [i_0] [i_0 + 2] [i_0 - 1]))))) : (arr_7 [i_0] [i_0 + 1] [i_0 - 1])));
                    var_15 = ((/* implicit */long long int) ((max((((/* implicit */int) ((short) arr_0 [i_0 + 2] [(unsigned char)2]))), ((+(((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned char)6])))))) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-101)) && (((/* implicit */_Bool) arr_2 [i_2])))))) == (var_10))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) min((3469683029547669098LL), (((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_8)))))))));
                                var_17 = ((/* implicit */signed char) ((((((((((/* implicit */_Bool) (signed char)-13)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)0)))) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (unsigned char)193))));
}
