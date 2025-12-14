/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76080
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) var_6))));
    var_12 = ((/* implicit */unsigned char) var_9);
    var_13 = ((/* implicit */unsigned long long int) (unsigned char)255);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1 + 2])) ? (((((/* implicit */_Bool) arr_0 [i_2 + 2] [i_1 - 1])) ? (arr_0 [i_2 - 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) < (((((/* implicit */int) var_7)) % (((/* implicit */int) var_3)))))))));
                        var_16 = ((/* implicit */short) var_8);
                        arr_10 [i_0] = ((unsigned long long int) var_2);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2 - 1] [i_4] [i_4] [i_1 - 1])) >= (((/* implicit */int) arr_7 [i_2 + 1] [i_4] [i_4] [i_1 - 2]))))), (((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))) : (4294967276U)))));
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max(((signed char)-54), (((/* implicit */signed char) ((var_9) <= (((/* implicit */int) arr_4 [i_1] [i_2 - 1]))))))))));
                        arr_14 [i_4] [i_0] [3U] [i_0] [(short)1] = ((/* implicit */int) (-(arr_0 [i_2] [i_4])));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                        {
                            arr_17 [i_0] [i_5] [i_4] [i_2 + 1] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_2])))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [6U] = ((/* implicit */unsigned char) (short)-839);
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] [i_2 + 2] [i_0] [i_0] = ((/* implicit */int) arr_21 [i_2 - 2] [i_2 + 1] [i_1 - 1] [(unsigned short)10] [i_0]);
                            arr_23 [i_6] [i_0] [4ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
                        }
                        var_19 += ((/* implicit */int) arr_5 [i_0] [1ULL] [1]);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 3) 
                    {
                        for (signed char i_8 = 2; i_8 < 20; i_8 += 3) 
                        {
                            {
                                arr_28 [i_0] [i_1 + 2] [i_2] [i_1 + 2] [i_0] = ((/* implicit */unsigned short) var_3);
                                var_20 += ((/* implicit */short) (_Bool)1);
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 255U))));
                                var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_8] [i_8 + 1] [i_8] [i_8 - 2] [i_8]))))) || (((/* implicit */_Bool) arr_26 [i_8] [i_8 + 1] [i_8] [i_8] [i_8]))));
                                var_23 = ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
