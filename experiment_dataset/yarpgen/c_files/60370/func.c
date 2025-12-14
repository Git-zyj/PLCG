/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60370
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                var_11 = ((/* implicit */unsigned int) (unsigned short)6601);
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_1]);
            }
            for (unsigned int i_3 = 2; i_3 < 18; i_3 += 3) 
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (arr_9 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_0] [i_1] [i_1 - 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) % (var_2)))));
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_3])) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_0] [i_0] [i_0])) : (1830402678)));
                var_14 = ((/* implicit */unsigned char) (-(arr_3 [i_3] [i_1] [i_0])));
            }
        }
        var_15 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1175931417)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (arr_9 [i_0] [i_0])))) + (((((/* implicit */_Bool) var_8)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned int) (-((-(arr_9 [i_4] [i_4])))));
        var_16 = ((/* implicit */signed char) ((long long int) ((signed char) max((((/* implicit */unsigned int) (signed char)-12)), (arr_11 [i_4] [i_4])))));
    }
    var_17 = ((/* implicit */short) ((unsigned char) var_0));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_4)) & (var_7)));
}
