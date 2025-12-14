/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74647
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
    var_13 = ((/* implicit */unsigned int) ((short) var_3));
    var_14 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) arr_3 [i_0 + 1]);
                    var_15 ^= ((/* implicit */short) max((((((/* implicit */_Bool) max((arr_3 [i_1]), (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 - 1] [i_0])) ? (arr_2 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))))))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_0] [i_2]))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 1] [i_1] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((unsigned int) arr_1 [i_0] [i_0 + 1]))));
                }
            } 
        } 
    } 
}
