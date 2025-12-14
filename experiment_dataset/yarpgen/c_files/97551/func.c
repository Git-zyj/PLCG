/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97551
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [(unsigned char)11] [(short)7] [(short)7] = ((/* implicit */unsigned short) max((var_0), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0]))) < (arr_2 [i_0] [(signed char)0]))))));
                arr_7 [i_0] [i_1] = min((((short) arr_0 [i_0] [i_1])), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
                var_12 = ((/* implicit */unsigned int) (+((((+(((/* implicit */int) (short)-1)))) / ((-(((/* implicit */int) var_7))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] &= min((((unsigned char) 131071U)), (((/* implicit */unsigned char) arr_3 [i_0] [i_2 + 2])));
                        var_13 = ((/* implicit */unsigned short) var_10);
                        var_14 = min((var_10), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (var_4)))));
                    }
                    for (unsigned char i_4 = 3; i_4 < 13; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((unsigned long long int) (-(arr_10 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_4 - 1])))))));
                        arr_15 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned char) ((min((14689013198519724693ULL), (((/* implicit */unsigned long long int) var_8)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [5] [i_0])))))))))));
                    }
                    var_16 = ((/* implicit */int) min((min(((+(4294967295U))), (min((2338581476U), (1956385805U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)233)), (311316438U)))))))));
                }
                for (signed char i_5 = 1; i_5 < 13; i_5 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned char) arr_4 [i_1]);
                    /* LoopNest 2 */
                    for (short i_6 = 4; i_6 < 14; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) var_9);
                                var_19 &= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 4294967288U)) || (((/* implicit */_Bool) arr_10 [i_0] [i_5 + 1] [i_5] [i_5]))))));
                                arr_22 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_1] [i_6] [i_5 + 2] [i_7])))))));
                            }
                        } 
                    } 
                    var_20 *= (~(2100857817U));
                    var_21 = ((/* implicit */unsigned int) var_11);
                }
            }
        } 
    } 
    var_22 = ((/* implicit */short) min((4294836225U), (((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)11832))))))));
}
