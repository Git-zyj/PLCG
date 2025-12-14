/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67514
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
    var_13 = ((/* implicit */short) ((min((var_5), (((/* implicit */long long int) ((unsigned int) var_1))))) + (var_4)));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (1073741312LL)))) ? (var_6) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (var_12))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))), (max((((long long int) arr_0 [i_0])), (((/* implicit */long long int) ((int) var_6)))))));
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) : (arr_2 [i_0] [i_0])))) ? (max((((var_5) + (((/* implicit */long long int) arr_2 [i_0] [i_0])))), (arr_1 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (arr_2 [i_0] [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_17 = arr_3 [i_1] [i_1];
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_3 [i_1] [i_1]) : (arr_2 [i_1] [i_1])))))));
        arr_6 [i_1] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (arr_3 [i_1] [i_1]))));
    }
}
