/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/836
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    var_10 = ((/* implicit */unsigned int) 17073846989440465190ULL);
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_11 |= ((/* implicit */unsigned char) 6462706919171252577LL);
                        var_12 = ((/* implicit */int) 2411615180U);
                    }
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned int) 17073846989440465190ULL);
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */long long int) (unsigned char)22);
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 1490592883);
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) 17073846989440465190ULL))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned int) -6713877645944956256LL);
                            var_17 += ((/* implicit */unsigned char) 1798932267U);
                        }
                        var_18 = ((/* implicit */signed char) 1798932267U);
                    }
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), ((_Bool)1)));
                            arr_24 [i_0] = ((/* implicit */signed char) 18446744073709551615ULL);
                            var_20 = ((/* implicit */unsigned short) (signed char)-94);
                        }
                        var_21 = ((/* implicit */unsigned int) (signed char)23);
                        var_22 = ((/* implicit */unsigned short) (_Bool)1);
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            arr_27 [i_0] = (signed char)-24;
                            var_23 = ((/* implicit */unsigned short) 18446744073709551615ULL);
                        }
                    }
                }
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) 14249430359575235632ULL))));
                arr_28 [i_0] [i_1 - 2] [i_0] = (unsigned short)18;
                var_25 = ((/* implicit */_Bool) (signed char)70);
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) 18446744073709551601ULL);
}
