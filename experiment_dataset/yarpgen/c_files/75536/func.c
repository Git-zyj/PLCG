/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75536
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
    var_16 = max((((/* implicit */int) (short)-27104)), ((-2147483647 - 1)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            arr_13 [i_1] [i_1] [i_0] [i_3] [i_4 - 1] = ((/* implicit */_Bool) min((((/* implicit */int) arr_11 [i_1] [i_4 - 2] [i_4] [i_0] [i_4 - 2] [i_4 - 2])), (arr_8 [i_4 + 1] [i_0] [i_4] [i_4] [i_4])));
                            var_17 = ((/* implicit */_Bool) ((unsigned int) min((max((var_14), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2] [i_3] [i_4 - 1] [i_4])))));
                            var_18 = ((/* implicit */unsigned int) ((unsigned char) var_14));
                        }
                        for (short i_5 = 1; i_5 < 12; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((long long int) max((var_9), (((/* implicit */long long int) var_0)))))), (min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5])), (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1])), (var_3))))))))));
                            var_20 = ((/* implicit */int) max((((/* implicit */long long int) (+(var_0)))), (min((arr_9 [i_0] [i_3]), (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_3] [i_3] [i_5] [i_5 - 1] [i_2]))))));
                        }
                        for (int i_6 = 2; i_6 < 10; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((long long int) (-2147483647 - 1))))));
                            var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_6]))));
                        }
                        var_23 += ((/* implicit */unsigned int) min((min(((-2147483647 - 1)), (min((507830838), (507830838))))), (((/* implicit */int) arr_14 [i_2] [i_2] [i_3] [i_0] [i_0] [i_2] [i_3]))));
                    }
                    for (int i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) max((max((((/* implicit */unsigned int) (unsigned short)26461)), (258048U))), (((/* implicit */unsigned int) max((var_7), (((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_7])))))));
                        var_25 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_1))))), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7])))), ((~(var_5)))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) min((((int) ((unsigned char) var_9))), ((-(((/* implicit */int) (unsigned short)14709))))));
                        var_27 |= (-(max((min((arr_15 [i_0] [i_2] [i_1] [i_1] [i_2] [i_8] [i_8]), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2] [i_2])))), (max((arr_15 [i_0] [i_2] [i_0] [i_8] [i_2] [i_2] [i_8]), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_9 = 4; i_9 < 11; i_9 += 2) 
                    {
                        arr_29 [i_1] [i_0] [i_1] [i_9] [i_0] = ((/* implicit */unsigned short) max(((-(554153860399104LL))), (((/* implicit */long long int) arr_20 [i_9 + 3] [i_1] [i_2] [i_9] [i_2] [i_2]))));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (-(((/* implicit */int) arr_25 [i_0] [i_1] [i_2] [i_0] [i_9])))))));
                        var_29 = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))));
                        arr_30 [i_0] [i_1] = ((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0] [i_9]), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_1] [i_1] [i_9] [i_9 - 2] [i_9]))));
                        var_30 = ((/* implicit */int) max((((/* implicit */unsigned int) (_Bool)1)), (4294967290U)));
                    }
                    for (int i_10 = 1; i_10 < 11; i_10 += 3) 
                    {
                        var_31 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_2] [i_10 + 1] [i_10]);
                        var_32 ^= ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)39)), ((unsigned char)154)))), (((unsigned long long int) arr_21 [i_10])))), (max((14240748613453023182ULL), (((/* implicit */unsigned long long int) (unsigned short)50833))))));
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((int) ((unsigned int) arr_9 [i_1] [i_2]))))));
                        var_34 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_11 + 3] [i_0] [i_11 + 4]))))));
                        arr_36 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) var_15));
                        var_35 += ((/* implicit */short) arr_24 [i_0] [i_0] [i_1] [i_2] [i_2] [i_11]);
                        var_36 += ((/* implicit */signed char) max((((_Bool) arr_11 [i_1] [i_1] [i_1] [i_2] [i_11 + 1] [i_1])), ((!(((/* implicit */_Bool) (-(var_15))))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_40 [i_0] [i_0] [i_0] = max((min((min((var_5), (((/* implicit */unsigned long long int) arr_9 [i_12] [i_1])))), (var_3))), (((/* implicit */unsigned long long int) (~(arr_19 [i_0] [i_1] [i_1] [i_2] [i_0] [i_1])))));
                        var_37 = ((/* implicit */int) max((var_37), ((~(((/* implicit */int) ((unsigned char) ((unsigned int) arr_32 [i_2] [i_2] [i_1] [i_2] [i_12] [i_12]))))))));
                    }
                }
            } 
        } 
    } 
}
