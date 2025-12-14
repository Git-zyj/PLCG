/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83367
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
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))) : (((/* implicit */int) arr_3 [i_0 + 2] [i_1])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) (-((~(max((arr_11 [i_2] [i_2] [i_3] [i_4]), (((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [i_4]))))))));
                                var_11 ^= ((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0 - 3]);
                                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) min((arr_3 [i_0 - 1] [i_0 - 3]), (arr_6 [i_2] [i_2] [i_3 + 1])))) + ((-(((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 1])))))))));
                                arr_15 [i_0 + 1] [i_1] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_0 - 1])) ? (arr_0 [i_3 + 1] [i_0 - 2]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0] [i_2] [i_0] [i_0 + 2] [i_3 + 1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_3))));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))));
    var_15 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)25678)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U))), (var_7)));
}
