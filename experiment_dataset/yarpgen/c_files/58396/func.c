/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58396
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (signed char)112)), (max((min((2933259617U), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)41490)) >= (((/* implicit */int) var_3)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0 + 2] [i_0 + 2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0 + 4]))));
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) var_0);
        arr_9 [i_1] = ((/* implicit */short) var_3);
        arr_10 [i_1] = ((/* implicit */long long int) ((_Bool) var_4));
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            arr_13 [i_1] [i_1] [(signed char)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1] [i_2 - 1])) ? (((/* implicit */int) arr_0 [i_2 + 1] [i_2 - 1])) : (var_5)));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                arr_18 [i_2 + 2] [i_2 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 2])) || (((/* implicit */_Bool) var_4))));
                arr_19 [i_1] [i_2 + 2] [i_3] = ((/* implicit */unsigned short) 3496089910U);
                /* LoopSeq 1 */
                for (unsigned int i_4 = 1; i_4 < 19; i_4 += 2) 
                {
                    arr_22 [(signed char)8] [0U] [i_1] = ((/* implicit */unsigned long long int) var_2);
                    arr_23 [i_1] [i_2 + 2] [i_2 + 2] [i_4 - 1] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) var_0)));
                }
                arr_24 [i_1] [i_1] [18U] = ((/* implicit */unsigned char) arr_15 [i_1] [i_3] [(unsigned char)7] [i_1]);
            }
            for (unsigned short i_5 = 3; i_5 < 18; i_5 += 3) 
            {
                arr_28 [i_1] [(unsigned char)3] [i_5 + 1] [i_5 - 2] = ((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */int) arr_14 [i_2] [i_2 - 1] [i_2])) + (2147483647))) >> (((var_8) + (915165237))))));
                arr_29 [i_1] [i_2 + 1] [i_5 + 2] [i_1] = ((/* implicit */signed char) (unsigned short)41490);
                arr_30 [i_1] [i_2 + 2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1])) : (var_6)));
                arr_31 [i_1] [i_1] [13U] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) arr_0 [i_2 + 1] [i_2 + 1])) : (((((/* implicit */_Bool) 3640684596U)) ? (((/* implicit */int) (unsigned char)90)) : (-1160767830)))));
            }
            arr_32 [i_1] [(signed char)15] = ((/* implicit */unsigned int) var_0);
        }
    }
}
