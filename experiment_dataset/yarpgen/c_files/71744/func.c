/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71744
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
    var_10 = ((/* implicit */int) var_8);
    var_11 = ((((/* implicit */int) max((((signed char) var_0)), (((signed char) var_7))))) >> ((((~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8))))))) + (13))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_12 = arr_0 [i_0] [i_0 + 1];
        var_13 = ((((unsigned long long int) arr_0 [i_0 - 3] [i_0 - 1])) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
        arr_2 [i_0] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) min((((long long int) arr_1 [i_0])), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3)))))))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))))), ((+(var_2))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [i_1]))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) arr_4 [i_1] [i_1]))))));
    }
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned short) var_1)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)57))) / (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_0))))));
}
