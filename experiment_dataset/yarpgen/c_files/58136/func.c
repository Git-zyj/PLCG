/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58136
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
    var_17 = ((/* implicit */_Bool) ((unsigned short) max((-2147483623), (((/* implicit */int) (_Bool)1)))));
    var_18 = (!(((/* implicit */_Bool) (+(-1872793037498556439LL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                            arr_9 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 2147483640)) ? (-921964415312721381LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                            var_20 ^= ((signed char) ((arr_0 [i_3 - 1] [i_3 + 2]) & (arr_3 [i_3 + 2])));
                        }
                    } 
                } 
                arr_10 [(unsigned short)13] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [i_1] [i_1])) ? (var_2) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 1] [i_0] [i_1])) : (((/* implicit */int) var_1)))))), (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_0)))))));
                arr_11 [i_0] [(unsigned short)12] [i_1] = ((/* implicit */signed char) 921964415312721378LL);
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (short)-1))));
}
