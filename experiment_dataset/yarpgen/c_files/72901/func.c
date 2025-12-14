/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72901
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) + (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_11))))) && (((((/* implicit */int) var_5)) < (var_6))))))));
                                arr_13 [i_0] [i_0] [(unsigned short)6] [i_4] [(_Bool)1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (~(var_1))))));
                                var_13 |= ((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) var_2))), (var_5)));
                                arr_14 [(unsigned short)1] [0ULL] [(unsigned char)9] = ((/* implicit */signed char) arr_12 [i_1] [(unsigned short)7] [i_2] [i_1] [i_0]);
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned int) min((var_14), (min((((/* implicit */unsigned int) arr_5 [4] [(short)3] [i_0] [i_0])), (max((min((var_7), (var_7))), (((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))))))))));
            }
        } 
    } 
    var_15 = ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) var_4)) < (var_3))) ? ((+(var_3))) : (((/* implicit */unsigned int) ((var_6) | (((/* implicit */int) (unsigned short)51073)))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_1)))))) : (var_7));
}
