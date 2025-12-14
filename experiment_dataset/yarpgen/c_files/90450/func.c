/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90450
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1]))));
                arr_6 [i_1] [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1])))));
                arr_7 [i_0] = min((((/* implicit */long long int) max((arr_3 [i_0] [i_1]), (((unsigned char) var_12))))), (((long long int) min((((/* implicit */long long int) var_14)), (arr_4 [i_0] [i_0])))));
                arr_8 [(unsigned char)12] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned int) arr_3 [i_1] [i_0])), (arr_0 [i_0] [i_1]))))) ? ((+(arr_4 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) -2147483642)) : (-1282541129832164630LL)))) ? (((/* implicit */int) ((unsigned char) arr_2 [15] [i_1]))) : (((/* implicit */int) arr_3 [i_0] [i_1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 0U))))))));
    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((6284955285698411086ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))))) : (var_13)));
}
