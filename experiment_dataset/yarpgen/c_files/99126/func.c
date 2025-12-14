/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99126
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((/* implicit */long long int) (unsigned short)3)), (-1504454712195597326LL))))));
    var_19 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_11 [14LL] = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1] [i_0 - 2] [(short)5]))))));
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_3))));
                                var_21 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (signed char)78)))), ((+(((/* implicit */int) var_15))))));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [3LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)87))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)1008)), (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((-(var_11)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_9)), (var_10)));
                    var_23 = ((/* implicit */long long int) var_17);
                    var_24 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)61888)) ? (743830362U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1089)))));
                }
            } 
        } 
    } 
}
