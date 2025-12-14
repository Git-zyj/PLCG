/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82291
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (3046578348U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
        arr_3 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-5))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (arr_2 [i_0 + 1])))));
        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)-32753)) : (((/* implicit */int) arr_0 [i_0 + 1])))))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_16 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (4213751114349401434ULL)))));
        var_17 = ((/* implicit */signed char) (+((+(arr_6 [i_1] [i_1])))));
        var_18 += ((/* implicit */long long int) ((signed char) max(((~(arr_6 [i_1] [16ULL]))), (((/* implicit */long long int) arr_7 [7])))));
    }
    var_19 = ((/* implicit */unsigned short) var_9);
    var_20 = ((/* implicit */long long int) var_8);
}
