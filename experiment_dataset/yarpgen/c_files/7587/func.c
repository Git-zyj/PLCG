/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7587
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
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), ((-(((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)194), (((/* implicit */unsigned char) (signed char)-3)))))) : (min((((/* implicit */unsigned long long int) arr_4 [i_1])), (arr_2 [i_0])))))))));
                    arr_7 [i_0 - 1] [i_1] [(unsigned short)0] [i_2] = ((/* implicit */unsigned long long int) min((min((((/* implicit */short) arr_1 [i_0] [i_0 - 3])), (max((var_7), (((/* implicit */short) (unsigned char)169)))))), (((/* implicit */short) arr_6 [i_2] [i_1] [8]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_11)), ((-(max((var_4), (((/* implicit */unsigned int) var_10))))))));
    var_15 ^= ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) var_9))))))));
}
