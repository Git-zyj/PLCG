/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85065
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
    var_10 = ((/* implicit */signed char) var_2);
    var_11 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (+(var_6)))) ? (var_6) : (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_2))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (arr_0 [i_1]) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))));
            arr_5 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 - 1]))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0 + 1]);
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) 
    {
        var_13 = ((/* implicit */int) (((!(((/* implicit */_Bool) 18446744073709551614ULL)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) : (1ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (var_8))))));
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_2 - 2] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 1]))) : (((var_5) / (((/* implicit */unsigned long long int) var_7))))));
        arr_11 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2])) ? (((int) arr_0 [i_2])) : (((((/* implicit */_Bool) -1)) ? (arr_7 [i_2] [i_2]) : (((/* implicit */int) arr_1 [i_2]))))));
        var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2 - 2])) ? (1703264052) : (((/* implicit */int) arr_3 [i_2 - 1]))));
    }
}
