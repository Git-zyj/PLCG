/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78523
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
    var_19 |= ((/* implicit */int) 3675260893U);
    var_20 = ((/* implicit */unsigned char) max(((-(((var_11) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63977))))))), (((/* implicit */long long int) var_3))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) 7LL)) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) var_5)) + (((/* implicit */int) arr_2 [(signed char)16] [(unsigned short)3] [11ULL])))))) != (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)59)) & (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((unsigned short) 293007453))) : (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [(unsigned char)5] [i_1])) ? (arr_1 [i_1]) : (((/* implicit */long long int) arr_4 [(signed char)13] [i_1] [i_1]))))) ? (max((arr_1 [i_0]), (((/* implicit */long long int) var_13)))) : (((((/* implicit */_Bool) var_6)) ? (arr_1 [i_1]) : (var_17))))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(0LL)))) ? (((((/* implicit */int) ((unsigned short) (unsigned char)46))) + (-293007454))) : ((+(((((/* implicit */_Bool) var_9)) ? (-293007454) : (((/* implicit */int) arr_3 [i_0] [5LL] [(short)10]))))))));
                var_23 = arr_3 [i_0] [i_0] [i_0];
                arr_7 [i_0] [3LL] [(short)18] = ((/* implicit */_Bool) var_12);
            }
        } 
    } 
}
