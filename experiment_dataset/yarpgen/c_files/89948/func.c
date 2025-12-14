/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89948
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
    var_15 -= ((/* implicit */int) var_5);
    var_16 = var_5;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((((/* implicit */int) var_11)) | (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_1))))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            var_17 -= ((/* implicit */short) ((((17653315640412177745ULL) | (18446744073709551609ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))))));
            var_18 -= ((/* implicit */unsigned short) ((signed char) var_2));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_8 [i_0] [i_0] [i_0] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) * (285978576338026496ULL)));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) arr_1 [i_0] [i_2]))))) ? (((((/* implicit */int) arr_5 [i_0] [i_2] [i_2])) ^ (((/* implicit */int) arr_1 [i_0] [i_2])))) : (((((/* implicit */int) arr_1 [i_2] [i_2])) ^ (((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))));
            var_20 &= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_6 [i_0] [i_0])) | (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2])) >= (((/* implicit */int) var_5))))))));
        }
    }
}
