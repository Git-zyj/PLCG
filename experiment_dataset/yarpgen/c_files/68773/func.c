/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68773
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
    var_12 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(1023U)))) : (((unsigned long long int) var_2))))) && (((/* implicit */_Bool) (+(max((((/* implicit */long long int) 274519165U)), (4691958080903035431LL))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */long long int) max((893471867), (var_9)))) : (((arr_4 [i_0] [5LL] [i_0]) + (((/* implicit */long long int) 274519185U))))))) != (((((/* implicit */_Bool) 16454714224771353447ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))))));
                var_14 = ((/* implicit */unsigned short) ((unsigned int) (~(arr_3 [i_0 - 1] [i_1]))));
                arr_6 [i_1] [i_0] [i_1] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)40707)) ? ((~(((/* implicit */int) (unsigned short)24828)))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) == (((/* implicit */int) var_1))))))));
            }
        } 
    } 
}
