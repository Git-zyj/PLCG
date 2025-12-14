/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7724
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
    var_16 = ((/* implicit */unsigned int) ((unsigned short) ((int) min((var_9), (var_14)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = var_8;
                var_18 = ((/* implicit */unsigned char) ((((min((var_0), (((/* implicit */unsigned long long int) 5045978114805342521LL)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) + (max((((((/* implicit */unsigned long long int) 3043967829U)) - (var_0))), ((+(var_13)))))));
                var_19 = arr_1 [i_1 - 1] [i_1 - 1];
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 &= ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1 - 1]);
                            var_21 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_3] [i_2] [i_0] [0] [i_0])), (14548515641098087350ULL)))) || (((/* implicit */_Bool) min((2907903941961740107ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))))), ((-((~(((/* implicit */int) arr_3 [i_1] [i_1]))))))));
                            var_22 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26603))) : (arr_7 [i_0] [i_0] [i_1] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)26603))))) : (((/* implicit */int) var_15)))), (((int) (+(2907903941961740107ULL))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) min((((/* implicit */int) ((unsigned short) arr_7 [i_1 - 1] [i_1] [i_1] [i_1 - 1]))), ((+(((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_12);
}
