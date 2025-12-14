/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/586
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_14 += ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_1)))))) * (((/* implicit */int) ((short) 2146959360)))));
                                arr_14 [i_3] [i_3] [i_2] [i_3] [i_4] = ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) != (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_12 [i_4])))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */long long int) -1781531477);
            }
        } 
    } 
    var_15 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned char)0)), (var_8)));
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        for (short i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            for (int i_7 = 3; i_7 < 12; i_7 += 4) 
            {
                {
                    arr_23 [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (~(2494283506787975128ULL)))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) (_Bool)1)) - (((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) arr_9 [i_5])) : (((/* implicit */int) var_4))))))));
                    arr_24 [i_5] [i_7] [1ULL] [i_5] = var_4;
                    arr_25 [i_5] [i_5] [i_7] = ((/* implicit */signed char) (short)-25468);
                }
            } 
        } 
    } 
}
