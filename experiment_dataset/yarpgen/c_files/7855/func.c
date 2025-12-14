/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7855
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))));
        var_17 = ((/* implicit */_Bool) max((var_17), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)2])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */short) arr_4 [i_1]);
        var_18 = ((/* implicit */_Bool) ((((_Bool) 18446744073709551601ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : ((+(var_11)))));
        var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5669)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_1]))))) ? ((~(((/* implicit */int) (unsigned char)80)))) : (((/* implicit */int) (_Bool)1))))));
    }
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((var_7) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)24576)))))), (((/* implicit */int) (_Bool)1)))))));
    var_21 = ((/* implicit */unsigned char) var_13);
    var_22 = ((/* implicit */unsigned short) min(((_Bool)1), (var_12)));
}
