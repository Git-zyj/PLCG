/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88922
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((unsigned char) (signed char)-126))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_3))))));
        var_17 = ((/* implicit */long long int) (~(((unsigned long long int) ((((/* implicit */int) (signed char)125)) & (((/* implicit */int) (unsigned char)169)))))));
        var_18 = ((/* implicit */int) min((var_18), (min(((~(-478590180))), (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) arr_0 [i_1] [i_1]);
        var_19 = ((/* implicit */unsigned long long int) var_13);
        var_20 &= (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */int) arr_0 [i_1] [0LL])))))));
    }
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (var_2)));
    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)246))))) ? (((unsigned long long int) ((((/* implicit */long long int) var_7)) ^ (var_4)))) : (((/* implicit */unsigned long long int) var_8))));
    var_23 = ((/* implicit */unsigned char) (+((~(var_2)))));
}
