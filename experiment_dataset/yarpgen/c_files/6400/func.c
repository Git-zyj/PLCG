/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6400
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) var_8);
                            var_21 = ((/* implicit */unsigned short) var_9);
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223))) : (arr_2 [i_0] [i_3])))) ? (((max((((/* implicit */unsigned long long int) 134213632)), (7647601406952742385ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42247)))))))) : (((((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)11] [i_3])) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165))) : (15004564405411791257ULL))) : (((/* implicit */unsigned long long int) var_1))))));
                            var_23 -= ((/* implicit */short) (!(((arr_9 [i_1] [i_2] [i_0 + 1] [i_3]) <= (arr_9 [i_2] [i_1] [i_0 + 1] [(unsigned char)14])))));
                            var_24 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((var_11) ? (arr_5 [i_0] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
                        }
                    } 
                } 
                arr_11 [i_0 + 1] [i_0] = ((/* implicit */long long int) 3442179668297760358ULL);
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_1] [(unsigned short)6] [i_1]), ((unsigned char)237)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_15)) : (arr_9 [i_0] [i_1] [i_0] [i_0]))) : ((-(var_18))))))));
            }
        } 
    } 
    var_25 ^= ((/* implicit */unsigned long long int) var_16);
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (unsigned char)165))));
}
