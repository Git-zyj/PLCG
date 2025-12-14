/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76078
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) arr_4 [i_1]);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned char) 0U));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 2] [(unsigned char)10] [i_2 + 2])) ? (((/* implicit */int) arr_3 [i_2 + 2] [(unsigned short)0] [i_2])) : (((/* implicit */int) arr_3 [i_2 + 2] [(unsigned short)14] [(short)10]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_2 + 2] [12] [i_2]), (((/* implicit */unsigned short) (unsigned char)226)))))) : (((long long int) arr_3 [i_2 + 2] [(unsigned short)10] [(unsigned short)10])))))));
        arr_9 [(unsigned short)0] [i_2 - 1] &= ((/* implicit */_Bool) ((((_Bool) arr_2 [i_2 + 2])) ? (((/* implicit */int) ((short) arr_2 [i_2 - 1]))) : (((/* implicit */int) ((unsigned short) arr_3 [i_2 + 2] [(unsigned char)12] [i_2 + 1])))));
        var_20 = arr_2 [i_2];
    }
    var_21 &= ((/* implicit */short) ((unsigned short) ((short) ((unsigned long long int) var_14))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_18))));
    var_23 &= ((/* implicit */unsigned short) ((short) var_4));
}
