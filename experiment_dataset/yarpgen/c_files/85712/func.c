/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85712
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (+(min((var_5), (((/* implicit */int) var_14))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (var_6) : (((/* implicit */long long int) var_5)))) : ((+(var_7)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 -= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_18 -= ((/* implicit */unsigned int) ((int) arr_1 [i_0]));
    }
    for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (arr_6 [i_1])))) ? (((/* implicit */long long int) (+(arr_6 [i_1])))) : (((((var_7) + (9223372036854775807LL))) << (((((-7900090423283372908LL) + (7900090423283372931LL))) - (23LL)))))));
        var_20 = ((/* implicit */unsigned int) (-(arr_6 [i_1])));
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) -1345586415)), (arr_4 [0ULL])))) ? (((var_8) << ((((((-(((/* implicit */int) (unsigned short)50306)))) + (50311))) - (5))))) : (((/* implicit */int) var_9))));
        var_22 = ((/* implicit */_Bool) max(((+(var_6))), (((/* implicit */long long int) (-(min((((/* implicit */unsigned int) var_0)), (arr_3 [i_1] [i_1 - 1]))))))));
        var_23 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_12)) ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 - 1])))));
    }
    var_24 = ((/* implicit */short) (+(2434437061U)));
}
