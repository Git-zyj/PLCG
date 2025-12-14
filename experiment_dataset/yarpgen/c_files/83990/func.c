/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83990
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) (-2147483647 - 1));
        var_12 = ((/* implicit */_Bool) (-(min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_13 = ((/* implicit */long long int) (-2147483647 - 1));
        var_14 = ((/* implicit */unsigned short) min((var_14), (var_8)));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_15 = ((/* implicit */unsigned long long int) arr_3 [i_2]);
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (max(((-2147483647 - 1)), (-77420265))) : (((/* implicit */int) (unsigned short)23912))))) ? (min((((/* implicit */unsigned int) max((arr_6 [i_1] [i_1] [i_2]), (arr_5 [i_1] [i_1])))), (arr_3 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_1])), (arr_6 [i_1] [i_2] [i_2])))))));
        }
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_1]);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) > (arr_3 [(signed char)15]))), (arr_4 [i_1])));
    }
    var_17 = ((((/* implicit */_Bool) var_2)) ? (max((3U), (((/* implicit */unsigned int) max((var_0), (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
    var_18 |= ((/* implicit */unsigned short) max(((-(((((/* implicit */unsigned long long int) -2147483639)) - (var_5))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (unsigned short)43477)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))), (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15389))) : (max((((((/* implicit */_Bool) (unsigned short)43477)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_6))), (max((((/* implicit */unsigned int) (_Bool)1)), (1101909737U)))))));
}
