/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80941
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)60815)) + (((((/* implicit */int) (unsigned short)60815)) >> (((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) - (129)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (9223372036854775807LL))))) : (min((var_11), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))));
                var_16 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)4720))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967295U)), (var_8)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)60805))))))))));
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((min((max((arr_18 [i_2 + 1]), (((/* implicit */unsigned long long int) (unsigned short)60816)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)7168)), ((unsigned short)4729)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((((/* implicit */int) (short)32764)) >> (((((/* implicit */int) var_14)) + (60))))))))));
                                arr_19 [(unsigned char)6] [(signed char)2] [(signed char)2] [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned short) (-(arr_6 [i_2 - 1])));
                                arr_20 [i_2 + 2] [i_3] [i_3] [i_5] [i_6] &= ((/* implicit */unsigned int) arr_12 [i_2] [(signed char)6] [i_4] [i_5]);
                                var_19 ^= ((/* implicit */signed char) ((max((((/* implicit */unsigned int) (unsigned short)60807)), (var_6))) >> (((((((/* implicit */_Bool) (unsigned char)165)) ? (arr_6 [i_2 + 1]) : (((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 2])))) + (1381758365)))));
                                arr_21 [i_2 + 2] [i_3] [i_4] [i_5] [i_2 + 2] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) arr_14 [i_2] [i_2 - 2] [i_6] [i_6] [i_2] [i_6])) : (((/* implicit */int) arr_14 [i_2 + 2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 2] [i_2 + 1])))) > (((/* implicit */int) min(((unsigned short)60807), ((unsigned short)60799))))));
                            }
                        } 
                    } 
                    var_20 = ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_2 - 1]))) ? (((((/* implicit */_Bool) arr_11 [i_2 - 2] [i_2] [i_2 - 1] [i_2 + 1])) ? (arr_6 [i_2 - 2]) : (arr_6 [i_2 - 2]))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-1765)), ((unsigned short)4721)))));
                    var_21 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_8 [i_2 + 1])) > (((/* implicit */int) arr_8 [i_2 + 1])))))));
                }
            } 
        } 
    } 
}
