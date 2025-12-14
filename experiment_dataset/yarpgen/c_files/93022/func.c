/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93022
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((int) ((short) arr_1 [5ULL] [i_0])));
        var_13 -= ((/* implicit */short) ((unsigned long long int) ((int) var_2)));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_14 = ((/* implicit */short) ((unsigned long long int) ((short) ((long long int) var_0))));
        var_15 = ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) ((unsigned long long int) var_11))));
    }
    /* vectorizable */
    for (short i_2 = 3; i_2 < 12; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((_Bool) ((unsigned long long int) arr_7 [10])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (short i_4 = 1; i_4 < 13; i_4 += 2) 
            {
                {
                    arr_13 [(unsigned char)12] [i_2] [i_4 + 1] [i_4] = ((short) ((int) (_Bool)1));
                    var_17 -= ((/* implicit */signed char) ((short) ((unsigned char) arr_9 [i_3])));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned int) ((long long int) var_9))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned short) ((short) ((unsigned char) ((short) var_8))));
}
