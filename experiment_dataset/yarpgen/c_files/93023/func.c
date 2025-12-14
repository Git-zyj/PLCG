/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93023
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & ((~(arr_4 [i_0])))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_3 - 2] [i_3]))))) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_3 - 2] [(signed char)10])) : (((/* implicit */int) min((arr_9 [i_3 + 1] [i_1] [i_3 - 1] [i_0]), (((/* implicit */unsigned short) var_11)))))));
                        arr_12 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_3] [8ULL]))));
                        arr_13 [17U] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!((_Bool)1)))) >> (((4294967295U) - (4294967268U)))));
                    }
                    var_14 *= ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) arr_10 [i_0] [14] [i_2] [i_2])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_0);
    var_16 -= ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
}
