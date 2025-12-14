/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7361
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
    var_11 = ((/* implicit */int) min((var_11), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (var_10)))) ? (((/* implicit */int) ((unsigned short) var_5))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) 4294967292U)))))))))));
    var_12 = ((/* implicit */signed char) var_5);
    var_13 = ((/* implicit */short) ((var_1) + (((/* implicit */unsigned long long int) 4294967292U))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) var_3);
                    arr_6 [i_1] [8ULL] |= ((/* implicit */long long int) 4U);
                    var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (var_10) : (((/* implicit */unsigned long long int) 7U))))) ? (max((arr_2 [i_1 - 2]), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [(unsigned char)0])) ? (((/* implicit */int) arr_0 [4ULL] [(signed char)8])) : (((/* implicit */int) arr_0 [i_1 + 1] [(short)2])))))))));
                    var_16 -= (signed char)-18;
                }
            } 
        } 
    } 
}
