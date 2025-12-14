/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99805
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
    var_11 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_0))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)4234))));
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65514)) ? (((/* implicit */int) (short)32089)) : (((/* implicit */int) (signed char)90))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (var_10)))));
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_8)) : (var_5))), (((/* implicit */int) max((((/* implicit */short) var_3)), ((short)32085))))))), ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))) : (0U)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) (-(max(((-(((/* implicit */int) (short)-32767)))), (((/* implicit */int) var_0))))));
    var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) (~(((/* implicit */int) (short)-32088)))))))), (((unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
}
