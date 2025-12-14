/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76060
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
    var_19 &= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) min((3894195198U), (((/* implicit */unsigned int) (_Bool)1))))) ? (2183017177U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)22877)) ? (((/* implicit */int) (short)1428)) : (((/* implicit */int) (_Bool)1))))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((var_16), (((_Bool) (short)(-32767 - 1)))))) : (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((((/* implicit */int) (short)-32759)) + (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) var_2)))))));
                arr_6 [i_0] [i_0] [i_1] = max(((short)-28286), ((short)-32764));
                arr_7 [i_0] [(_Bool)0] [0U] &= ((/* implicit */unsigned int) max((min((((/* implicit */short) ((arr_1 [i_0 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))), (var_17))), (arr_5 [i_1] [i_1] [i_0])));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) arr_0 [i_1 - 1]);
                            arr_14 [i_3] [i_2] [i_1] [i_0] = 4290072051U;
                            var_23 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 1] [i_2 - 1])) <= (((/* implicit */int) arr_10 [i_0 + 1] [i_1 - 1] [i_2 + 1]))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-29889)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3]))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                            var_24 = ((/* implicit */_Bool) arr_2 [i_1]);
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
}
