/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85948
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
    var_14 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_1] &= ((/* implicit */signed char) 632541020);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_4 + 3] = ((/* implicit */signed char) -632541020);
                                var_15 |= ((/* implicit */unsigned short) 6086993769137185055LL);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 404818834U);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (signed char)-106))));
                }
                var_17 ^= ((/* implicit */unsigned int) 632540992);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned short i_6 = 2; i_6 < 20; i_6 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_0] [i_5] [i_1] = ((/* implicit */unsigned int) -632541040);
                            arr_22 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) (signed char)73);
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) 2454363067U))));
                        }
                    } 
                } 
            }
        } 
    } 
}
