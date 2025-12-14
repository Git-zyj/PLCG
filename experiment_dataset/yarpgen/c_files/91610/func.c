/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91610
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
    var_10 -= ((/* implicit */short) var_4);
    var_11 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) > (((((var_7) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) max(((-((~(((/* implicit */int) arr_2 [i_1])))))), ((-(((/* implicit */int) arr_1 [i_0])))))))));
                arr_5 [i_0] [i_0] [4ULL] = ((/* implicit */unsigned int) ((1349381798) >> ((((-(-1349381802))) - (1349381777)))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) -1308666324)) : (arr_0 [i_1])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) 1550107018)))))))) ? (((/* implicit */unsigned int) ((arr_3 [i_0] [i_1] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))) : (max((((/* implicit */unsigned int) 1349381798)), (3122255025U)))));
                var_13 = ((((/* implicit */_Bool) ((var_8) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (9361043188982625523ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) ? ((-(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1172712270U)) ? (-1408921783) : (((/* implicit */int) arr_1 [i_0]))))) > (arr_0 [i_0])))));
            }
        } 
    } 
}
