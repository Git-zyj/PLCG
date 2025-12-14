/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56954
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] = arr_1 [i_0 - 1];
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_9 [i_0 - 1] [i_0 - 1] = ((int) arr_1 [i_0 - 1]);
            var_14 &= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 1370892049U))))) | (((((/* implicit */int) arr_8 [i_0 - 1] [i_0])) + (-960995574)))));
            var_15 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1]))));
        }
        for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            arr_13 [i_0] [i_0] = min(((-(min((((/* implicit */long long int) -960995551)), (arr_12 [i_3] [i_3] [i_0]))))), (((/* implicit */long long int) (_Bool)1)));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        var_16 &= arr_11 [i_0] [i_4];
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_12))));
                            var_18 = ((/* implicit */signed char) var_12);
                        }
                        for (unsigned int i_7 = 3; i_7 < 7; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) ((arr_23 [8LL] [i_7] [i_5] [i_4] [i_3] [i_0] [3LL]) | (var_4)));
                            arr_25 [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)36))));
                        }
                        var_20 = ((((_Bool) arr_7 [i_0 - 1])) ? (-3874358457037967446LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)103)))));
                    }
                } 
            } 
            arr_26 [i_0] = ((/* implicit */signed char) arr_20 [i_0] [6LL] [i_0] [i_0] [i_0]);
        }
        var_21 = ((/* implicit */long long int) arr_4 [i_0 - 1]);
        arr_27 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (((unsigned long long int) arr_0 [i_0] [i_0 + 1]))));
    }
    for (int i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_8] [i_8])) ? (((arr_30 [i_8]) ? (min((((/* implicit */long long int) (_Bool)1)), (-3874358457037967446LL))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)5334)), (var_13)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_8] [i_8])))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                {
                    var_23 = ((/* implicit */_Bool) ((min((arr_32 [i_10]), ((-(-960995574))))) >> (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_31 [i_8] [i_8])) : (var_12)))))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (+(((((/* implicit */_Bool) min((arr_34 [(unsigned short)4] [i_8] [i_8]), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) arr_29 [2ULL] [2ULL])) : ((~(((/* implicit */int) (unsigned char)174)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 2; i_11 < 12; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            {
                                arr_41 [i_8] [i_9] [i_8] [i_11 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_8] [i_11 + 1] [i_11 + 1] [i_11 + 1])) ? (((((/* implicit */_Bool) arr_37 [i_8] [i_11 + 1] [i_11 + 1] [i_12])) ? (arr_37 [i_8] [i_11 + 1] [i_11 + 1] [i_11]) : (arr_37 [i_8] [i_11 + 1] [i_11 + 1] [(unsigned short)9]))) : (((((/* implicit */_Bool) arr_37 [i_8] [i_11 + 1] [i_11 + 1] [i_12])) ? (arr_37 [i_8] [i_11 + 1] [i_11 + 1] [(_Bool)1]) : (-3874358457037967465LL)))));
                                var_25 *= ((/* implicit */_Bool) (((!(arr_39 [i_8] [i_9] [i_8] [(unsigned short)2] [i_12]))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))) : (((((/* implicit */_Bool) 3874358457037967445LL)) ? (arr_37 [(unsigned short)12] [i_11 - 2] [i_11 + 3] [i_11 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-15238)))))));
                                arr_42 [i_8] [i_10] [i_8] [i_8] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_36 [i_11 - 2] [i_8])) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_11 - 2] [i_10])))))));
                                arr_43 [i_8] [i_11] [i_10] [i_9] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) (short)-4593))))) ? ((~(((/* implicit */int) arr_39 [6U] [i_9] [i_11 + 3] [i_8] [i_9])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_29 [i_8] [i_8])))) * (((/* implicit */int) arr_36 [i_8] [i_8]))))) ? (((long long int) arr_31 [i_8] [i_10])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_38 [i_10] [i_8] [i_8] [i_9] [i_8])) == (((/* implicit */int) arr_38 [i_10] [i_9] [i_9] [i_8] [i_8]))))))));
                }
            } 
        } 
        arr_44 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11278)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4172347824985313207LL)))) ? ((~(((/* implicit */int) arr_36 [i_8] [i_8])))) : ((~(((/* implicit */int) (_Bool)1))))));
        arr_45 [i_8] = ((/* implicit */unsigned long long int) arr_31 [i_8] [i_8]);
    }
    /* LoopNest 2 */
    for (unsigned short i_13 = 3; i_13 < 17; i_13 += 1) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            {
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_6) * (((/* implicit */int) (unsigned short)0))))) ? (min((1871536497), (min((63), (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned short)61808)))))));
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (signed char)105))));
                arr_50 [i_13] [i_13] [i_13] = ((/* implicit */long long int) min((((unsigned char) (short)-25596)), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28944))) <= (-9098217070641670265LL))))));
            }
        } 
    } 
}
