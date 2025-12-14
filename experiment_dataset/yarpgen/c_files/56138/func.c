/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56138
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((int) ((((var_4) && (((/* implicit */_Bool) -599379573)))) ? (max((var_14), (1568967450U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((677590063U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))))))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0)))) : (((long long int) var_7))))) * (((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [0U]))) : (var_14))))));
                var_19 = (signed char)-64;
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (signed char)-56);
}
