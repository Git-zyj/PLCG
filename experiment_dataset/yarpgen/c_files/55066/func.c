/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55066
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
    var_19 = ((/* implicit */unsigned long long int) var_6);
    var_20 += min((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_11))))))), ((+(((/* implicit */int) var_16)))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 2]))) : (884377882U)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) >= (min((((/* implicit */unsigned int) var_12)), (1504932101U)))))) : (((int) 3410589412U))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_0 [i_0]))));
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((var_11) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2])))))), (min((((/* implicit */unsigned long long int) -8810302066684000423LL)), (18446744073709551615ULL))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))))))));
                }
            } 
        } 
    } 
}
