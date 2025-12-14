/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70848
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((signed char) (short)21976)))));
    var_18 *= ((/* implicit */unsigned short) var_14);
    var_19 = ((/* implicit */unsigned char) var_12);
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_10))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) 5354280236863220463LL);
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)255))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((short) 4294967264U))), ((unsigned short)50294))))));
                var_23 = ((/* implicit */unsigned char) arr_0 [i_0]);
                arr_4 [i_1] &= ((/* implicit */unsigned short) ((arr_2 [i_1] [i_1] [i_0]) & (((/* implicit */unsigned long long int) (~(min((var_0), (((/* implicit */long long int) (signed char)-108)))))))));
            }
        } 
    } 
}
