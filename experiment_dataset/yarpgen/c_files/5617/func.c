/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5617
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
    var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967282U)) ? (18446744073709551613ULL) : (3ULL)))) && (((/* implicit */_Bool) (-(var_13)))))))));
    var_16 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned short)58356)), (2832092645430488957LL)));
    var_17 = ((/* implicit */short) var_13);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_12)) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) var_14)))), (arr_1 [17LL]))))));
        var_19 = ((/* implicit */unsigned short) ((arr_0 [i_0]) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_14), (((/* implicit */short) (unsigned char)187)))))) : (var_9))) - (6417U)))));
    }
    for (int i_1 = 4; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 2; i_2 < 16; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) (short)28376);
                        var_21 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_10 [i_1] [i_2] [2U] [i_4])))) == (((/* implicit */int) ((signed char) (signed char)-78)))));
                        var_22 = ((/* implicit */long long int) (signed char)-124);
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned short) (~(arr_3 [i_1 - 4] [i_1 - 4])));
            arr_15 [i_1] [i_2 - 1] |= ((/* implicit */short) ((((((/* implicit */_Bool) 75029860U)) && (((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_1 - 4])))) ? (((/* implicit */unsigned long long int) arr_12 [i_1 - 3] [3LL])) : (((unsigned long long int) var_12))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            var_24 = ((/* implicit */long long int) min((var_24), (((arr_4 [i_1 + 1]) ? (arr_11 [(unsigned short)3]) : (((/* implicit */long long int) arr_17 [i_1]))))));
            /* LoopSeq 4 */
            for (unsigned int i_6 = 1; i_6 < 16; i_6 += 1) 
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [(unsigned char)3])) - (((/* implicit */int) (signed char)-119))))) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11))))));
                var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_6 + 1]) ? (arr_21 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) arr_13 [3LL] [3LL] [i_6])) ? (arr_16 [(signed char)4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 3] [i_1 - 2] [i_6 + 1])) ? (((/* implicit */int) arr_8 [i_1 - 3])) : (((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_6 - 1] [i_6 - 1]))) : (((((/* implicit */_Bool) (unsigned short)63114)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [10U] [i_5] [(unsigned short)14] [(unsigned short)14]))) : (var_9)))));
                /* LoopSeq 3 */
                for (unsigned int i_7 = 1; i_7 < 16; i_7 += 4) 
                {
                    arr_24 [i_6] [i_6] [i_6] [i_5] [i_6] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [i_6] [(unsigned short)4] [i_7 - 1] [i_6] [i_6] [i_5] [i_6] = var_3;
                        var_29 |= ((/* implicit */unsigned int) arr_5 [i_6] [i_5]);
                    }
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_30 = arr_18 [i_5];
                        var_31 ^= ((/* implicit */_Bool) 4294967292U);
                        arr_32 [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)64)) ? ((-(((/* implicit */int) (signed char)-120)))) : (((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-120))))));
                        var_32 -= ((/* implicit */int) var_3);
                    }
                }
                for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    var_33 = ((/* implicit */unsigned int) var_3);
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6]))) * (13U)));
                    var_35 = ((/* implicit */short) ((unsigned int) arr_34 [i_6] [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_6]));
                }
                for (signed char i_11 = 2; i_11 < 16; i_11 += 4) 
                {
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_1] [i_5] [i_6] [i_6] [i_5] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (7203280880815840552ULL)));
                    arr_37 [i_6] [i_11] [(_Bool)1] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_1 - 3] [(signed char)8] [i_11 + 1])) : (((/* implicit */int) arr_9 [(signed char)16] [i_1 - 2] [i_1 - 2] [i_11 - 1]))));
                    arr_38 [i_1] [i_6] [(unsigned short)16] [(unsigned char)7] = arr_1 [i_11];
                }
            }
            for (unsigned int i_12 = 1; i_12 < 16; i_12 += 2) 
            {
                var_37 |= ((/* implicit */unsigned char) arr_8 [i_12]);
                arr_42 [i_5] = ((/* implicit */unsigned char) ((arr_22 [(_Bool)1] [i_12 - 1] [(_Bool)1] [i_12] [i_12 - 1] [i_5]) / (((/* implicit */long long int) arr_17 [i_1 + 1]))));
            }
            for (unsigned char i_13 = 2; i_13 < 15; i_13 += 4) 
            {
                arr_46 [i_1] [i_1] = ((/* implicit */signed char) (unsigned char)187);
                var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(118532770U))))));
                var_39 ^= ((/* implicit */signed char) 4152987555U);
                arr_47 [i_13] [i_5] [i_13] = ((/* implicit */unsigned char) arr_20 [i_13 - 1] [i_5] [i_1 - 3] [i_1 - 3]);
            }
            for (short i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 3; i_15 < 14; i_15 += 4) 
                {
                    for (short i_16 = 0; i_16 < 17; i_16 += 4) 
                    {
                        {
                            arr_56 [(unsigned char)3] [i_16] [i_1 - 4] [i_1 - 4] [i_14] [i_5] [i_1 - 4] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)58828)) ^ ((~(((/* implicit */int) (short)3142))))));
                            var_40 |= ((/* implicit */_Bool) (-(var_13)));
                        }
                    } 
                } 
                arr_57 [i_5] = ((/* implicit */long long int) 13U);
            }
        }
    }
}
