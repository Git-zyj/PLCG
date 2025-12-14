/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57466
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
    var_11 = ((/* implicit */_Bool) max((((var_10) ? (min((0U), (((/* implicit */unsigned int) (short)10048)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 122715368U)))))))), (((/* implicit */unsigned int) var_10))));
    var_12 = ((/* implicit */unsigned char) max((((((/* implicit */int) (short)10048)) >= (((/* implicit */int) (short)10068)))), (min((var_7), (((var_5) <= (((/* implicit */long long int) -701240323))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((arr_1 [i_1]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10068)) ? (((/* implicit */int) (short)10068)) : (((/* implicit */int) arr_2 [i_1]))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-10068)) : (((/* implicit */int) (short)9071))))), (22586995U)))) : (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 1])) ? (((/* implicit */long long int) 1071720761U)) : (arr_0 [i_0 - 1] [i_0 - 1])))));
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 9; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1]))) : (76113673U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_2 + 2]))))))));
                                arr_12 [i_3] [i_3] [i_2] [i_3] [i_3] [i_4] [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (3223246534U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1])))))));
                                var_15 = ((_Bool) 3223246562U);
                                var_16 = ((/* implicit */short) arr_8 [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)78)) / (((/* implicit */int) ((signed char) 16116831555418240306ULL)))))), (122715368U)));
}
