/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79504
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((unsigned long long int) ((unsigned int) -6103225650854651860LL)))));
    var_20 = ((/* implicit */_Bool) var_8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((short) ((((/* implicit */unsigned long long int) (-(2134553254)))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])) : (var_12))))));
                    var_22 += ((/* implicit */unsigned int) var_1);
                }
            } 
        } 
    } 
}
