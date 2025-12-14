/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9174
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
    var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((var_1), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((1193818486) << (((1193818486) - (1193818486))))))))) && (((/* implicit */_Bool) max(((unsigned short)2), (((/* implicit */unsigned short) ((((/* implicit */int) (short)17522)) == (((/* implicit */int) var_12))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = (!((!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1])) << (((((/* implicit */int) arr_2 [i_0] [i_1])) - (62154)))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_1]);
                var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_15)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 ^= ((/* implicit */int) arr_4 [i_0] [i_0]);
                                var_21 = ((/* implicit */unsigned short) var_12);
                                arr_17 [i_4] [i_2] [i_3] [i_2] [i_2] [i_0] = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) var_2))) / (((var_15) / (((/* implicit */long long int) arr_13 [i_4] [i_3] [i_2 + 1] [i_1] [i_0] [i_0])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_10 [(signed char)0] [i_1] [i_1] [i_1] [i_1]) : (arr_10 [(signed char)0] [(signed char)4] [(signed char)0] [(signed char)4] [i_4]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_17))));
    var_23 = ((/* implicit */signed char) min((((/* implicit */int) var_13)), ((~(((/* implicit */int) var_14))))));
}
