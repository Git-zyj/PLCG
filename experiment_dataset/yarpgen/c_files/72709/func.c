/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72709
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
    var_10 = ((/* implicit */unsigned char) min((1270401988U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) ((unsigned long long int) var_5));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_12 = ((/* implicit */unsigned char) var_6);
                arr_8 [i_0] = ((/* implicit */unsigned char) (signed char)-119);
            }
            for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                var_13 = ((/* implicit */unsigned short) arr_6 [i_3] [(_Bool)1]);
                arr_12 [i_0] [i_1 - 3] [i_1 - 3] = ((/* implicit */unsigned short) ((arr_7 [i_1 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]) | (((/* implicit */int) (unsigned char)100))));
            }
            arr_13 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)2636)) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) arr_1 [i_1 + 1]))));
        }
    }
}
