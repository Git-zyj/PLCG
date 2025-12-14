/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55062
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned char)8] [i_0])) ? (((((/* implicit */unsigned long long int) arr_4 [i_0] [9])) - (((arr_5 [i_2] [i_1] [i_0 - 1] [i_0]) / (arr_5 [i_0] [i_0] [i_0] [i_0 + 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21)))));
                    var_16 = ((/* implicit */unsigned char) (~((~(((arr_4 [i_2] [i_1]) >> (((var_6) - (9909010149345824018ULL)))))))));
                }
            } 
        } 
        var_17 *= ((/* implicit */signed char) ((int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)71))));
        var_18 = ((/* implicit */unsigned long long int) (short)4441);
    }
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        arr_10 [i_3] &= ((/* implicit */short) ((unsigned int) arr_9 [i_3]));
        arr_11 [i_3] [i_3] = ((/* implicit */long long int) var_9);
    }
}
