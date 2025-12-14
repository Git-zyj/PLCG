/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60475
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((573953137) & (((((/* implicit */_Bool) -573953138)) ? (573953137) : (573953143))))))));
                var_18 |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (4558622005411595328LL) : (arr_0 [i_1])))) ? (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) (signed char)98)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((arr_4 [i_0 + 2] [i_1] [i_0]) <= (arr_4 [i_0 + 1] [i_1] [i_0]))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_15))));
                var_19 = ((/* implicit */short) 3753300269U);
                var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1] [i_0])) ? (541667026U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned char)128)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_1);
    var_22 = ((/* implicit */signed char) 2123304810U);
    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 685755787U))))), (685755787U))))));
}
