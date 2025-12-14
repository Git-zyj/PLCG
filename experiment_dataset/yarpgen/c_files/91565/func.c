/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91565
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (267687232673284030ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) var_6)) >> (((18446744073709551615ULL) - (18446744073709551586ULL))))) : (((/* implicit */int) ((unsigned short) var_4)))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) var_6);
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - ((-(((/* implicit */int) (unsigned char)105))))))) ^ (((unsigned long long int) ((((/* implicit */int) (unsigned char)124)) & (((/* implicit */int) var_1)))))));
        arr_9 [14ULL] = ((/* implicit */int) (short)-12833);
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_14 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [(short)1])) ? (4112615494U) : (((/* implicit */unsigned int) ((((var_10) + (2147483647))) >> (((((int) var_1)) + (17456))))))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_8)))) ? (min((arr_7 [i_2] [i_2]), (((/* implicit */unsigned int) arr_10 [i_2] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)105)) < (((/* implicit */int) (unsigned short)5259))))))));
        var_15 = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_6 [i_2]), ((_Bool)1))))));
        arr_15 [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)28001)) ? (arr_7 [i_2] [i_2]) : (var_8)))));
    }
    var_16 |= (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)84)) + (((/* implicit */int) (unsigned char)147))))));
}
