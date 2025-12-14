/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96455
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
    var_12 = ((/* implicit */long long int) var_1);
    var_13 = ((/* implicit */short) (-((~(var_4)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) ((2017612633061982208LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)6293)))))), (((short) (unsigned char)138))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6294))) ^ (16070385097969040478ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6301)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [(signed char)14] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)1023)) % (2147483647)));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_16 [i_0] [i_0] [i_0] [(unsigned char)4] |= ((/* implicit */_Bool) var_5);
                        arr_17 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) (short)-6294)) : (((/* implicit */int) var_7))))) ? (((int) arr_3 [i_0] [(short)17])) : (max((((var_4) % (((/* implicit */int) (unsigned short)65535)))), (min((var_5), (((/* implicit */int) arr_0 [i_3]))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_21 [i_0] [i_2] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)46)), ((short)-32761)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6289))) : (arr_9 [i_0] [i_2] [i_2] [i_2])))));
                        arr_22 [i_2] [i_2] [i_2] = ((/* implicit */short) var_8);
                        arr_23 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */int) min(((short)-6301), (((/* implicit */short) (signed char)127))))))))));
                        arr_24 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-6282))));
                    }
                }
            } 
        } 
        arr_25 [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)6293), ((short)-6301))))) + (((unsigned long long int) arr_15 [i_0] [i_0] [i_0])))));
        arr_26 [i_0] = ((/* implicit */_Bool) (unsigned char)36);
    }
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        arr_29 [i_5] = ((/* implicit */short) (-((+(((((/* implicit */_Bool) -191072916266681878LL)) ? (16883082796166954990ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                {
                    arr_37 [i_5] [(_Bool)1] [i_7] = ((/* implicit */signed char) ((min((((/* implicit */int) arr_3 [i_6 + 2] [i_6 + 1])), (arr_30 [i_6 - 1]))) >> (((/* implicit */int) ((var_3) > (((/* implicit */int) var_11)))))));
                    arr_38 [i_6] [i_7] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (arr_13 [i_6])))) ? (arr_5 [i_5] [i_5]) : (((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_6 + 1] [i_6 + 1] [i_7] [i_7])) ? (((/* implicit */int) arr_10 [i_7])) : (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) max((min((arr_12 [i_5] [i_5] [i_6] [i_5] [i_5]), (((/* implicit */unsigned short) var_11)))), (((/* implicit */unsigned short) var_2)))))));
                    arr_39 [i_7] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)50880), (((/* implicit */unsigned short) (signed char)-106))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)64957))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5] [i_6] [i_6] [i_7])) ? (arr_14 [i_5] [i_5] [(unsigned short)13] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51)))))) ? (((((/* implicit */_Bool) (unsigned short)16884)) ? (16152296881158542543ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) min((var_5), (var_4))))))));
                    arr_40 [i_7] = ((/* implicit */unsigned char) var_7);
                    arr_41 [i_5] [i_6] [(_Bool)1] [8] = ((/* implicit */signed char) max((arr_1 [i_6]), (((/* implicit */unsigned long long int) ((_Bool) arr_20 [21LL] [i_5] [i_5] [i_5] [i_6] [i_5])))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_8 = 1; i_8 < 13; i_8 += 2) 
        {
            arr_44 [i_5] |= (!(((/* implicit */_Bool) arr_0 [i_8 + 1])));
            arr_45 [7] [7] [7] = ((/* implicit */signed char) ((2147483647) & (((/* implicit */int) (unsigned short)53723))));
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                for (int i_10 = 1; i_10 < 10; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        {
                            arr_55 [(short)2] [i_9] [i_9] [(short)2] [(short)2] [i_5] |= ((/* implicit */_Bool) var_5);
                            arr_56 [i_5] [i_10] [(unsigned short)13] [i_5] [(short)0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_10 + 3] [i_8 + 1] [i_8 - 1]))));
                        }
                    } 
                } 
            } 
            arr_57 [(_Bool)1] [i_5] [i_8] = ((/* implicit */int) (((~(((/* implicit */int) (short)-6293)))) >= (((/* implicit */int) ((unsigned short) arr_2 [i_8])))));
            arr_58 [i_8] = ((/* implicit */unsigned long long int) arr_43 [i_8 - 1] [i_8 - 1] [i_8]);
        }
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            arr_63 [i_5] [12] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (_Bool)1))));
            arr_64 [(unsigned short)3] [i_5] [i_5] = ((/* implicit */_Bool) arr_0 [i_12]);
        }
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_69 [i_13] = ((/* implicit */int) ((((int) arr_59 [i_13])) >= ((~(((/* implicit */int) var_11))))));
            arr_70 [i_5] [i_13] [i_13] = ((/* implicit */_Bool) 2147483647);
            arr_71 [i_13] = ((/* implicit */unsigned short) (-((-(2147483630)))));
        }
        arr_72 [i_5] [i_5] = ((/* implicit */signed char) arr_48 [i_5] [i_5] [i_5] [10ULL]);
        arr_73 [i_5] [7U] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_5] [i_5])) || (((/* implicit */_Bool) arr_68 [i_5]))));
    }
    /* LoopNest 2 */
    for (signed char i_14 = 0; i_14 < 21; i_14 += 1) 
    {
        for (signed char i_15 = 1; i_15 < 17; i_15 += 1) 
        {
            {
                arr_80 [(short)16] = ((/* implicit */long long int) min((((((((/* implicit */_Bool) 18014398507384832ULL)) ? (((/* implicit */int) (short)-22280)) : (((/* implicit */int) arr_77 [i_14])))) + (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) (_Bool)0)))))), ((+(((/* implicit */int) (signed char)-22))))));
                arr_81 [i_14] [i_15] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_2 [i_15 - 1])) - (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
