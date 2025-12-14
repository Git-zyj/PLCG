/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61863
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] [i_0 - 1] = ((((((/* implicit */_Bool) arr_3 [i_2] [i_2 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_2] [i_2 - 1] [i_0 - 2])) : (((/* implicit */int) (short)18064)))) | (((/* implicit */int) ((short) arr_3 [(short)7] [i_2 + 3] [i_0 - 1]))));
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((/* implicit */int) ((unsigned char) ((min((4095), (((/* implicit */int) var_12)))) ^ (arr_5 [i_1 - 2] [i_1] [i_0 + 1]))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) (unsigned char)110)) : (arr_5 [i_2 + 2] [i_1 - 1] [i_0 - 2])))) ? (((/* implicit */unsigned long long int) max((4095), (arr_2 [i_0 - 3])))) : (((unsigned long long int) var_19))));
                    var_21 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) min((var_6), (var_7)))) ? (((/* implicit */int) ((short) (short)29086))) : ((~(((/* implicit */int) var_7)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) (short)-2584);
}
