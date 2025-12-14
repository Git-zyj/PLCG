/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83164
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned short) min((arr_4 [i_1]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (signed char)127))))) : (var_13)))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] &= ((/* implicit */_Bool) (unsigned char)87);
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((/* implicit */signed char) (!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_0))))))), (var_1))))));
                                var_20 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) (signed char)-127))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_0))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 24; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_21 = 306367776198766423LL;
                                var_22 = ((/* implicit */long long int) (((-(var_7))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])) ? (((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)150)))) : (((/* implicit */int) (signed char)-123)))))));
                                var_23 &= ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_2]);
                                arr_21 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((arr_12 [i_0] [(short)13] [i_0]) ? (((/* implicit */int) (unsigned short)38592)) : (((/* implicit */int) arr_12 [i_6] [i_1] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) -1534380367336804198LL);
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) min(((unsigned char)170), (((/* implicit */unsigned char) (signed char)-110)))))));
}
