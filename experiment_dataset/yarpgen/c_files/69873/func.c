/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69873
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_1 [i_1 - 2]))))) : (min((var_3), (((/* implicit */long long int) var_6))))))));
                var_14 = ((/* implicit */long long int) max((var_14), (var_1)));
                arr_6 [i_0] [16U] = ((1017400344U) * (1017400344U));
                arr_7 [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (arr_3 [i_1 - 3] [i_1 - 3] [i_1 - 1]))));
                arr_8 [i_1 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (5973375960864429294ULL)))))))) * (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))), (((var_2) + (1017400344U)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned int i_5 = 4; i_5 < 21; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                arr_20 [i_6] [i_5] [i_4] [i_3] [i_2] = ((/* implicit */unsigned long long int) min((((signed char) 536346624U)), (((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_3] [i_3] [(_Bool)1] [i_3])) < (((/* implicit */int) arr_9 [i_3] [i_6])))))));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max((arr_10 [i_2]), (((/* implicit */unsigned char) min((arr_18 [i_4 + 1] [i_4 + 1]), (((/* implicit */signed char) arr_13 [i_4 - 2] [i_5 - 3]))))))))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_11)) <= (((unsigned long long int) (+(((/* implicit */int) var_12)))))));
                                arr_21 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) && (((/* implicit */_Bool) var_1))));
                                arr_22 [(signed char)8] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1017400338U)))) ? (((/* implicit */long long int) (+(var_5)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_5]) : (var_2)))) ? (((var_1) - (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_3]))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1017400351U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_3] [i_3] [i_3]))) : (arr_16 [i_3] [i_3] [i_3] [i_2] [i_2])))), (arr_19 [i_2] [i_2] [i_2] [i_3] [i_3] [i_3]))))))));
            }
        } 
    } 
}
