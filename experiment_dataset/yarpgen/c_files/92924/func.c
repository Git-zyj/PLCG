/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92924
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) (+(-1920300887776923463LL)));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */signed char) arr_4 [i_0] [i_0] [i_2])), (var_5))))))) ? (((/* implicit */long long int) ((unsigned int) var_2))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */long long int) arr_1 [i_2])) : (arr_5 [i_1] [i_1] [i_0])))));
                    var_13 *= ((/* implicit */_Bool) (~(max((arr_6 [i_1] [i_1] [i_2]), (arr_6 [i_1] [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] = min((((unsigned long long int) arr_3 [i_0] [i_1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_2] [i_2] [i_2])) ? (arr_11 [i_0] [i_2] [i_3] [i_4]) : (((/* implicit */int) (signed char)-126))))));
                                var_14 = ((/* implicit */unsigned char) ((short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (arr_7 [i_0] [i_2]))), (((/* implicit */unsigned long long int) (short)6246)))));
                                var_15 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_2 [i_1]), (((/* implicit */long long int) (signed char)-74)))))));
                                arr_14 [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)135)) & (((((((/* implicit */_Bool) 5704172748266158037LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-90)))) + (max((((/* implicit */int) arr_0 [i_4])), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) (signed char)74);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_6);
}
