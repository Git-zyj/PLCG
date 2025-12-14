/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95894
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
    var_10 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (max((8388600U), (((/* implicit */unsigned int) (unsigned short)0))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_11 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4286578695U)) ? ((~(((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6))))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (min((7ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), ((signed char)-1)))))))));
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) 4294967295U))));
                var_13 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
            }
        } 
    } 
}
