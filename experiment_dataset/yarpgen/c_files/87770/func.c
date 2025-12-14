/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87770
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
    var_15 = ((/* implicit */unsigned char) ((unsigned int) var_7));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((long long int) ((unsigned int) arr_3 [i_0] [i_1] [i_1])));
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((_Bool) ((unsigned long long int) var_5))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 23; i_2 += 1) 
    {
        for (unsigned int i_3 = 3; i_3 < 21; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (int i_6 = 2; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_20 [i_6] [i_2 - 1] [i_2 - 1] = ((/* implicit */int) ((unsigned int) ((int) arr_9 [i_6 - 2])));
                                var_17 = ((unsigned int) ((unsigned long long int) var_6));
                                var_18 = ((/* implicit */int) ((long long int) ((unsigned int) arr_16 [i_6 + 2] [i_4 - 1] [i_3 - 3] [i_2 - 1])));
                                var_19 *= ((/* implicit */unsigned char) ((_Bool) ((unsigned char) ((unsigned int) var_14))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((unsigned int) ((unsigned long long int) var_7))))));
                /* LoopNest 3 */
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        for (long long int i_9 = 2; i_9 < 22; i_9 += 4) 
                        {
                            {
                                arr_28 [i_9] [i_9] [i_2] [i_7] [i_2] [i_2] = ((/* implicit */int) ((unsigned int) ((int) arr_24 [i_7] [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                                var_21 = ((_Bool) ((short) var_13));
                                var_22 -= ((/* implicit */unsigned short) ((long long int) ((unsigned int) (unsigned short)63413)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned long long int) var_9)))));
}
