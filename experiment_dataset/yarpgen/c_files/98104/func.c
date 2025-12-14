/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98104
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) 1858295030U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-21372)) : (((/* implicit */int) var_6))))) : (max((4294967295U), (var_10)))))) ? ((-((-(18446744073709551592ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1))));
        arr_3 [i_0] [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [(unsigned char)10] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) max(((_Bool)0), (var_5)))), (arr_6 [i_1] [i_1]))))) : (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) * (2436672262U))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) > (1858295020U)))) + (((/* implicit */int) (_Bool)1))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) max((max((((var_5) ? (((/* implicit */int) (_Bool)1)) : (var_0))), ((+(var_7))))), (((/* implicit */int) var_8))));
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 14; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                {
                    arr_18 [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) var_0)))))) > (min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_2))))), ((~(2436672266U)))))));
                    arr_19 [i_1] [i_2] = ((/* implicit */int) arr_13 [(signed char)5] [i_2] [i_3]);
                    arr_20 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (max((((/* implicit */unsigned long long int) var_7)), (min((((/* implicit */unsigned long long int) arr_15 [i_2])), (14310120336658960229ULL)))))));
                }
            } 
        } 
        arr_21 [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)56)) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_4 = 4; i_4 < 12; i_4 += 3) 
    {
        arr_25 [(unsigned char)12] |= ((/* implicit */_Bool) var_6);
        arr_26 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)236)) > (((/* implicit */int) arr_11 [i_4 + 1])))))) : (14700421379348270416ULL)))) ? (((((((/* implicit */int) arr_13 [(signed char)9] [i_4] [i_4])) != (((/* implicit */int) var_1)))) ? (((/* implicit */int) arr_12 [i_4] [i_4] [i_4 - 1])) : (arr_16 [i_4 - 3] [i_4 - 4] [i_4 - 1] [i_4]))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_4] [i_4]), (((/* implicit */unsigned char) (_Bool)1)))))) <= (((arr_23 [i_4]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)16384))))))))));
    }
    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        arr_29 [(unsigned short)13] [i_5 + 2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(4294967295U)))) ? (arr_28 [i_5 + 3]) : (((/* implicit */unsigned long long int) ((var_0) & (((/* implicit */int) var_5)))))))));
        /* LoopSeq 2 */
        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 4) 
        {
            arr_34 [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) var_8)))));
            arr_35 [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-16359))));
            /* LoopNest 2 */
            for (signed char i_7 = 3; i_7 < 21; i_7 += 1) 
            {
                for (unsigned int i_8 = 1; i_8 < 21; i_8 += 4) 
                {
                    {
                        arr_41 [i_7] [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) (_Bool)1)))));
                        arr_42 [i_5] [i_7] [i_7] [i_7] = ((/* implicit */signed char) max((14310120336658960248ULL), (min((arr_31 [i_8 + 2] [i_6 + 2] [i_5 + 4]), (arr_31 [i_8 + 2] [i_6 + 1] [i_5 + 1])))));
                        arr_43 [i_5 + 3] [i_7] [5U] [i_8 + 2] [i_8 + 2] = ((/* implicit */unsigned char) (short)18381);
                    }
                } 
            } 
            arr_44 [13LL] [13LL] [13LL] = ((/* implicit */short) var_8);
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned char i_10 = 2; i_10 < 20; i_10 += 2) 
                {
                    for (signed char i_11 = 1; i_11 < 19; i_11 += 3) 
                    {
                        {
                            arr_52 [i_5] [i_6] [i_5] [i_9] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) min((0), (((/* implicit */int) arr_51 [i_5] [i_6] [i_5] [13] [i_6]))))) >= (min((var_9), (((/* implicit */unsigned long long int) (_Bool)1))))))) == (min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (arr_39 [(short)2] [i_6] [(short)2] [i_11 + 4])))));
                            arr_53 [i_5] = ((/* implicit */int) var_8);
                            arr_54 [i_5 + 3] [i_6] [i_5 + 3] [i_10 + 1] [i_11 + 1] [21] = ((/* implicit */signed char) ((int) ((arr_32 [i_6 + 2]) ? (((/* implicit */int) arr_32 [i_6 + 1])) : (((/* implicit */int) arr_32 [i_6 + 2])))));
                            arr_55 [i_5] [i_6] [i_9] [i_10] [i_9] [10U] [i_11 + 1] = ((/* implicit */short) (((+(((/* implicit */int) arr_27 [i_6 + 3] [i_5 + 3])))) == ((~((~(arr_46 [i_5])))))));
                            arr_56 [i_11] [i_11] [i_10] [i_10] [i_5 + 3] [12ULL] [i_5 + 3] = ((/* implicit */unsigned char) ((14310120336658960229ULL) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)31377)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            arr_60 [i_12] [i_5 + 1] = ((/* implicit */unsigned int) (+(arr_30 [i_5 - 1])));
            arr_61 [i_5 + 1] [i_12] = ((/* implicit */_Bool) ((signed char) ((signed char) (unsigned short)32768)));
        }
        /* LoopSeq 1 */
        for (signed char i_13 = 4; i_13 < 21; i_13 += 1) 
        {
            arr_65 [i_5 + 4] [i_5 + 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_13 - 1] [i_5 + 2] [i_5 + 3])) ? (arr_36 [i_13 - 4] [i_5 + 1] [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? ((~(var_4))) : (((/* implicit */long long int) min((arr_36 [i_13 - 3] [i_5 + 4] [i_5 + 3]), (arr_36 [i_13 - 3] [i_5 + 1] [i_5 + 3]))))));
            arr_66 [i_5 + 4] [i_5 + 4] = ((/* implicit */int) max((((((/* implicit */_Bool) ((arr_63 [i_5] [i_5] [i_5 + 3]) - (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [(signed char)17] [(signed char)17] [i_13]))) : (min((((/* implicit */unsigned long long int) 3972462763U)), (var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_5] [i_13] [i_13] [i_13] [(signed char)3]))) : (var_10)))) && (((/* implicit */_Bool) arr_30 [i_5 + 2])))))));
            arr_67 [i_5] [i_5] [i_13] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_40 [i_5] [i_5 + 1])))) / ((~(arr_28 [i_5 + 4])))));
        }
        arr_68 [9LL] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) (~(var_9))))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_57 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)109)))))) || (((/* implicit */_Bool) var_7)))))));
        arr_69 [i_5] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_64 [i_5] [i_5 + 4])))));
    }
    var_12 = ((/* implicit */unsigned int) var_2);
}
