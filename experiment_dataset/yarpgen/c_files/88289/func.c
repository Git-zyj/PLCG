/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88289
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
    var_13 = ((/* implicit */short) (~(var_0)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)82))));
                arr_5 [i_0] [i_0] [i_1] &= ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                /* LoopSeq 4 */
                for (short i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    var_14 = ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0] [i_0]))))));
                    var_15 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65529))))), (27ULL))), (((((/* implicit */_Bool) max((arr_7 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_2]))))) ? (((arr_7 [i_1] [i_2 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                    arr_10 [i_0] [i_0] [i_2 + 4] = ((/* implicit */_Bool) arr_7 [i_0] [i_0]);
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_9 [i_2 + 4] [i_2] [i_2 + 1]);
                }
                /* vectorizable */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_3 [i_1] [i_1]))));
                    arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_0]) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_3 - 1])))))) ? ((+(2882149443U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14)))))))));
                }
                /* vectorizable */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_5 - 1] [i_4] [i_0] [i_1] [i_0])) <= (((/* implicit */int) (_Bool)1)))))) - (((((/* implicit */_Bool) 1298370013U)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_5])))))));
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (short)16380)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 11ULL))))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            arr_25 [i_0] [i_1] [i_4 - 1] [i_5 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << ((+(((/* implicit */int) (unsigned short)3))))));
                            arr_26 [i_0] [i_0] [i_4 - 1] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_4 - 1] [i_0] [i_5 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_0] [i_0]))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_1]);
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_4 - 1] [i_4 - 1] [i_5 - 1] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_24 [i_0])) : ((+(((/* implicit */int) var_4))))));
                        }
                        for (long long int i_8 = 1; i_8 < 22; i_8 += 2) 
                        {
                            arr_31 [i_0] [i_1] [i_0] [i_0] [i_0] = arr_13 [i_0] [i_4 - 1] [i_4 - 1] [i_5 - 1];
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_1] [i_8 - 1])) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_5] [i_8 + 1])) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_5 - 1] [i_8 + 2])))))));
                        }
                        for (int i_9 = 3; i_9 < 23; i_9 += 2) 
                        {
                            arr_34 [i_0] [i_1] [i_4] [i_0] [i_9 + 1] [i_0] = ((/* implicit */_Bool) var_10);
                            arr_35 [i_0] [i_0] [i_4] [i_5] [i_9 - 3] [i_4 - 1] = ((/* implicit */short) (_Bool)1);
                            arr_36 [i_0] [i_1] [i_4] [i_5 - 1] [i_4] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_1 [i_1] [i_4])))) | (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4))))));
                        }
                    }
                    var_22 = ((/* implicit */_Bool) var_2);
                }
                /* vectorizable */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    arr_40 [i_0] [i_0] = ((/* implicit */signed char) arr_37 [i_1] [i_10 - 1]);
                    arr_41 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_10 - 1] [i_1] [i_0] [i_0]))))) ? (((arr_38 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 52313820U)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) (short)16381)))))));
                    var_23 -= ((/* implicit */_Bool) 13104979207216617607ULL);
                }
                arr_42 [i_0] [i_0] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */short) max((min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_19 [i_1] [i_0] [i_0] [i_0] [i_0])) + (2147483647))) << (((arr_18 [i_0] [i_0] [i_1] [i_1]) - (17163858069411671210ULL)))))), ((+(arr_39 [i_0] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_33 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_33 [i_0] [i_1] [i_1] [i_1])))))))) : (((/* implicit */short) max((min((((/* implicit */unsigned int) ((((((((/* implicit */int) arr_19 [i_1] [i_0] [i_0] [i_0] [i_0])) - (2147483647))) + (2147483647))) << (((((arr_18 [i_0] [i_0] [i_1] [i_1]) - (17163858069411671210ULL))) - (14229963520466298153ULL)))))), ((+(arr_39 [i_0] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_33 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_33 [i_0] [i_1] [i_1] [i_1]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_11 = 3; i_11 < 24; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            for (int i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                {
                    arr_51 [i_11] [i_12] [i_12] = ((/* implicit */_Bool) arr_49 [i_11 - 3] [i_12] [i_13]);
                    var_24 = ((/* implicit */short) -1271020370657227822LL);
                    var_25 = ((((/* implicit */_Bool) arr_49 [i_13] [i_12] [i_11])) ? ((+(((/* implicit */int) min((arr_48 [i_11] [i_11 - 2] [i_11 - 3]), (arr_45 [i_11] [i_12] [i_13])))))) : (((/* implicit */int) arr_48 [i_11] [i_12] [i_13])));
                }
            } 
        } 
        arr_52 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1274566320U)) ? (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-32231)) : (((/* implicit */int) (short)16367)))), (((/* implicit */int) arr_43 [i_11 - 2])))) : (((/* implicit */int) (!(max((arr_47 [i_11 - 2]), (arr_50 [(_Bool)1]))))))));
        arr_53 [i_11 - 2] [i_11 - 1] = ((/* implicit */long long int) max((arr_49 [i_11 + 1] [i_11] [i_11 - 2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)65528)))))))));
        arr_54 [i_11 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_45 [i_11 - 1] [i_11 - 3] [i_11])))))))) >> (((arr_49 [i_11] [i_11 - 2] [i_11 - 2]) - (334593367536401071ULL)))));
        arr_55 [i_11] [i_11 - 3] = ((/* implicit */unsigned int) max((((/* implicit */int) ((arr_49 [i_11 + 1] [i_11 - 2] [i_11 + 1]) > ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_11 - 1]))) : (4366687033877053612ULL)))))), ((+(((/* implicit */int) arr_50 [22]))))));
    }
    for (unsigned int i_14 = 2; i_14 < 10; i_14 += 3) 
    {
        arr_60 [i_14] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65506)) - (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned short)45804)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_14 - 1] [i_14 - 2] [i_14]))) : (arr_23 [i_14 + 3] [i_14 - 1] [i_14 + 3] [i_14 + 3] [i_14])))))), (((((/* implicit */unsigned long long int) max((1166233820U), (((/* implicit */unsigned int) (_Bool)1))))) - (8840387072924195972ULL)))));
        var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((arr_48 [i_14] [i_14 + 2] [i_14]) ? (14801822156720260340ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_14])) > (((/* implicit */int) arr_21 [i_14] [i_14] [i_14 + 1] [i_14 - 1]))))) : (((/* implicit */int) arr_46 [i_14] [i_14])))) - (((/* implicit */int) (!(((/* implicit */_Bool) max((32767ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
    }
}
