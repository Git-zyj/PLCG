/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65376
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned int) ((arr_2 [i_1 + 1] [i_1 - 3]) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 2]))));
            var_20 = ((/* implicit */_Bool) (((_Bool)1) ? (((var_13) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 2])) : (1919349910))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((/* implicit */int) (_Bool)1)))))));
            var_21 += ((/* implicit */unsigned int) arr_0 [i_0] [i_1 - 3]);
        }
        for (unsigned char i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1])) >> (((((/* implicit */int) arr_3 [i_2] [i_2 + 1] [i_0])) - (13811))))))));
            arr_7 [i_2] [i_2] = ((/* implicit */unsigned int) arr_2 [i_0] [i_2]);
            var_23 += ((/* implicit */int) var_17);
        }
        arr_8 [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]);
        /* LoopSeq 2 */
        for (signed char i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                arr_14 [(_Bool)1] [i_3] = var_14;
                /* LoopSeq 2 */
                for (unsigned short i_5 = 3; i_5 < 7; i_5 += 2) 
                {
                    arr_18 [i_0] [i_0] [i_3] [8LL] [i_5] [6LL] = ((/* implicit */long long int) arr_3 [i_5 + 1] [i_3 - 2] [i_0]);
                    var_24 = ((/* implicit */unsigned char) (unsigned short)65520);
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_0] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) 1919349917);
                        arr_23 [i_6] [0LL] [i_4] [i_5 + 1] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 1919349917))) ? (((/* implicit */int) arr_9 [2ULL] [i_6])) : (((/* implicit */int) arr_12 [i_5] [i_4] [i_3] [i_0]))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        arr_27 [i_0] [i_3 - 2] [(unsigned char)6] [i_5] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3 - 1] [i_3 - 2] [i_5] [(unsigned short)2] [i_5 + 1] [i_5] [i_7])) ? (arr_5 [i_3 - 2] [i_3 + 1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 - 1] [i_3 + 1])))));
                        var_25 = ((/* implicit */unsigned short) var_4);
                    }
                }
                for (unsigned short i_8 = 3; i_8 < 9; i_8 += 4) 
                {
                    arr_30 [i_8 - 2] [i_4] [i_3 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_8] [i_0])) ? (((long long int) var_15)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_3 - 2])) ? (((/* implicit */unsigned long long int) arr_26 [i_8 - 3] [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_0])) : (((unsigned long long int) arr_12 [i_0] [i_3] [i_4] [i_8]))));
                    var_27 += ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))));
                    arr_31 [(_Bool)1] [i_3] [(_Bool)1] [i_8] = ((/* implicit */unsigned short) arr_17 [i_0] [1ULL] [i_4] [i_4] [i_8] [i_8]);
                }
            }
            var_28 -= ((/* implicit */unsigned short) arr_2 [i_0] [i_3 + 1]);
            var_29 = ((/* implicit */unsigned long long int) ((long long int) arr_19 [i_0] [i_3] [i_0] [i_3] [i_3 - 2] [i_3 - 2] [i_0]));
        }
        for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_9])) + (((/* implicit */int) arr_19 [i_0] [i_0] [(_Bool)1] [i_9] [i_9] [i_9] [i_9]))));
            var_31 += ((/* implicit */long long int) ((arr_17 [i_9] [i_9] [i_0] [(unsigned short)2] [2] [i_0]) >= ((+(((/* implicit */int) var_17))))));
        }
    }
    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((short)1020), (var_0))))))) >> (((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) + (((/* implicit */int) var_0))))) / (((var_8) << (((/* implicit */int) (_Bool)0)))))))))));
    var_33 = ((/* implicit */unsigned int) 2136230817);
}
