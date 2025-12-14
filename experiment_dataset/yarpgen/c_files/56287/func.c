/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56287
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
    var_17 = ((var_2) + (min((var_1), (((/* implicit */unsigned long long int) var_9)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        arr_2 [i_0] = 13783204374964316496ULL;
        var_18 = ((/* implicit */unsigned int) (~(arr_1 [i_0] [i_0])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 *= ((/* implicit */_Bool) ((var_2) + (min((arr_0 [i_1]), (((/* implicit */unsigned long long int) var_3))))));
        var_20 = ((/* implicit */int) ((max((max((arr_0 [i_1]), (13860664025755905851ULL))), (arr_4 [i_1]))) / ((~(min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_4 [5ULL])))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) arr_1 [i_1] [i_1]))), ((-(((/* implicit */int) (_Bool)1))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) var_0);
    }
    var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2))) < (((var_16) ? (2097151ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))) % (max((((/* implicit */unsigned int) min(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))), ((~(3950916613U))))));
}
