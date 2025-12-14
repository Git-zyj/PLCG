/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68761
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))) ? (((/* implicit */int) min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_1])))) : (((/* implicit */int) arr_4 [i_0] [i_1]))));
                arr_6 [i_0] &= ((/* implicit */int) var_11);
                var_13 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [(signed char)7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)255))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) min(((-(((/* implicit */int) (unsigned char)97)))), (((/* implicit */int) var_10))));
}
