/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77569
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))))), ((signed char)0)))) ? ((~((~(((/* implicit */int) (unsigned char)59)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) max((arr_2 [i_1]), (((/* implicit */short) var_11))))), ((unsigned short)13))))));
                var_13 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)50)) << (((((/* implicit */int) (unsigned char)205)) - (192)))))) ? (max((((/* implicit */int) arr_0 [i_0] [i_1])), (var_3))) : (((/* implicit */int) max((var_11), (var_4)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (9074408982918689365ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3472858480194536344LL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197))))))))) ? (((/* implicit */int) var_11)) : (max((((/* implicit */int) var_7)), ((-(((/* implicit */int) var_11))))))));
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)37)) < (((/* implicit */int) var_7))))), (((var_5) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))))))), ((~(var_0))))))));
    var_16 = ((/* implicit */unsigned short) var_7);
}
