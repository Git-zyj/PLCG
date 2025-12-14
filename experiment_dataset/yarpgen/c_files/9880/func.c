/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9880
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
    var_10 = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) / ((+(2088058415U)))))));
    var_11 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned char)162))))));
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((unsigned int) var_6)) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106)))))), (min((((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20593))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (0ULL))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (signed char)-77);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_13 |= ((/* implicit */unsigned long long int) min((((unsigned char) ((signed char) var_4))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_4 [i_1] [i_1])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (2758839270909036089ULL)))))))));
                    var_14 |= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_6))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))) - (var_0))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [i_1] [i_2]) : (var_6))))));
                }
            } 
        } 
    }
}
