/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95079
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 |= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                arr_4 [i_1] [i_0] = ((arr_1 [i_0]) / (((((/* implicit */int) ((((/* implicit */int) (short)-28358)) == (((/* implicit */int) (signed char)123))))) - (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */int) (unsigned char)0)))))));
                arr_5 [i_0] = ((/* implicit */_Bool) min((arr_2 [i_0] [i_1]), (((/* implicit */int) arr_3 [i_0] [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((signed char) var_3));
    var_21 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) (signed char)-85)))), (((/* implicit */int) var_14))));
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_6)))))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)229)), (min((var_15), (((/* implicit */int) var_13))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 1485278021U)))))));
}
