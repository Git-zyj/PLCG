/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75913
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (8948299124337539403ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((+(var_4))))), (var_4))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min((6250876206152272245ULL), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)65534)))) | (((((/* implicit */_Bool) 1799016249)) ? (-2147483621) : (((/* implicit */int) (unsigned short)46440))))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(arr_1 [i_0 - 1])));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50117)) ? (arr_4 [19] [1ULL]) : (((/* implicit */int) arr_3 [i_1]))))) && (((/* implicit */_Bool) var_9)))))) >= ((+(min((1858392596901444637ULL), (((/* implicit */unsigned long long int) -1782939222))))))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (min((((/* implicit */int) arr_3 [i_1])), (arr_4 [i_1] [i_1]))) : (((((/* implicit */int) (unsigned short)65525)) & (((/* implicit */int) (unsigned char)132)))))))));
        var_16 = ((/* implicit */unsigned short) min(((+(arr_4 [i_1] [i_1]))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */int) arr_3 [i_1])) : (1782939221)))) || (((/* implicit */_Bool) arr_3 [i_1])))))));
        var_17 &= (unsigned short)7506;
        arr_6 [i_1] = ((/* implicit */unsigned short) ((14168086647160540424ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1)))));
    }
}
