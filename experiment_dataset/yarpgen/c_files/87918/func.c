/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87918
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
    var_20 = var_3;
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_7))));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9)))) ? (var_18) : (((/* implicit */int) (!(((/* implicit */_Bool) 7430835334656807941ULL)))))))), (min((((((/* implicit */_Bool) (signed char)-71)) ? (11015908739052743675ULL) : (((/* implicit */unsigned long long int) 207776789)))), (7430835334656807941ULL))))))));
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_11))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(12004499067986133569ULL))), (((arr_2 [i_0 + 1]) + (var_17)))))) ? (min((arr_2 [i_0 + 2]), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_13)) <= (-1578002168)))) < (((((/* implicit */_Bool) -1567096085)) ? (-2066954672) : (-2066954672)))))))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (arr_1 [i_0 + 2])));
    }
}
