/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87857
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1 + 2] [i_2] [i_2] = ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2] [i_0] [i_0])) ? (arr_5 [i_2 - 1] [i_2] [i_2] [i_2]) : (arr_5 [i_2 + 1] [(signed char)10] [i_2] [i_2]));
                    var_14 -= ((/* implicit */unsigned char) ((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 3330233556U))))));
                }
            } 
        } 
        var_15 &= ((/* implicit */unsigned long long int) ((arr_0 [i_0 - 1] [i_0 - 1]) <= (arr_0 [i_0 - 1] [i_0 + 1])));
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
        arr_9 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) 3330233556U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)0))));
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            for (unsigned char i_4 = 2; i_4 < 12; i_4 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((unsigned long long int) arr_11 [i_0 - 1]));
                    var_17 = ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) var_9)));
                    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [3U] [i_0] [i_0 + 1])) ? (arr_6 [i_0 - 1] [i_0] [i_0] [i_0 + 1]) : (((/* implicit */int) arr_2 [i_0]))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_13))));
}
