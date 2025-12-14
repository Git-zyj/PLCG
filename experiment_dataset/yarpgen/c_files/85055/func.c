/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85055
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
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */int) (signed char)3)) ^ (((/* implicit */int) (signed char)2)))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min(((+(255))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1]))) > (arr_9 [i_2] [i_1] [i_1 - 2] [i_1 - 2])))))))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) << (((((4068169725U) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (4068169801U)))));
                            var_17 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) 4068169740U))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 10; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_0] [3] [i_5] [i_3] [i_5] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [(_Bool)1] [i_0 + 1] [i_0]);
                            var_18 -= ((/* implicit */signed char) 0U);
                            var_19 *= ((/* implicit */unsigned char) var_3);
                            arr_19 [i_5 - 1] [i_1] [i_5] [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) min((4068169740U), (4294967293U)));
                        }
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((((-(2673788102U))) >> (((((/* implicit */int) var_7)) - (62))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(unsigned char)3] [i_3] [i_2] [i_0] [i_0])))));
                            arr_22 [i_6] [i_2] [i_2] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) 1811161285)), (4294967295U))))));
                            var_21 = ((/* implicit */signed char) (((~(arr_1 [i_0 - 1] [i_0 + 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)32758)))));
                        }
                    }
                    var_22 = ((/* implicit */unsigned int) arr_20 [i_2] [i_2] [i_2] [i_2] [(unsigned char)1] [i_2]);
                }
            } 
        } 
    } 
    var_23 = ((unsigned char) (short)12794);
}
