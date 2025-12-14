/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71673
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
    var_13 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_14 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
        var_15 += ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0 + 2])) | (((/* implicit */int) (!(((/* implicit */_Bool) (short)-8192)))))));
        arr_4 [(short)6] &= ((/* implicit */unsigned long long int) arr_1 [i_0 - 3]);
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (-((+(((/* implicit */int) arr_3 [i_0] [i_0 + 1])))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((min((((/* implicit */short) var_1)), (var_8))), (max(((short)-8199), ((short)-8164)))))) < (max((((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) var_10))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) (short)8165)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_6 [i_1 + 1]))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */int) min((arr_0 [i_1] [i_1]), (var_10)))) / (((/* implicit */int) var_5))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) arr_3 [i_1 - 1] [i_2]);
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1] [i_1 - 2])) & ((~(((/* implicit */int) var_5))))));
        }
        var_20 = ((unsigned long long int) max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1])));
    }
}
