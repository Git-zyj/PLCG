/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78429
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) var_2)) : (var_5))))));
    var_13 = ((/* implicit */long long int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) ((unsigned int) arr_4 [i_0] [i_0])));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned short) arr_10 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0]);
                        var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 - 1]);
                        arr_12 [i_0] [(unsigned short)5] [i_2] [(unsigned short)5] [i_2] = ((/* implicit */signed char) ((long long int) arr_8 [i_2] [i_2] [i_2] [i_2 + 1] [i_0] [i_3]));
                        arr_13 [i_0] [i_1] [i_2 + 1] [i_3 - 1] = arr_9 [i_0] [i_0] [i_1] [i_2 + 1] [i_2] [i_3 + 2];
                    }
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [14LL] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0 - 2] [i_1] [i_0 - 2] [i_0 - 2])))))));
                            var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_4] [i_1]))));
                        }
                        arr_20 [i_0] [i_1] [i_0] [i_4] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [3U] [3U] [i_2] [i_4] [i_0 + 1] [i_2])) < (((/* implicit */int) arr_16 [i_0 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 1]))));
                        var_18 = ((/* implicit */unsigned short) (((-(arr_10 [i_0] [i_1] [i_1] [i_2] [i_1]))) >> ((((+(((/* implicit */int) (signed char)-4)))) + (30)))));
                    }
                    var_19 = ((/* implicit */unsigned short) ((unsigned long long int) arr_11 [i_0] [i_1] [i_2]));
                    var_20 = ((/* implicit */unsigned long long int) ((arr_9 [i_2 + 2] [i_1] [i_2 + 1] [i_1] [i_0 - 2] [i_0]) % (arr_9 [i_2 + 3] [i_1] [i_2] [i_2] [i_0 - 1] [i_2])));
                    arr_21 [i_0] [i_0] [i_2] = ((/* implicit */signed char) arr_15 [i_0 + 1] [i_0] [i_2] [i_2 + 2]);
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */long long int) ((signed char) arr_6 [i_0 - 1] [i_0]));
    }
    /* vectorizable */
    for (long long int i_6 = 2; i_6 < 15; i_6 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) arr_8 [i_6 - 1] [i_6 - 2] [i_6 - 2] [i_6] [i_6] [i_6 - 1]);
        /* LoopSeq 2 */
        for (unsigned short i_7 = 1; i_7 < 12; i_7 += 2) /* same iter space */
        {
            var_22 += ((/* implicit */signed char) arr_26 [i_7 + 4] [i_7 + 3] [i_7 + 1]);
            arr_27 [i_6] [i_6] = ((/* implicit */unsigned short) ((arr_1 [i_6] [i_6 + 1]) / (((/* implicit */long long int) ((arr_23 [i_6]) - (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
        }
        for (unsigned short i_8 = 1; i_8 < 12; i_8 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) max((var_23), (((signed char) arr_8 [i_6] [i_6 - 1] [i_6 - 1] [i_6] [6U] [i_6]))));
            var_24 |= ((/* implicit */signed char) arr_17 [5LL] [i_8] [i_8 + 3] [i_8 + 4] [i_8 + 3]);
        }
    }
}
