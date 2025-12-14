/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65138
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
    var_17 = ((/* implicit */_Bool) (-((~(((((/* implicit */_Bool) (short)-11801)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))))));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min(((unsigned char)187), ((unsigned char)12))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((signed char) (unsigned short)51784)))));
                arr_5 [i_0 - 2] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_4 [i_0 - 1])), (min((((/* implicit */unsigned char) var_7)), (arr_2 [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13704)) ? (arr_3 [i_0 + 4]) : (((/* implicit */int) arr_2 [i_0 + 3])))))));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((int) (unsigned short)13751)) * (((/* implicit */int) ((5328148163472009823LL) == (((/* implicit */long long int) 1218042426U))))))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : ((+(((/* implicit */int) arr_2 [i_0 + 3]))))));
            }
        } 
    } 
}
