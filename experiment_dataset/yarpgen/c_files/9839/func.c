/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9839
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_3 [5LL] [6U] = var_11;
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1528597251310947475LL))));
        arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(arr_1 [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_6 [4] = ((/* implicit */unsigned int) max((max((((/* implicit */int) (short)-32767)), (min((var_11), (((/* implicit */int) (unsigned short)1023)))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) 1528597251310947475LL)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_11 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)36007)) * (((/* implicit */int) arr_10 [i_1] [i_1]))))) ? (((/* implicit */int) max((arr_10 [i_1] [i_1]), (arr_10 [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_1]))))));
        var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (2147483647) : (((/* implicit */int) arr_7 [i_1] [i_1])))) / (((/* implicit */int) max((arr_9 [i_1] [i_1]), (arr_9 [i_1] [i_1]))))));
        arr_12 [i_1] = ((/* implicit */short) arr_7 [i_1] [i_1]);
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) | ((~(((int) var_14))))));
    var_21 ^= ((/* implicit */unsigned long long int) var_12);
}
