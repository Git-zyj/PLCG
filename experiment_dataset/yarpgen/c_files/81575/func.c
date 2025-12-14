/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81575
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
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) min((min(((-(arr_1 [i_0]))), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) (signed char)63))));
        arr_3 [i_0] = (unsigned short)15;
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (unsigned short)64235))))), (max((arr_1 [i_0]), (arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_0 [(unsigned short)14] [(unsigned short)14]))))))) : ((((!(((/* implicit */_Bool) arr_0 [12] [12])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)35721))))) : ((+(18446744073709551615ULL))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) (((+(arr_1 [i_1]))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [(short)14] [(short)14])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)96)))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~(((/* implicit */int) arr_0 [4ULL] [i_1 - 1])))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33143))) - (arr_1 [i_1])))));
    }
    var_19 = ((/* implicit */long long int) (+((~(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned short)1301))))))));
    var_20 = ((/* implicit */signed char) 18446744073709551615ULL);
    var_21 ^= ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */int) (unsigned short)29815)), (var_1))));
}
