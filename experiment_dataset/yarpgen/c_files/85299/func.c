/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85299
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
    var_10 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_2 [i_1])))) || (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_6 [i_1] [i_0]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [11U]))) && (((/* implicit */_Bool) var_3)))))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((min((var_4), (((/* implicit */long long int) arr_2 [i_1])))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))) / (((/* implicit */int) var_2))));
            }
        } 
    } 
}
