/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78516
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
    var_17 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_18 = ((short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_12) : (((/* implicit */int) arr_3 [i_0] [i_1]))))), (max((var_14), (((/* implicit */unsigned int) var_12))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((unsigned int) (+(var_3))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_2] [i_0 - 1] [i_0 - 1]);
                            var_20 ^= ((/* implicit */short) (~((-9223372036854775807LL - 1LL))));
                            arr_12 [i_0] [i_1 + 2] [i_1 + 2] [i_2] [i_3] [i_3] |= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) var_2))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) var_9);
                                arr_21 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(min((28656205U), (((/* implicit */unsigned int) (_Bool)0))))));
                                var_22 += ((/* implicit */unsigned int) var_9);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
