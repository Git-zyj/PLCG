/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62526
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)254);
                arr_6 [i_0] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned int) (+(((max((-303104977), (((/* implicit */int) var_9)))) + (-303104968)))));
                arr_7 [i_1] = ((/* implicit */_Bool) (unsigned short)12512);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) 303104967)) ? (((/* implicit */unsigned long long int) 2147483647)) : (17179869168ULL)))))) ? (((/* implicit */int) ((short) ((long long int) (signed char)-100)))) : (((/* implicit */int) (unsigned short)53024))));
}
