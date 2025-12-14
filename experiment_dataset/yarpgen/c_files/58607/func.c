/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58607
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
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((short) 3480218632U));
                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28005))) : (arr_1 [i_0 - 1]))) > (max((655515761U), (1410895448U)))));
                var_20 = ((/* implicit */long long int) (unsigned char)21);
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned char) (~(((((long long int) (unsigned char)26)) ^ (((/* implicit */long long int) (~(((/* implicit */int) (short)-32763)))))))));
    var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((short) var_2)), (((/* implicit */short) var_4)))))));
}
