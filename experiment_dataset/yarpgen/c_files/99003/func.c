/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99003
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_0)))))));
        arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_0)) | (((/* implicit */int) ((var_13) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_1] [(signed char)8] [(unsigned char)1] = (unsigned short)32768;
                    arr_13 [i_1] [i_2] [i_3] [i_3] = arr_0 [(unsigned short)10];
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1048575)) ? (((/* implicit */long long int) var_4)) : ((-9223372036854775807LL - 1LL))));
                        arr_17 [i_4] [i_3] [(unsigned short)6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (signed char)-54))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 12; i_5 += 4) /* same iter space */
                        {
                            arr_20 [i_5 + 1] [(short)10] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) var_5);
                            arr_21 [i_1 + 1] [i_3] [i_5 + 2] = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) 17072542011811395445ULL))));
                        }
                        for (int i_6 = 1; i_6 < 12; i_6 += 4) /* same iter space */
                        {
                            arr_26 [i_1] [i_6] [i_6] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((arr_23 [i_1 + 2] [i_2] [i_2] [i_3] [i_3] [i_4] [i_4]) % (arr_23 [i_1 + 3] [6LL] [0LL] [i_3] [i_3] [i_4] [i_6]))) : (min((arr_23 [i_1] [i_1] [i_1 + 1] [i_2] [i_3] [i_3] [i_6]), (arr_23 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1])))));
                            arr_27 [i_1] [i_1] [i_6] [0LL] [i_3] [i_4] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_5 [i_3] [i_6]))))))))));
                        }
                    }
                    arr_28 [(_Bool)1] [i_2] [i_2] [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [0ULL] [i_2] [i_2])), (arr_6 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) < (4294967295U))))) : (17072542011811395422ULL))) : (((/* implicit */unsigned long long int) ((long long int) min((4611686018427387888ULL), (((/* implicit */unsigned long long int) arr_6 [i_1]))))))));
                }
            } 
        } 
        arr_29 [i_1] = ((/* implicit */short) min((((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3356846479396310034LL))) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */long long int) (_Bool)0))));
        arr_30 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)27870)) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2])))));
    }
    /* vectorizable */
    for (unsigned short i_7 = 2; i_7 < 18; i_7 += 3) 
    {
        arr_33 [i_7 - 1] &= ((/* implicit */unsigned short) (-(((unsigned int) (unsigned char)99))));
        arr_34 [13U] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_32 [i_7 - 2])) * (((((/* implicit */int) (short)27241)) * (((/* implicit */int) arr_2 [i_7 - 2] [i_7 - 2]))))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_3);
    var_20 |= ((/* implicit */unsigned int) var_8);
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) (short)-9087)) != (((/* implicit */int) (_Bool)1))));
    var_22 = ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))))) ? (min((var_16), (((/* implicit */long long int) var_14)))) : (max((((/* implicit */long long int) var_5)), (var_17))))) : (var_7)));
}
