/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81886
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [(unsigned short)5] = ((/* implicit */_Bool) arr_1 [i_0]);
        var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 12272129171336288268ULL)) && (((/* implicit */_Bool) 930642358785522485LL))))), (((arr_0 [i_0]) & (-1465998163))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_11 ^= ((/* implicit */signed char) (-((+(((/* implicit */int) ((((/* implicit */unsigned int) -1958888072)) != (arr_1 [i_1]))))))));
        arr_7 [i_1] = ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (arr_5 [7U] [i_1]))) > (((/* implicit */unsigned long long int) arr_0 [i_1])))) ? (((int) var_4)) : (((((/* implicit */_Bool) (+(1958888094)))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) > (var_5)))) : (((/* implicit */int) arr_6 [15U] [i_1])))));
    }
    var_12 = ((/* implicit */short) var_3);
    var_13 = ((/* implicit */unsigned long long int) (-(var_2)));
    var_14 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) ((-712559821) <= (((/* implicit */int) var_0))))))));
    var_15 = ((/* implicit */_Bool) var_1);
}
