/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88375
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((9214364837600034816LL) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))), (((((/* implicit */_Bool) 9214364837600034816LL)) ? (((((/* implicit */_Bool) 9214364837600034816LL)) ? (9214364837600034816LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (var_3)))))))));
                var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2185))) % (9214364837600034816LL))))), (((unsigned long long int) (short)(-32767 - 1)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((var_1) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3])))))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (9214364837600034816LL)))))));
                    arr_14 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */short) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) (unsigned short)2185)) : (((/* implicit */int) var_3))))), (((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))))))), (((/* implicit */unsigned int) min((((((/* implicit */int) var_13)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((unsigned short)2181), (((/* implicit */unsigned short) (signed char)39))))))))));
                    arr_15 [i_2] [i_3] [i_4] = ((/* implicit */short) var_10);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (long long int i_6 = 3; i_6 < 9; i_6 += 3) 
                        {
                            {
                                arr_21 [9ULL] [9ULL] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned short) ((var_3) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)2184)))));
                                var_16 = ((/* implicit */unsigned long long int) min((6119559361052292109LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            {
                                arr_26 [i_3] [i_4] [(short)2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)232))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_4] [i_4])) ? (arr_22 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))) || (((/* implicit */_Bool) (~(var_5))))));
                                arr_27 [i_4] [i_3] [i_4] [i_7 + 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_11), (((/* implicit */short) (signed char)-17)))))) : ((-(((((/* implicit */long long int) ((/* implicit */int) var_4))) & (-9214364837600034817LL)))))));
                                arr_28 [i_2] [i_3] [i_4] [i_4] [i_3] |= ((/* implicit */short) ((min((var_2), (((/* implicit */unsigned int) var_7)))) > (((/* implicit */unsigned int) max((arr_3 [i_7 + 1]), (arr_3 [i_7 + 1]))))));
                                var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_25 [i_2] [(short)6] [i_4] [i_7] [i_7 - 1] [i_3] [i_2])) ? (((var_3) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-4974495233607021119LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)15842)) : (((/* implicit */int) (_Bool)1))))))), ((~(-4974495233607021119LL)))));
                                arr_29 [(signed char)3] [i_4] [(short)9] [i_4] [i_4] [i_2] = ((/* implicit */signed char) ((arr_18 [(signed char)1] [(signed char)1] [i_4] [(signed char)1]) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((7200271409313785243ULL), (((/* implicit */unsigned long long int) arr_11 [i_7])))))) : (((((arr_22 [i_8] [i_7] [i_4] [5]) > (0ULL))) ? (arr_22 [i_7 + 1] [i_8] [i_7 + 1] [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
