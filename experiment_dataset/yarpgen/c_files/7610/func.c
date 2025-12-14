/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7610
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
    var_14 += ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) var_2)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)235)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [9ULL] [i_0]))))), (0LL)))), (max((((unsigned long long int) arr_4 [i_0] [i_1] [i_0] [i_1])), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_0 [(unsigned short)11])))))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_4);
                    var_16 = 2147483647;
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3)))))));
    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)235))))) : (((unsigned int) 4294967295U)))), (min((((/* implicit */unsigned int) max((((/* implicit */short) (signed char)127)), ((short)(-32767 - 1))))), (var_1)))));
}
