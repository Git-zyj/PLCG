/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73784
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
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_19 += ((/* implicit */long long int) (_Bool)1);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_1] [i_1] [(unsigned short)5] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_0 + 1])), (var_15))))));
                                var_20 = ((/* implicit */short) ((signed char) arr_12 [8ULL] [4ULL] [i_3] [i_2] [i_2] [(unsigned short)1] [i_0 - 3]));
                                var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) -441885071)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) var_12)))) : (((((/* implicit */int) arr_13 [i_4] [15ULL] [i_2] [(_Bool)1] [i_2] [i_2])) / (((/* implicit */int) var_16))))))) : (var_7)));
                            }
                        } 
                    } 
                    arr_15 [(unsigned short)0] [(unsigned short)0] [(short)11] |= ((/* implicit */long long int) max((((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_2])), (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (max((-241546630), (((/* implicit */int) arr_0 [i_0] [i_2])))) : (((/* implicit */int) var_18))))));
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [4LL] [2]))) ? (max((arr_12 [(_Bool)1] [i_0 - 1] [i_0 - 1] [i_0] [(_Bool)1] [(_Bool)1] [i_0 - 1]), (arr_12 [i_0 + 1] [i_0 - 4] [10ULL] [i_0 - 4] [i_0 - 3] [i_0] [i_0]))) : (arr_12 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0])));
        arr_17 [i_0 - 4] = ((/* implicit */unsigned char) ((-441885063) ^ (((/* implicit */int) (_Bool)1))));
    }
    var_22 |= ((/* implicit */int) var_4);
    var_23 |= (~(min((((/* implicit */int) ((unsigned short) var_11))), (var_6))));
}
