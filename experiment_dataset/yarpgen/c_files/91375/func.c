/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91375
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (max((var_14), (((/* implicit */unsigned int) var_10)))))));
                                arr_14 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */signed char) var_14);
                                arr_15 [i_3] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_13 [i_3] [i_3] [i_3] [(_Bool)1] [i_4] [i_0])), (max((11332099790630915589ULL), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) min((arr_8 [(unsigned short)12] [(unsigned short)12] [(unsigned short)12]), (arr_8 [i_1] [i_2] [i_3]))))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) var_12))) & (max((((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_3] [i_3] [i_4])), (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (11332099790630915588ULL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_5])) : (arr_3 [i_5])))), (min((var_5), (7114644283078636026ULL)))))) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_10)) : (18446744073709551615ULL))), (max((var_15), (((/* implicit */unsigned long long int) (unsigned short)8176)))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_5])))), (((/* implicit */int) arr_8 [i_0] [i_1] [i_1])))))));
                        arr_19 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((signed char) (((~(((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))) & (arr_3 [i_0]))));
                        arr_20 [i_0] [i_1] [i_1] [(unsigned char)14] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        arr_24 [i_0] [i_0] [i_1] [i_2] [i_6] [i_6] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (11332099790630915570ULL)))))) ? (((((/* implicit */int) ((_Bool) (unsigned short)45965))) - (((/* implicit */int) var_12)))) : (((/* implicit */int) var_8)));
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 2; i_7 < 16; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */int) ((unsigned short) (+(arr_4 [i_7 - 1]))));
                            arr_28 [i_0] [i_1] [i_2] [i_6] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_21 [i_6] [i_7 + 1])))), ((~(((/* implicit */int) arr_0 [i_2]))))));
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */int) max((((/* implicit */unsigned int) ((unsigned short) -1480393664))), (var_14)));
                            arr_31 [i_8] [(unsigned short)7] [i_1] [i_8] = ((/* implicit */signed char) (((((-(var_15))) - (((((/* implicit */_Bool) var_2)) ? (var_15) : (var_5))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)45965), (((/* implicit */unsigned short) arr_1 [i_8 + 1]))))))));
                            arr_32 [i_1] [i_0] [i_2] [i_8] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_13 [i_8] [i_8] [i_8 + 2] [i_8 + 2] [i_8] [i_8 + 1])), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_17 [i_8 - 1] [i_1])))))) : (((unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
                            arr_33 [i_0] [i_1] [i_8] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((7114644283078636027ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6] [i_0]))))), (arr_9 [i_0] [i_1] [i_2] [i_6]))))) % (arr_12 [i_0] [i_1] [i_1] [i_6] [i_8])));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 1) /* same iter space */
                        {
                            arr_37 [i_6] [i_6] [i_9] [i_2] [i_9] [i_1] [i_0] = ((/* implicit */int) max((17713422195383802697ULL), (((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned int) arr_10 [i_9] [i_6] [i_9] [i_1] [i_0])), (arr_25 [i_1] [i_1] [i_2] [i_2] [i_1] [i_2] [i_6])))))));
                            var_20 = (_Bool)1;
                            arr_38 [i_0] [i_1] [i_2] [i_2] [i_9] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_2] [i_2] [i_0] [i_9])) : ((~(((/* implicit */int) (_Bool)1)))))) + (2147483647))) << (((((((arr_30 [i_0] [i_0] [i_1] [i_2] [i_1] [i_9] [i_9 + 1]) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_6] [i_1] [i_2])) - (5450))))) - (23376579)))));
                            arr_39 [i_9 - 1] [i_9 - 1] [i_9] [i_9] [i_0] [i_0] = ((/* implicit */short) var_6);
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 1) /* same iter space */
                        {
                            arr_43 [i_0] [i_10] = arr_1 [i_10];
                            arr_44 [i_0] [i_1] [i_2] [i_6] [i_10] = ((/* implicit */unsigned char) ((short) ((short) arr_30 [i_0] [i_1] [i_2] [i_6] [i_10 + 2] [i_6] [i_10 + 2])));
                            var_21 = ((int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) % (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_35 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6] [i_10])) : (var_5)))));
                        }
                    }
                    for (short i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        arr_49 [(_Bool)1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned short) max((arr_41 [i_0] [i_1] [i_2] [i_11] [i_11]), (arr_41 [i_0] [(short)9] [i_2] [i_11] [i_1]))));
                        arr_50 [i_0] [i_1] = ((/* implicit */short) min((((min((((/* implicit */long long int) (unsigned char)0)), (var_11))) == (((long long int) var_10)))), (((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_22 -= ((unsigned long long int) arr_10 [i_0] [i_1] [i_1] [i_12] [i_1]);
                        arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
                        arr_54 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_2] [i_1] [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_29 [i_0] [i_0] [i_1] [i_0] [i_0]))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_1))));
                    }
                    arr_55 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_1] [i_1] [i_2])), (var_12)))), (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_10 [i_2] [i_2] [i_0] [i_1] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
    {
        for (int i_14 = 3; i_14 < 11; i_14 += 3) 
        {
            {
                arr_61 [i_13] [i_13] = ((/* implicit */unsigned long long int) var_7);
                /* LoopSeq 1 */
                for (short i_15 = 1; i_15 < 9; i_15 += 3) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_14] [i_15])) ? (((arr_63 [i_13]) & (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_13] [i_13] [i_13]))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) max((arr_23 [i_15 - 1] [i_15] [(short)7] [i_15 - 1]), (arr_46 [i_14 + 1] [i_14])))))));
                    var_25 -= (unsigned short)57335;
                    arr_64 [i_13] [i_14 + 1] [i_13] [i_15] = ((/* implicit */short) max((((unsigned char) (unsigned short)57346)), (arr_47 [i_13] [i_14] [(signed char)5] [i_14] [(unsigned short)15])));
                }
                var_26 -= ((/* implicit */unsigned short) arr_26 [i_13] [i_13] [i_13] [i_14] [i_14] [i_14]);
                arr_65 [i_13] = ((/* implicit */short) var_15);
                arr_66 [i_14] [i_13] = ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
    var_27 = ((/* implicit */short) var_11);
}
