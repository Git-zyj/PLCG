/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99754
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 5769313344940913712LL)) ? (((/* implicit */int) ((arr_3 [i_1]) <= (arr_3 [i_0])))) : (((/* implicit */int) ((short) arr_4 [11] [11] [11]))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_3 [(_Bool)1]))))))));
                var_21 = ((/* implicit */int) (((~(((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 2])))) <= (((((/* implicit */_Bool) var_9)) ? (arr_2 [i_1 + 1] [i_0] [i_0]) : (arr_2 [i_0] [i_0] [(short)12])))));
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) var_6);
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? ((+(((((/* implicit */_Bool) arr_0 [(unsigned char)0])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) : (((unsigned long long int) var_14))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-117)) < ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_19))))))));
}
