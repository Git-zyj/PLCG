/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6995
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (~(min((((428436357) << (((((/* implicit */int) (signed char)31)) - (29))))), (((/* implicit */int) var_3)))))))));
        var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27177))) : (((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0]))) ? (max((((/* implicit */unsigned long long int) var_14)), (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
        arr_4 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((int) var_6))), (((((var_6) == (((/* implicit */long long int) ((/* implicit */int) var_9))))) ? (arr_2 [i_0 + 2] [i_0]) : (arr_2 [i_0 + 1] [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1840579527)))) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (-510891794)))) ? ((~(((int) 3866196462U)))) : (((/* implicit */int) var_12))));
        var_18 = ((/* implicit */unsigned short) arr_1 [i_1] [(unsigned char)6]);
    }
    for (int i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        var_19 = ((/* implicit */short) var_9);
        var_20 = ((((/* implicit */_Bool) max((4635032467379193315ULL), (((/* implicit */unsigned long long int) -9223372036854775797LL))))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
    }
    var_21 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216))))))), ((((+(var_11))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
}
