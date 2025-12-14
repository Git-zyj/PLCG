/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88345
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
    var_20 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1]))))))) : (arr_4 [i_0] [i_1])));
                arr_6 [16U] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2450804534U)) ? (var_10) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                var_21 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_3 [i_0] [(unsigned char)12] [i_1]), (((/* implicit */unsigned char) var_2))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) 331107711U)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_7);
}
