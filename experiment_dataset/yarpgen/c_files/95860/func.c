/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95860
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) (((-(((/* implicit */int) arr_4 [i_0] [i_1 - 4] [i_1])))) * (((/* implicit */int) arr_2 [i_0] [i_1 - 4]))));
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)28)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) >= (max(((+(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_4))))));
                            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-2890)) ? (max((((/* implicit */unsigned long long int) var_11)), ((+(var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26)))));
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (-(((/* implicit */int) (unsigned short)65530)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)-95))))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_5)) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
    var_16 = ((short) ((short) (!(((/* implicit */_Bool) var_6)))));
    var_17 = ((/* implicit */signed char) var_1);
}
