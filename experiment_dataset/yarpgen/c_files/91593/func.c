/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91593
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
    var_20 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) ((((/* implicit */int) var_4)) < (var_13)))) | (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_7))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */int) ((((/* implicit */int) max((arr_5 [i_1 + 1]), (arr_5 [i_1 + 1])))) > (((((/* implicit */int) arr_5 [i_1 - 1])) >> (((((/* implicit */int) arr_5 [i_1 + 1])) - (50871)))))));
                var_22 = ((/* implicit */signed char) (((~(max((((/* implicit */long long int) arr_3 [i_0] [i_1])), (0LL))))) + (((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (-1LL))) >> (((max((((/* implicit */unsigned int) arr_4 [i_0] [(short)1])), (arr_3 [i_0] [i_0]))) - (4238299852U)))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1 - 1]))))) ? (max((((/* implicit */unsigned int) (short)4064)), (arr_3 [i_0] [i_1]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1])))))));
                var_24 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((0LL) <= (((/* implicit */long long int) ((/* implicit */int) var_17)))))))) <= (((/* implicit */int) arr_1 [i_1] [i_0]))));
                var_25 = ((/* implicit */signed char) max((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9937))) < (0LL)))), (arr_1 [i_1 - 1] [i_1 - 1])));
            }
        } 
    } 
}
