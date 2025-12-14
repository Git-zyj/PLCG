/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93757
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
    var_19 = ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */unsigned long long int) var_8)), ((-(var_11))))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (signed char)-1)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (-1)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */short) min((((/* implicit */unsigned char) (signed char)-16)), ((unsigned char)68)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned int) (-(((var_4) ? (((/* implicit */int) arr_8 [(short)3] [i_1 - 1])) : (((/* implicit */int) (signed char)46))))));
                                arr_14 [i_2] [i_4] [i_3] [i_3] [i_2] [i_1] [i_2] |= ((/* implicit */unsigned short) (+((-(((unsigned int) var_0))))));
                                arr_15 [(_Bool)1] [i_3] [(_Bool)1] [1U] [i_1 - 1] [i_3] [(signed char)11] = ((/* implicit */unsigned short) ((signed char) ((short) var_1)));
                                arr_16 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)70)) % (((/* implicit */int) (unsigned short)17207))));
                                var_21 = ((/* implicit */unsigned long long int) 3394219323U);
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                {
                    var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_1 + 2] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) var_10)) : (arr_7 [i_0 + 2] [i_0 + 2] [i_0])));
                    var_23 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(unsigned short)10] [i_5] [i_5]);
                    var_24 = ((signed char) var_0);
                }
                for (short i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned int) var_2);
                    var_26 = ((/* implicit */unsigned long long int) (~((+(((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]) / (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_6]))))))));
                }
                var_27 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)187)))))));
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((arr_2 [i_0 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((var_13), (min((var_12), (((/* implicit */short) (signed char)126)))))))));
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_29 = ((/* implicit */unsigned short) ((long long int) arr_7 [i_7] [i_1] [i_0 + 1]));
                    var_30 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)26)) <= (((/* implicit */int) (unsigned char)188)))) ? ((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 3] [i_0] [i_1 + 1] [i_7])))) : (((/* implicit */int) (!(arr_9 [(_Bool)1] [i_0] [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_7]))))));
                    var_31 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-127)) + (2147483647))) << (((((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_7])) ? (arr_21 [i_7] [i_0 - 1] [i_1] [i_0 - 1]) : (((/* implicit */long long int) 15U))))) ? (min((arr_21 [i_0] [i_1 - 1] [i_1 - 1] [(unsigned short)9]), (((/* implicit */long long int) arr_10 [i_7] [i_1] [i_7] [i_7] [i_7])))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)65535)), (arr_4 [i_0] [i_0 + 2])))))) + (601599628290943987LL))) - (6LL)))));
                }
                for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    arr_29 [i_0] [i_1] |= ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) <= (arr_10 [i_0] [i_0] [i_0 + 1] [(_Bool)1] [i_0])))) > ((+(((/* implicit */int) var_8))))))), ((~(((/* implicit */int) (!(var_16))))))));
                    var_32 = ((/* implicit */short) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [2U]))))))), ((-(((/* implicit */int) var_8))))));
                    var_33 = ((/* implicit */unsigned short) (short)10135);
                }
            }
        } 
    } 
    var_34 = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
}
