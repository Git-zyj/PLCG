/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62365
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((((/* implicit */unsigned char) min((((_Bool) var_0)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (var_7)))))), (min((max((var_3), (((/* implicit */unsigned char) var_0)))), (((unsigned char) var_8)))))))));
    var_14 = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / ((+(var_7))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 *= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_2] [i_2] [(unsigned short)12]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_4] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_0 + 2]))) > (1040187392U));
                                var_16 &= ((/* implicit */_Bool) (-(var_10)));
                                var_17 -= ((/* implicit */unsigned int) var_9);
                                var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4] [(_Bool)1] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
