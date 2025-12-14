/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86484
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
    var_17 = var_3;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] &= var_10;
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */short) ((3660036021U) > (var_6)));
                                arr_18 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)620))) <= (var_3)))) : ((-(((/* implicit */int) arr_12 [i_1] [i_1] [i_2 - 1] [i_3]))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) == (arr_6 [i_0] [i_0] [i_2] [i_0]))))) ^ (arr_3 [i_0] [i_1]))), (((/* implicit */unsigned long long int) 794636737U))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) ((arr_16 [(unsigned char)4] [i_0]) - (arr_16 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24279))) : (var_11)))) : ((-(((12141193940542399678ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115)))))))))));
    }
}
