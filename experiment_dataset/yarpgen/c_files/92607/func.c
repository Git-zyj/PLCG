/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92607
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [(short)18])))) ? (min((((/* implicit */long long int) arr_0 [12ULL])), (arr_1 [0]))) : (((((/* implicit */_Bool) arr_0 [(short)16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [18LL]))) : (arr_1 [(short)12]))))))));
        arr_2 [i_0] = max((1493177413), (((/* implicit */int) (_Bool)1)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)27634)) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_4 [i_1] [i_1]) : (arr_4 [3U] [i_1]))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)41)), (arr_3 [i_1] [i_1]))))))))));
        var_19 -= ((/* implicit */long long int) ((((/* implicit */int) (((+(arr_1 [(short)16]))) >= ((-(arr_1 [10ULL])))))) | (((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_1] [i_1])) < (var_1))))));
    }
    var_20 = var_2;
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_12))));
    var_22 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (var_6))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) >= (15625967487613930494ULL))))))));
}
