/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8209
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) >= (((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [i_1] [i_0] [i_0]), (((/* implicit */unsigned short) var_13))))) || (((/* implicit */_Bool) 2657857705U))))))))));
                var_21 = ((/* implicit */unsigned long long int) ((unsigned short) ((min((var_4), (((/* implicit */unsigned int) var_1)))) | ((+(var_4))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 7; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_1] [i_3 + 4])) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_3 + 2] [i_3])) : (((/* implicit */int) arr_5 [i_3 + 4] [i_1] [i_3 - 2])))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)0), (var_7))))) / (min((((/* implicit */unsigned int) (unsigned short)42354)), (1869429486U))))), (((/* implicit */unsigned int) var_19)))))));
                            var_24 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_3 + 1])) | ((~(((/* implicit */int) var_0))))));
                            var_25 += ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned long long int) min((1637109591U), (((/* implicit */unsigned int) var_9))))), (((((/* implicit */_Bool) 1637109577U)) ? (((/* implicit */unsigned long long int) 2425537815U)) : (18446744073709551615ULL))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) (~((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (1869429481U)))))));
}
