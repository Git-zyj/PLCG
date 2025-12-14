/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94176
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) var_6);
                arr_6 [i_0] = ((/* implicit */unsigned char) var_1);
                var_10 = ((/* implicit */unsigned int) (signed char)-18);
                var_11 = ((/* implicit */_Bool) var_6);
                var_12 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned char)2] [i_1])), (arr_0 [i_1]))) != (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_13 ^= ((/* implicit */unsigned int) (+(140187732541440LL)));
}
