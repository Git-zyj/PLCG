/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83630
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */signed char) ((unsigned long long int) (_Bool)1));
        var_20 = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0 - 1]) : (((/* implicit */int) (_Bool)1))))) * (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (-1LL) : (((/* implicit */long long int) 1445746185U)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2849221101U))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (4U))))));
        var_23 = ((/* implicit */unsigned char) (~(1445746185U)));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-7)) / (((/* implicit */int) (unsigned char)156))))) || (((/* implicit */_Bool) 0U))));
    }
    var_25 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) (short)-9795)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-16)))))) <= (((/* implicit */int) var_18))));
}
