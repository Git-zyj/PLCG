/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82917
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
    var_10 = ((/* implicit */unsigned int) var_3);
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) var_8))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_12 -= ((unsigned int) (((!(((/* implicit */_Bool) var_1)))) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)16257)) <= (((/* implicit */int) (unsigned short)49273))))))));
        var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_1)), (arr_1 [i_0])));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) 4294967295U)))))));
        arr_2 [i_0] = ((/* implicit */int) (!(arr_0 [i_0] [i_0])));
        var_15 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    var_16 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max(((unsigned short)16263), (((/* implicit */unsigned short) var_0)))))))));
}
