/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97710
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                {
                    var_20 |= ((/* implicit */unsigned char) arr_1 [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (unsigned char)243))));
                                var_22 += ((/* implicit */unsigned int) var_13);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-1)) ? ((+(arr_6 [i_0 + 1] [i_2 - 1] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 17927277850683950739ULL)) ? (((/* implicit */int) var_15)) : (524287))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) max(((unsigned short)44775), (var_10)));
    var_25 = ((/* implicit */_Bool) 4294967295U);
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? ((+(18446744073709551595ULL))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)20761))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32753))) : (max((((/* implicit */unsigned long long int) 883749864U)), (var_18)))))));
    var_27 = ((/* implicit */short) 3411217418U);
}
