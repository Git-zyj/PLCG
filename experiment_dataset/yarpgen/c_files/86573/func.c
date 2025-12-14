/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86573
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) (signed char)94);
                                var_14 = ((/* implicit */unsigned short) (signed char)110);
                                arr_13 [i_0] [i_1] [i_1] [i_0] [i_1] [i_4] = 2145386496U;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) 5943304225273374652ULL);
                                var_16 += ((/* implicit */unsigned short) 5943304225273374666ULL);
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)-95);
                                var_17 = ((/* implicit */unsigned long long int) (unsigned char)129);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        arr_23 [i_0] = ((/* implicit */unsigned long long int) (signed char)-94);
                        var_18 -= (unsigned char)240;
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 1149947787304430914LL))));
                            var_20 = ((/* implicit */unsigned int) (signed char)-95);
                            var_21 &= ((/* implicit */signed char) (unsigned char)57);
                            var_22 = ((/* implicit */unsigned char) min((var_22), ((unsigned char)80)));
                            var_23 = (unsigned char)82;
                        }
                        for (unsigned char i_9 = 1; i_9 < 21; i_9 += 2) 
                        {
                            arr_31 [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) -1289154049226523422LL);
                            arr_32 [i_0] [i_1] = (unsigned char)55;
                            var_24 = ((/* implicit */unsigned long long int) 1831756192U);
                            var_25 = ((/* implicit */signed char) (unsigned char)7);
                            var_26 *= ((/* implicit */unsigned short) 1779447855U);
                        }
                    }
                }
            } 
        } 
    } 
    var_27 += ((/* implicit */unsigned int) (signed char)31);
    var_28 = ((/* implicit */unsigned char) (signed char)-95);
}
