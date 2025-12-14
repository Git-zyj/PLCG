/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65928
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
    var_14 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_3))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) != (((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [(signed char)9]))))))) ? (2013265920) : ((+((+(((/* implicit */int) (unsigned short)26000))))))));
                var_15 |= ((/* implicit */unsigned long long int) (-(var_9)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (~(arr_1 [i_2])))) ? ((~(arr_5 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
                            arr_13 [i_3] [i_3] [i_3] [i_3 + 3] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_14 [i_3] [i_2 - 1] [i_0] [(unsigned short)6] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)60265)))), ((~(((/* implicit */int) arr_2 [i_1]))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26006)) << (((((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) - (22643)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2] [i_3]))) / (887210120262743537ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2527)))))))), (((_Bool) (!(((/* implicit */_Bool) arr_5 [i_0])))))));
            }
        } 
    } 
}
