/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58183
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
    var_16 = (!(((/* implicit */_Bool) ((((/* implicit */int) ((1792U) != (4294965503U)))) << (((var_6) - (3931957153U)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_1] [i_1 - 1]), (arr_4 [i_0] [i_0] [i_1 - 1])))) ? (((var_5) & (arr_4 [i_1] [i_1 - 1] [i_1 + 1]))) : (((/* implicit */long long int) ((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                arr_7 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((1564121677U), (((/* implicit */unsigned int) (signed char)14)))))));
                arr_8 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) (signed char)-75)))) > (((/* implicit */int) (signed char)-61)))))) <= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_5 [i_1 + 1] [i_1] [i_1 + 1])) : (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                arr_9 [i_0] [14U] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((4294965503U) <= (4294965503U)))) | ((~(((((/* implicit */int) var_10)) + (((/* implicit */int) var_2))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_14);
    var_18 = ((((var_11) + (2147483647))) << (((max(((~(4294965503U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294965503U))))))) - (1792U))));
    var_19 = ((/* implicit */_Bool) var_0);
}
