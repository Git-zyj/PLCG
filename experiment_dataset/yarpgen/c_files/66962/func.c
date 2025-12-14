/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66962
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
    var_16 = ((/* implicit */long long int) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [(short)5] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-14814))))), (((var_10) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) arr_3 [2ULL] [(unsigned short)4] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_2 [i_2] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((var_15) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14814))) : (var_8)))))) / (2411143845134842057ULL)));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_2]);
                    arr_11 [i_2] [i_0] = ((/* implicit */_Bool) var_12);
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_2);
                }
            } 
        } 
    } 
}
