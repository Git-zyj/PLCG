/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90337
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_4) >> (((var_1) - (2066636518U))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))) ? (((/* implicit */int) (short)-23)) : (((((/* implicit */_Bool) max(((unsigned char)254), ((unsigned char)0)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned short)32206)) ? (((/* implicit */int) (unsigned char)244)) : (-512732672)))))));
    var_20 = ((/* implicit */unsigned short) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_18))))), (((((/* implicit */_Bool) -1153112055)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) (-(max((arr_6 [i_0]), (arr_6 [i_0])))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_11 [i_1] [i_1] [i_2] [i_1] [i_3] [i_3 + 1])))) > (min((((/* implicit */unsigned long long int) arr_7 [i_3 + 1])), (arr_10 [i_3 + 1])))));
                            arr_13 [i_0] [i_1] [i_1] [i_2] [i_3 + 1] = ((/* implicit */signed char) arr_2 [i_3 + 1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((/* implicit */long long int) var_12)), (var_15))))));
    var_23 = ((/* implicit */unsigned short) ((short) var_11));
}
