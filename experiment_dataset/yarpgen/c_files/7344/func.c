/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7344
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [(unsigned char)12] [i_0] = ((/* implicit */_Bool) min((6661440420955074800LL), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_16 &= ((((((/* implicit */_Bool) 1534092048)) ? (((/* implicit */int) (unsigned char)43)) : (-1534092061))) << (((((unsigned int) arr_0 [i_0] [(signed char)4])) - (149U))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) -1534092048);
        arr_7 [i_1] = arr_5 [i_1 + 1];
        var_17 = (-(max((arr_4 [i_1 + 1]), (arr_4 [i_1 + 1]))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 4; i_2 < 13; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */short) arr_5 [i_2 - 3]);
        var_18 += ((/* implicit */short) arr_0 [10U] [10U]);
    }
    var_19 = ((/* implicit */unsigned short) var_9);
}
