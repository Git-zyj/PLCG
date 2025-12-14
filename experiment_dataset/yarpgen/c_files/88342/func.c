/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88342
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [(unsigned char)6] = ((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_10 = (-(((/* implicit */int) var_8)));
            var_11 = ((/* implicit */unsigned long long int) ((unsigned int) (+(arr_0 [i_0]))));
            var_12 = ((/* implicit */_Bool) var_8);
        }
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_13 = ((/* implicit */unsigned char) (signed char)127);
            var_14 -= ((/* implicit */_Bool) (short)32767);
            var_15 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (short)32767))))));
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_4 [i_0] [i_0])))) ? (18446744073709551615ULL) : (arr_4 [i_0] [i_2])));
            var_17 = ((/* implicit */unsigned char) (~(arr_4 [i_0] [i_0])));
        }
        arr_7 [i_0] [(unsigned short)20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)1276)) ? (arr_0 [i_0]) : (arr_0 [2])));
        arr_8 [i_0] [i_0] = ((_Bool) arr_1 [i_0]);
        arr_9 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) && ((!(((/* implicit */_Bool) arr_12 [i_3] [i_3])))))) && (((/* implicit */_Bool) min((arr_10 [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1276)) * (((/* implicit */int) (unsigned short)29371))))))))));
        var_18 -= ((/* implicit */unsigned char) arr_11 [i_3] [10ULL]);
    }
    var_19 = ((/* implicit */unsigned long long int) var_1);
    var_20 += ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_3)))) & ((-(((/* implicit */int) var_8))))))), (var_0)));
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_5)))))));
}
