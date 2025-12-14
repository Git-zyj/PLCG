/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99565
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
    var_12 &= var_2;
    var_13 = ((/* implicit */unsigned short) var_5);
    var_14 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [(signed char)17] [(signed char)17] [(signed char)17] [i_2] = ((/* implicit */unsigned short) arr_4 [11] [i_1] [i_1] [i_2]);
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_0 [i_1]))));
                    var_16 ^= ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) arr_1 [i_0]);
        var_18 = ((/* implicit */short) arr_2 [(unsigned short)14] [i_0] [i_0]);
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) arr_6 [(signed char)1] [i_3] [i_3]);
        arr_12 [i_3] = ((/* implicit */unsigned char) arr_0 [i_3]);
        var_20 = ((/* implicit */unsigned short) arr_8 [i_3]);
    }
    var_21 = ((/* implicit */short) var_6);
}
