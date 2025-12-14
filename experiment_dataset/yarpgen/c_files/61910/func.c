/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61910
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_4))));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_3))))))));
    var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((2749453996U), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-32755))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-32760))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_9))));
                    arr_9 [i_0] = ((/* implicit */_Bool) var_10);
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) var_12)) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))) ? (((/* implicit */unsigned long long int) -711722870)) : (min((((/* implicit */unsigned long long int) arr_0 [i_0])), ((-(arr_2 [i_2])))))));
                }
            } 
        } 
    } 
}
