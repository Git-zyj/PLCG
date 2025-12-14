/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61921
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((_Bool) ((long long int) -7755409842241691496LL))))));
        arr_2 [11LL] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_17 = ((/* implicit */long long int) ((((((/* implicit */int) var_3)) << (((((((/* implicit */_Bool) var_15)) ? (var_8) : (7755409842241691493LL))) - (47966807285799662LL))))) * (((/* implicit */int) ((short) arr_0 [i_0])))));
        var_18 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [(short)12]))) : (arr_0 [5ULL])))) ? (((((((var_10) + (9223372036854775807LL))) >> (((var_6) - (10141768948383299251ULL))))) >> (((arr_0 [i_0]) - (487526922617211245ULL))))) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((arr_0 [i_1 + 2]) << (((var_0) + (3061998447843950828LL)))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1 + 2])) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 2]))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (var_3)));
            var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */long long int) arr_9 [i_1 + 1] [i_1 + 1] [(unsigned short)5])) : (arr_5 [i_1] [i_1 + 1])))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_1] [i_2])) + (2147483647))) << (((15ULL) - (15ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) : (var_8)));
        }
    }
    var_23 = var_11;
    /* LoopSeq 1 */
    for (short i_3 = 1; i_3 < 7; i_3 += 1) 
    {
        var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_9 [i_3] [i_3] [i_3 + 3])) / (-7755409842241691485LL)));
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (arr_10 [i_3 + 3])))) ? (min((arr_10 [i_3 + 3]), (arr_10 [i_3 + 3]))) : (arr_10 [i_3 - 1]))))));
        var_26 = ((/* implicit */unsigned short) -7755409842241691486LL);
        var_27 -= ((/* implicit */unsigned int) min((var_4), (var_4)));
        arr_13 [i_3 + 3] = ((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)1] [i_3]);
    }
}
