/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87877
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
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - ((-(var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (min((((var_0) >> (((/* implicit */int) var_16)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_21 += ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [8U] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [i_0] [(signed char)8] [i_2] [i_0] [i_4] [i_2])) ? (1300385447U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_3]))))))))));
                                var_22 = ((/* implicit */signed char) min(((+(min((arr_1 [i_2]), (((/* implicit */long long int) (_Bool)0)))))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (arr_2 [i_0] [i_0])))) : (arr_9 [i_0] [i_4] [i_2] [i_3 + 1] [i_3 + 1] [i_4]))))));
                                arr_13 [i_4] [i_3] [(signed char)8] [i_1] [(signed char)8] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) & ((((_Bool)1) ? (max((((/* implicit */int) (_Bool)1)), (97950092))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (9575792447772109636ULL))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_1] [i_0] [i_3 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
