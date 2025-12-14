/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62052
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2 - 1] [i_4] [i_3] [i_4] &= ((/* implicit */unsigned short) (+(((unsigned int) (unsigned char)216))));
                                var_19 *= (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_4] [i_2 + 1] [i_2 + 1] [i_4])));
                                var_20 -= ((/* implicit */unsigned short) (+(((arr_6 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (var_15) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (short)8756))))));
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */short) min((((/* implicit */int) var_2)), ((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))))));
    var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_15)), (min((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))))));
}
