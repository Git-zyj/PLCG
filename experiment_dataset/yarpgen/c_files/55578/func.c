/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55578
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
    var_18 = ((/* implicit */unsigned short) var_6);
    var_19 *= ((/* implicit */signed char) var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        arr_11 [i_3 + 2] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((unsigned short) ((unsigned short) 4294967295U)));
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) min((min((arr_4 [i_3 + 2]), (arr_4 [i_3 + 2]))), (var_13)));
                    }
                    for (int i_4 = 2; i_4 < 22; i_4 += 2) 
                    {
                        var_20 &= ((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_11)), (var_16))) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)8128)), ((unsigned short)2)))))));
                        var_21 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) arr_13 [i_4 + 2])) == (8021458489568493276ULL))));
                        var_22 = ((/* implicit */int) var_6);
                        var_23 *= var_17;
                    }
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_13)), ((-(arr_14 [20LL] [i_0] [i_2] [i_2])))));
                    var_24 = var_2;
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        arr_21 [i_2] [i_1] [i_2] [i_5] &= ((/* implicit */signed char) max((((/* implicit */int) var_3)), (((int) arr_5 [i_0] [(signed char)9] [i_5] [i_5]))));
                        var_25 = ((/* implicit */unsigned int) var_0);
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 23; i_6 += 4) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] [i_2] [(_Bool)1] = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
                        arr_25 [i_0] [i_1] [(unsigned short)9] [i_2] [i_0] = ((/* implicit */int) var_1);
                    }
                    for (int i_7 = 3; i_7 < 23; i_7 += 4) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] [i_1] [(short)15] [i_0] = ((/* implicit */unsigned char) ((long long int) -6419751255760031903LL));
                        var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])) < (var_13)))), (((((/* implicit */int) var_9)) + (max((((/* implicit */int) (signed char)1)), (arr_28 [i_2] [i_2] [(signed char)4] [i_2] [i_0])))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551606ULL)) || (((/* implicit */_Bool) arr_1 [i_2]))));
                            var_28 += ((/* implicit */unsigned int) ((unsigned long long int) arr_33 [i_7 - 3] [i_7 - 1]));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (+(((/* implicit */int) var_17)))))));
                            var_30 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                            arr_36 [i_0] [i_1] [i_2] [i_7] [i_7] [i_9] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_7 - 1] [i_7] [i_7] [i_7 - 1] [23ULL])))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_0] [(short)12] [i_0] [i_0] [i_2] [22] [i_0])) ? (((/* implicit */int) arr_38 [i_0] [i_1] [i_2] [i_7] [i_2] [i_1] [i_2])) : (((/* implicit */int) (signed char)51)))))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */int) (signed char)19)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) arr_38 [(unsigned short)17] [i_7 - 3] [i_0] [(unsigned short)6] [i_0] [i_1] [i_0]))));
                        }
                        var_33 = ((/* implicit */_Bool) arr_31 [i_0] [i_0]);
                    }
                    for (int i_11 = 2; i_11 < 23; i_11 += 1) 
                    {
                        var_34 = max((max((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) arr_33 [i_11 - 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2))))), (((/* implicit */unsigned int) min((arr_28 [i_11] [i_11] [i_11 - 1] [i_11 + 1] [i_11 + 1]), (arr_28 [i_1] [i_11] [(unsigned short)2] [i_11 - 2] [i_11])))));
                        arr_41 [i_0] [i_1] [i_2] [i_11] [i_0] = ((/* implicit */long long int) 18446744073709551606ULL);
                        var_35 = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [i_11 + 1] [i_1] [i_2] [i_11]))))), (((long long int) ((var_4) < (var_14))))));
                    }
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_17)), (((unsigned short) var_12))))), ((-(10ULL))))))));
}
