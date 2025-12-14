/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5785
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */long long int) arr_9 [i_0] [i_1] [11ULL] [i_0] [i_3] [i_4]);
                                var_10 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [(unsigned char)3] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_1 + 4] [i_2] [i_6 - 1] [i_6 - 1]))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                                var_11 += ((/* implicit */_Bool) (signed char)96);
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned char) arr_2 [i_0] [i_1] [i_1 + 1]);
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 10; i_8 += 3) 
                        {
                            {
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (arr_10 [i_0] [i_1 + 2] [(_Bool)1] [i_7 + 1] [i_0] [i_0] [i_8 + 2]))) || (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) var_1)))) >= ((+(((/* implicit */int) (unsigned short)7188))))))));
                                arr_28 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) 2051573504);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    for (unsigned char i_12 = 2; i_12 < 18; i_12 += 3) 
                    {
                        {
                            arr_40 [i_9] [i_10] [i_11] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9]))) != (max(((-(3471073860U))), (arr_29 [i_9] [i_10]))));
                            var_13 = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
                            arr_41 [i_9] [i_10] [i_11] [i_11] [i_9] [10ULL] = ((/* implicit */signed char) 3888693479U);
                            arr_42 [i_9] [i_10] [(unsigned char)0] [i_9] [i_12 - 2] = ((/* implicit */unsigned char) arr_39 [(unsigned short)17] [i_9] [i_11]);
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) var_6);
                arr_43 [i_9] [i_9] = max((min((((/* implicit */unsigned long long int) arr_34 [i_9] [i_9] [i_9])), (max((((/* implicit */unsigned long long int) (unsigned char)180)), (11782494617504133926ULL))))), (((/* implicit */unsigned long long int) max((max((var_4), (((/* implicit */long long int) (unsigned short)6743)))), (((/* implicit */long long int) arr_31 [i_9]))))));
                var_15 |= ((/* implicit */_Bool) arr_32 [(unsigned char)10]);
            }
        } 
    } 
}
