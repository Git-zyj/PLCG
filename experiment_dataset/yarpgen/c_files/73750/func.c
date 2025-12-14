/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73750
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8)))))));
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) 1313756107))));
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 997174441U)) ? (-1698223030) : (((/* implicit */int) (unsigned char)12))))) ? (((/* implicit */unsigned long long int) var_6)) : ((+(((((/* implicit */_Bool) -1698223000)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (4845641291343708649ULL))))))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_14 -= ((/* implicit */unsigned char) ((min((arr_3 [i_0 + 1] [i_0 + 1]), (arr_3 [i_0 - 2] [i_0 + 1]))) - (((/* implicit */unsigned long long int) ((unsigned int) min((arr_4 [i_0]), (((/* implicit */int) (unsigned char)161))))))));
                    var_15 = ((/* implicit */_Bool) ((unsigned char) ((((-1313756113) ^ (((/* implicit */int) (short)-25230)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 1698223030))))))));
                }
            } 
        } 
    } 
    var_16 = var_9;
}
