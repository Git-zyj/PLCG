/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96737
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
    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((_Bool) max(((+(3905337096U))), (((/* implicit */unsigned int) arr_5 [i_1 - 1] [i_1 - 1] [4LL] [i_1 - 2])))));
                                var_19 = ((/* implicit */_Bool) ((long long int) max((arr_1 [i_1 + 1]), (((/* implicit */unsigned long long int) arr_13 [i_1 + 1] [i_1 + 1])))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((arr_11 [i_0] [i_1 - 1] [i_1] [1U] [(_Bool)1]) ? (max((((unsigned long long int) arr_4 [i_1 - 1] [i_1] [i_0])), (((/* implicit */unsigned long long int) arr_6 [4LL] [i_1 - 1] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned short) 4294967295U)), (min((((/* implicit */unsigned short) (unsigned char)72)), ((unsigned short)7)))))))));
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_16)), (var_8))))))));
                arr_15 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1] [i_0])))))), (min((((/* implicit */unsigned long long int) (unsigned short)65529)), (18446744073709551615ULL)))));
            }
        } 
    } 
    var_22 = (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)10109)) == (((/* implicit */int) (short)-17999))))));
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (-(var_1)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_13)), (max((((/* implicit */short) (_Bool)1)), ((short)-17999)))))))));
    var_24 = ((/* implicit */_Bool) ((unsigned char) ((int) (unsigned short)10109)));
}
