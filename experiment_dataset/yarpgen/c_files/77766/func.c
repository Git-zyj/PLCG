/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77766
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
    var_11 = ((/* implicit */signed char) (_Bool)1);
    var_12 = ((/* implicit */short) var_0);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) 5668809415662930513ULL);
        var_13 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0 - 2]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_14 |= ((/* implicit */unsigned char) var_7);
        arr_8 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_4 [i_1]))))))), (min((12777934658046621103ULL), (((/* implicit */unsigned long long int) arr_0 [i_1]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_15 += ((/* implicit */signed char) 12777934658046621089ULL);
        var_16 = (!(((/* implicit */_Bool) min((var_2), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)81)) > (((/* implicit */int) var_7)))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) arr_11 [i_3]);
        arr_13 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-17))));
    }
    var_18 = ((/* implicit */signed char) var_5);
}
