/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55800
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1242101622)), (14356951304990988206ULL)))) ? (((/* implicit */unsigned long long int) ((max((1242101621), (-1242101635))) | ((~(var_0)))))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((1242101621) + (((/* implicit */int) (unsigned short)57344))))) : (var_5)))));
    var_11 = ((/* implicit */unsigned long long int) var_3);
    var_12 = ((/* implicit */int) 2339384045U);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_0] = (+(max((((/* implicit */int) ((unsigned short) (_Bool)0))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 2] [(unsigned short)3])) ? (((/* implicit */int) var_1)) : (0))))));
            var_13 = arr_5 [i_0] [i_0 + 1] [(unsigned short)4];
            var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 + 1])) + (1242101644)))) ? ((~(((/* implicit */int) (unsigned short)35447)))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)0)))));
            var_15 = ((/* implicit */short) (~(max((((/* implicit */int) (unsigned short)55478)), (arr_1 [i_1 + 1])))));
        }
        for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [10] [i_2])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_1 [i_0 + 1])) : (var_2))) : (((unsigned int) arr_3 [i_0] [i_0 + 1]))));
            arr_10 [i_2] [i_2] = min((1242101622), ((~(((/* implicit */int) arr_9 [i_0 + 1])))));
        }
        var_17 = ((/* implicit */unsigned short) var_8);
    }
    var_18 = 24576;
}
