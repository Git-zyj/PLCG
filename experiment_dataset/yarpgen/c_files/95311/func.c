/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95311
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
    var_10 |= ((/* implicit */long long int) ((short) ((signed char) ((unsigned int) 0LL))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((unsigned int) ((unsigned long long int) var_2))))));
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((unsigned int) ((long long int) arr_1 [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */long long int) ((unsigned int) ((long long int) ((signed char) (unsigned char)31))));
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((int) ((short) ((unsigned int) arr_2 [i_1])))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 4; i_3 < 13; i_3 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((short) ((signed char) ((unsigned int) 0U)))))));
                    arr_11 [i_2] = ((/* implicit */short) ((unsigned long long int) ((unsigned char) ((unsigned long long int) var_8))));
                    arr_12 [i_2] [i_2] = ((/* implicit */signed char) ((long long int) 0U));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned long long int) ((signed char) ((signed char) ((int) 12084419760503599172ULL))));
    }
}
