/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66149
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
    var_13 |= ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = 3636987422U;
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_14 += ((/* implicit */unsigned short) (signed char)-124);
                                arr_13 [i_4] [i_3] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                                var_15 = ((/* implicit */_Bool) max((var_15), ((!(((((/* implicit */int) var_9)) != (((/* implicit */int) arr_9 [i_0] [i_1] [i_4 - 1] [i_3] [i_4] [i_0]))))))));
                            }
                        } 
                    } 
                    var_16 *= arr_0 [i_0] [i_1];
                    arr_14 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)-19636)) ? (((/* implicit */int) var_6)) : (-968978251)))));
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        arr_18 [i_5] = ((/* implicit */short) ((unsigned long long int) (unsigned short)24799));
        arr_19 [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5]))));
        var_17 &= ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) arr_16 [i_5] [i_5]))))));
    }
}
