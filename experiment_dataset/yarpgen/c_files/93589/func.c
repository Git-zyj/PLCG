/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93589
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_9))));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)118)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)51401);
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1191617537035767143LL))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                {
                    arr_15 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (~(-1191617537035767154LL)));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_2)))))))));
                                var_15 ^= ((/* implicit */short) (+((+(((/* implicit */int) var_7))))));
                                arr_21 [i_3] [4ULL] [i_3] [i_4] [(unsigned char)1] [i_1] = ((/* implicit */int) (+(-1191617537035767125LL)));
                                arr_22 [i_1] [10LL] [i_3] = ((/* implicit */int) (short)-9532);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)9519)) | (((/* implicit */int) (signed char)15)))) & (((/* implicit */int) ((((/* implicit */_Bool) (short)-9532)) || (((/* implicit */_Bool) var_10)))))));
                }
            } 
        } 
        arr_23 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (1191617537035767170LL))))));
    }
    var_17 = ((/* implicit */unsigned int) 5430065264045825734ULL);
    var_18 = ((/* implicit */unsigned char) (_Bool)1);
    var_19 = ((/* implicit */int) (_Bool)1);
}
