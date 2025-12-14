/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62168
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
    var_18 |= ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) -1608891542);
        var_20 ^= ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned short)18959)) + (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* LoopNest 3 */
    for (long long int i_1 = 4; i_1 < 24; i_1 += 1) 
    {
        for (int i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            for (int i_3 = 3; i_3 < 23; i_3 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) arr_3 [i_3])), (var_12)))));
                    var_22 -= ((/* implicit */unsigned char) arr_4 [i_1]);
                    arr_9 [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((int) arr_4 [i_2]));
                    arr_10 [i_1] = ((/* implicit */int) min(((unsigned short)61145), (arr_8 [i_1 - 4] [(unsigned char)2] [i_3])));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_11);
    var_24 = ((/* implicit */unsigned long long int) var_13);
}
