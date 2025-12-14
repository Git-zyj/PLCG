/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55064
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4 - 2] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                                arr_14 [(_Bool)0] [i_0] [i_1] [i_1] [i_3] [15] [i_4 - 1] = ((/* implicit */unsigned long long int) (~((((~(((/* implicit */int) var_17)))) / (((/* implicit */int) var_12))))));
                                arr_15 [i_4] [i_3] [i_2 - 1] [i_0] [i_0] = (_Bool)1;
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((var_18) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)176)))))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2] [i_2 + 1] = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2]);
                    var_22 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(2989868531U))))))), (((((/* implicit */_Bool) (~(arr_10 [i_0] [i_0] [i_0] [(unsigned char)12] [13] [i_0])))) ? (arr_3 [i_2 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) min((((/* implicit */short) min((var_1), (((/* implicit */unsigned char) ((var_0) || (((/* implicit */_Bool) 5032330835640412852ULL)))))))), ((short)-25768)));
}
