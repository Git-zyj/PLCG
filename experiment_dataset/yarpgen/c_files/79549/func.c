/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79549
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
    for (short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) : (((/* implicit */int) (unsigned short)65530))))), (((/* implicit */long long int) ((unsigned char) max((((/* implicit */short) var_14)), (arr_0 [i_0] [i_1 + 1]))))))))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_1))));
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_2 [i_1] [i_2])) : (var_0)))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [(short)19] [i_1] [i_2])) < (arr_2 [(unsigned char)20] [i_2])))) : (((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (unsigned short)63186)) : (((/* implicit */int) (unsigned char)191))))))) ? (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */long long int) 382988102)) : (2507793267676175379LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_0 - 2] [i_0 + 2])) : (((/* implicit */int) var_5))))));
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_15)) : (var_0))))) >> (((((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((var_10) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21264)))))))) - (6695488849612965412ULL)))));
}
