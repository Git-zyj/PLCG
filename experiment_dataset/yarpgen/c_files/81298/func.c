/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81298
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
    var_18 = ((/* implicit */unsigned char) var_15);
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_1))));
    var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (max((((/* implicit */unsigned int) var_0)), (var_5)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : ((-(9181628288009724164LL)))))));
    var_21 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))))), (((((((/* implicit */_Bool) (short)255)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)2640)) + (1073740800))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) 1U))), (((arr_5 [i_0] [i_0] [i_4 - 2]) ? (((/* implicit */int) arr_3 [i_4 - 1])) : (((/* implicit */int) arr_3 [i_4 - 1]))))));
                                var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)120))));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */int) max((arr_10 [i_0] [i_4 + 3] [i_4] [i_4 + 1] [i_4]), (arr_10 [i_2] [i_4 - 1] [i_4] [i_4 + 1] [i_4])))) >= (((((/* implicit */_Bool) arr_10 [i_0] [i_4 + 1] [i_4] [i_4 - 2] [i_4])) ? (((/* implicit */int) arr_10 [i_3] [i_4 - 2] [i_4] [i_4 - 1] [i_3])) : (((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 612473084U)) ? (6625203128222845430LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))) * (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0])) + (((/* implicit */int) arr_9 [i_0]))))))))));
            }
        } 
    } 
}
