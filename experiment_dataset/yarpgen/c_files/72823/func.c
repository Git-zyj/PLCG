/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72823
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
    var_15 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */long long int) var_7))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_16 &= ((/* implicit */unsigned int) (-(min((arr_2 [i_0 + 3]), (arr_2 [i_0 + 2])))));
        arr_3 [(unsigned char)4] = ((/* implicit */unsigned short) ((4294967295U) << (((((/* implicit */int) (unsigned short)412)) - (391)))));
        var_17 -= ((/* implicit */unsigned short) max(((-(((/* implicit */int) max(((signed char)-5), ((signed char)0)))))), (((arr_0 [i_0 + 3]) - (arr_0 [i_0 + 3])))));
        var_18 = ((/* implicit */signed char) -8621677364360353376LL);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_0 [15LL])))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [6LL])))));
        var_20 = (-(((/* implicit */int) ((9824166362230666842ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
        var_21 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)6887)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : ((-(var_6)))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103))) : (var_5))))))));
}
