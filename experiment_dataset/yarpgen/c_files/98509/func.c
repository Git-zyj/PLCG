/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98509
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_15)))) : (var_14))) << (((var_16) + (1890372973)))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) 1048544);
        var_20 = min((max((arr_2 [(signed char)9] [i_0]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)6764)), (-1443289523)))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        arr_7 [(short)4] [12U] &= ((/* implicit */short) ((max((arr_0 [i_1 - 2]), (((/* implicit */unsigned long long int) arr_6 [i_1 - 2])))) < (((max((((/* implicit */unsigned long long int) var_9)), (var_13))) >> (((min((((/* implicit */int) arr_3 [i_1])), (var_16))) + (1890372977)))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1443289523)), (261719002702685912ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (((((/* implicit */_Bool) (unsigned short)30934)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)763))) : (8694101094812143337ULL)))));
    }
    var_22 = ((/* implicit */short) var_1);
}
