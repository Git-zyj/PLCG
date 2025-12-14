/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90007
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
    var_19 = ((/* implicit */short) ((((((7470289398566112305LL) / (((/* implicit */long long int) ((/* implicit */int) (short)32757))))) * (((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_13))))))) >> (((/* implicit */int) min((((/* implicit */signed char) ((var_13) || (var_6)))), (max((var_11), (((/* implicit */signed char) var_7)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-113)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            arr_5 [i_1] [i_0] = ((((/* implicit */_Bool) 0U)) ? (arr_2 [i_1 + 2]) : (arr_2 [i_1 + 2]));
            /* LoopSeq 3 */
            for (int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                arr_9 [4ULL] [i_1] [i_1] [i_1] = ((((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (10632521589404065730ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_0])))))));
                var_21 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_17)) : (arr_6 [i_0] [i_1] [i_1] [i_2])))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [i_2])));
                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (192549225053052451ULL))) ? (((/* implicit */long long int) 1882675964U)) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (arr_3 [i_0] [i_1] [i_2 + 1])))));
            }
            for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                arr_12 [i_3] [i_3] [i_3] [(unsigned char)10] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % ((+(2412291346U)))));
                arr_13 [i_1 - 1] [i_3] [12LL] [i_0] = ((/* implicit */unsigned long long int) var_6);
                var_23 |= ((/* implicit */int) ((arr_6 [i_0] [i_0] [i_1 + 2] [i_3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_1 - 1] [i_1 + 1] [i_1 + 1])))));
            }
            for (int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_7 [i_1 + 2] [i_1] [i_4] [i_0]))));
                arr_16 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_0] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)117)))))) ? (arr_14 [i_0] [i_1 - 1] [(_Bool)1]) : (((((/* implicit */int) arr_1 [i_4])) >> (((/* implicit */int) var_13))))));
                arr_17 [i_4] [i_1] = ((/* implicit */long long int) var_11);
            }
        }
        for (signed char i_5 = 2; i_5 < 12; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                arr_24 [i_5] [i_5 - 1] [i_6] = ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)64)))))))) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) != (((unsigned long long int) var_8))))));
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_5 + 1] [i_5 + 1] [i_5 - 1])) ? (((int) arr_20 [i_5 + 1] [i_5 + 1] [i_5 - 1])) : ((+(((/* implicit */int) arr_20 [i_5 + 1] [i_5 + 1] [i_5 - 1]))))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (signed char i_8 = 1; i_8 < 10; i_8 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) var_17);
                            var_27 = ((/* implicit */signed char) (((-(((4ULL) * (((/* implicit */unsigned long long int) 730220266503540841LL)))))) >> (((/* implicit */int) max((min((arr_21 [i_0] [4LL] [i_6] [i_8 + 3]), (arr_4 [i_8 - 1]))), (((/* implicit */signed char) ((((/* implicit */int) var_5)) < (((/* implicit */int) (signed char)61))))))))));
                            arr_32 [i_0] [i_8 + 3] [i_6] [i_5] [i_8] [i_5] = ((/* implicit */int) arr_2 [i_6]);
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_5 - 1] [5ULL])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-1)), (7162288545987350743LL)))) && (((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned short) var_5))))))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    {
                        var_29 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) (unsigned short)45755)), (min((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))))) >= (((unsigned int) ((((/* implicit */_Bool) arr_15 [i_10] [i_9] [i_0])) ? (((/* implicit */int) arr_8 [i_10] [i_5 + 1])) : (((/* implicit */int) var_2)))))));
                        var_30 ^= ((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)7577)) < (((/* implicit */int) (signed char)86))))), ((unsigned short)8064)));
                    }
                } 
            } 
            var_31 &= ((/* implicit */int) var_6);
        }
        for (int i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            var_32 &= ((/* implicit */signed char) min((((/* implicit */int) (signed char)107)), (-10)));
            arr_41 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((max((arr_19 [i_0]), (((/* implicit */unsigned int) var_11)))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_11])) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) var_7))))))))));
        }
    }
    for (unsigned char i_12 = 3; i_12 < 13; i_12 += 3) 
    {
        var_33 = ((/* implicit */_Bool) max((((/* implicit */int) var_16)), ((~(((/* implicit */int) min((arr_45 [i_12] [i_12 - 2]), (((/* implicit */unsigned short) var_12)))))))));
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            for (signed char i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                {
                    arr_54 [i_12] [i_12 + 2] [i_12 + 1] [(short)3] = ((/* implicit */long long int) (+(max((arr_50 [i_14] [i_13] [i_12] [i_12]), (((/* implicit */unsigned long long int) ((var_5) || (((/* implicit */_Bool) 8428883770621108624ULL)))))))));
                    arr_55 [i_12 + 1] [i_12 - 1] [i_12] = var_15;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_12 + 1])) ? (((/* implicit */int) (unsigned char)50)) : ((~(((/* implicit */int) arr_45 [i_12 + 2] [i_14]))))));
                        arr_58 [i_12] [i_13] [i_14] [i_15] [i_15] = ((/* implicit */signed char) (((+(var_1))) / (((/* implicit */long long int) ((/* implicit */int) arr_49 [10LL] [i_12 - 3])))));
                        arr_59 [i_13 + 1] [i_14] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_57 [i_13 + 1] [i_15] [i_15] [i_15]))));
                    }
                }
            } 
        } 
        arr_60 [i_12 + 1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-1))))), (-7636028169153881430LL)));
    }
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_35 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_16])) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) var_12))))) ? (arr_18 [i_16] [2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
        arr_63 [(unsigned char)2] |= ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_16] [i_16])) ^ (((/* implicit */int) ((unsigned char) arr_29 [i_16] [i_16] [i_16] [i_16] [i_16])))));
    }
    var_36 = ((/* implicit */unsigned int) ((((var_6) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12ULL)))))) : (((long long int) var_11)))) == (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    var_37 ^= ((/* implicit */signed char) 769582428);
}
