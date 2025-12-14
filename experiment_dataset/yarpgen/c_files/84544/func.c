/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84544
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) - (((unsigned long long int) (unsigned char)255))))));
                            arr_13 [i_0] [i_0] [i_2] [i_1] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_13))))) & (((((/* implicit */int) var_10)) | (((/* implicit */int) (_Bool)1))))))), (((unsigned long long int) arr_9 [i_0] [i_1] [14U] [i_2])));
                            arr_14 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((var_13) ? (max((var_7), (((/* implicit */unsigned int) max((1730944013), (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) min((((((/* implicit */int) var_5)) << (((((/* implicit */int) var_9)) - (18170))))), (((/* implicit */int) min((arr_6 [16ULL] [(unsigned char)6] [i_3] [i_3]), (((/* implicit */unsigned short) (unsigned char)255))))))))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)255);
                arr_16 [i_0] = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (~(min((var_12), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))))));
}
