/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88958
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
    var_10 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) (+(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) (-(arr_3 [i_0])))) : (((((/* implicit */_Bool) 0U)) ? (var_2) : (-2545431094059711825LL)))))));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((long long int) arr_2 [i_0 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_2)) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2]))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
                        {
                            arr_15 [7LL] [i_3] [i_0] [i_0] [i_1] [7LL] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) / (((((/* implicit */_Bool) (unsigned short)896)) ? (arr_5 [i_0] [i_0 - 1]) : (((/* implicit */int) var_3))))));
                            var_12 = ((/* implicit */unsigned int) ((((_Bool) ((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_2 [i_0])))) ? (max((arr_3 [i_0]), (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) ((unsigned char) ((unsigned short) arr_10 [i_0] [i_1] [i_1]))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(arr_11 [i_0] [i_1])));
                            var_13 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) * (18446744073709551609ULL))) == (((/* implicit */unsigned long long int) (-(((unsigned int) 4294967295U)))))));
                            arr_17 [i_2] [i_0] = ((/* implicit */unsigned char) arr_2 [i_2]);
                        }
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_2] [i_5] [i_0 - 1] = ((/* implicit */unsigned char) ((_Bool) ((((4294967295ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41417))) >= (4194303U))))) : (var_6))));
                            arr_21 [i_0] [i_3] [i_3] [i_3] [i_0] [i_2] = ((/* implicit */signed char) var_1);
                            var_14 = ((/* implicit */unsigned short) arr_3 [i_0]);
                        }
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */signed char) var_7);
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)16153)) - (16141)))))) && (((/* implicit */_Bool) min((arr_7 [i_0]), (((/* implicit */unsigned int) var_4)))))));
                        }
                        arr_24 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((arr_2 [i_0 - 2]), (((/* implicit */long long int) (unsigned char)31))))) + (((((/* implicit */unsigned long long int) 130023424)) - (18446744069414584320ULL)))));
                        var_17 = ((/* implicit */_Bool) min((((((/* implicit */int) ((signed char) var_6))) / (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_7)))))), (arr_5 [i_0] [i_2])));
                    }
                } 
            } 
            arr_25 [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
            arr_26 [i_0] = ((/* implicit */_Bool) (short)-16356);
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_29 [i_7] [i_0] [i_0 - 2] = ((/* implicit */unsigned int) ((unsigned short) arr_5 [i_0] [i_0]));
            /* LoopSeq 1 */
            for (unsigned short i_8 = 3; i_8 < 21; i_8 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    arr_34 [8] [i_7] [i_7] [i_7] [i_0] [i_7] = ((/* implicit */int) var_5);
                    var_18 = ((((((/* implicit */_Bool) arr_6 [i_0])) || (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */unsigned long long int) 130023402)) - (arr_23 [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)13)) > (((/* implicit */int) (unsigned char)255)))))));
                    arr_35 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0 - 2] [i_8 - 3] [i_9])) && (((/* implicit */_Bool) arr_32 [(short)15] [(unsigned short)16] [i_0 - 2] [i_8 - 2] [i_9]))));
                }
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        var_19 *= ((/* implicit */short) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) arr_30 [i_8] [i_8 - 1] [i_8] [i_8 - 2])) - (8282)))));
                        arr_41 [i_0] [9U] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) ((arr_39 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2]) + (((/* implicit */long long int) ((/* implicit */int) arr_9 [1] [i_0 - 2] [i_7] [i_7])))));
                    }
                    for (short i_12 = 3; i_12 < 20; i_12 += 1) 
                    {
                        var_20 = ((/* implicit */int) (unsigned char)93);
                        arr_44 [i_0] [(unsigned short)11] [i_12] = ((/* implicit */_Bool) ((unsigned short) arr_28 [i_0] [i_0 - 2]));
                        arr_45 [i_0] [i_7] [i_8 - 2] [i_10] [i_12 - 2] = ((/* implicit */long long int) var_3);
                        arr_46 [i_0] [i_7] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_33 [i_0 - 1] [i_0] [i_0 - 1] [i_12])))) + (((/* implicit */int) (short)-12))));
                        arr_47 [i_0] [i_0] = ((/* implicit */int) arr_32 [i_0] [i_0] [i_8] [i_0] [i_0 - 2]);
                    }
                    arr_48 [i_10] [i_10] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)0);
                }
                arr_49 [i_7] [i_7] [i_0] = ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((arr_5 [i_0] [i_0]) <= (((/* implicit */int) var_7))))));
            }
            arr_50 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8)))) & (((((/* implicit */unsigned long long int) 2285351877U)) * (2161727821137838080ULL)))));
        }
    }
    var_21 = ((/* implicit */unsigned char) 4294967287U);
    var_22 = ((/* implicit */unsigned short) ((((var_8) >> (((var_2) - (6242049006386420056LL))))) <= (min((min((((/* implicit */unsigned int) (unsigned short)40655)), (var_1))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */int) var_3)) + (27))) - (3))))))))));
}
