/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62799
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
    var_15 = ((/* implicit */int) var_13);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                    var_16 = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) ((var_2) != (((/* implicit */unsigned long long int) var_12)))))))) / (((((/* implicit */long long int) var_6)) & (((((/* implicit */long long int) ((/* implicit */int) var_13))) + (var_12)))))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_1 [i_2] [i_0]);
                }
                for (long long int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_3] [i_0]);
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_3] [(unsigned short)7] [i_1] = var_10;
                                arr_20 [i_0] [(unsigned char)7] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) max((arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1]), (arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] [i_0] |= ((/* implicit */short) var_4);
                }
                for (long long int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(arr_23 [i_0] [i_0] [i_0] [i_0 + 2]))))));
                    arr_24 [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */long long int) arr_14 [7ULL] [i_6] [i_6] [i_6] [i_6]);
                    var_19 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (18446744073709551611ULL)));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)16))))));
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_10 [(unsigned short)1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)4371))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (unsigned short)45018)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16)) ^ (((/* implicit */int) (unsigned short)977))))) : (3724173311U)))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_6] [i_6] [(short)5])) % (((/* implicit */int) arr_12 [i_6] [i_6] [i_6]))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) arr_11 [i_8] [i_6] [i_1])) | (-976419974))))), (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]))))), (var_10))))));
                        var_22 |= var_11;
                        var_23 = ((((/* implicit */int) var_1)) - (((/* implicit */int) ((unsigned char) arr_27 [i_0] [i_0] [i_1] [i_0] [i_0 + 1]))));
                    }
                }
                var_24 = var_3;
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) (~(((unsigned int) var_7))));
    var_26 = ((/* implicit */short) (~(((var_12) ^ (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)10)) * (((/* implicit */int) var_1)))))))));
}
