/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87594
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
    var_12 = 34797506432286363LL;
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_1 [i_0])) << ((((~(0ULL))) - (18446744073709551597ULL)))))))));
        arr_2 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((arr_0 [i_0]) + (5143883085495710643LL)))))) ? (((arr_1 [i_0]) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : ((~(-1047400259486129642LL)))))) ? (max((((arr_1 [i_0]) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))))) : (arr_0 [i_0])))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((((arr_0 [i_0]) + (5143883085495710643LL))) - (8260891621489655478LL)))))) ? (((arr_1 [i_0]) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : ((~(-1047400259486129642LL)))))) ? (max((((arr_1 [i_0]) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))))) : (arr_0 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) max((arr_3 [i_1]), (arr_3 [i_1])))) ? (((/* implicit */long long int) (-(arr_3 [i_1])))) : (arr_4 [i_1])))));
        var_14 = ((/* implicit */short) 2305843009213693951ULL);
        arr_7 [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) (-(16140901064495857657ULL)))) ? (((/* implicit */long long int) ((((arr_5 [i_1]) + (2147483647))) >> (((arr_5 [i_1]) + (980025781)))))) : ((+(7523804362805980937LL)))))));
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29659)) ? ((-(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_8)) : (arr_3 [i_1]))))) : (((/* implicit */int) ((((var_6) ? (arr_4 [i_1]) : (4284988926034581879LL))) < (arr_4 [i_1]))))));
        var_15 = ((/* implicit */long long int) (_Bool)0);
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) (((~((~(arr_3 [i_2]))))) ^ (((/* implicit */int) ((unsigned short) arr_4 [i_2])))));
        arr_12 [i_2] = ((/* implicit */signed char) (-((-(arr_3 [i_2])))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_13 [i_3])) & (-34797506432286376LL))))));
            arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_3 + 1] [i_4])) | (arr_3 [i_3 + 1])));
            var_17 ^= (-(-34797506432286362LL));
        }
        for (int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
        {
            arr_21 [i_3] [i_3] [i_5] = ((16140901064495857664ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))));
            var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-6077))));
            var_19 *= ((/* implicit */unsigned char) arr_19 [i_3] [i_5] [i_3 + 1]);
            var_20 = ((/* implicit */long long int) (((~(((/* implicit */int) var_8)))) != ((-(((/* implicit */int) var_8))))));
        }
        for (int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))));
            var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) arr_4 [i_3])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) (~(arr_5 [i_6]))))))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            arr_29 [i_3] [i_7] [i_7] |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_23 [i_3 + 1] [i_3 - 1] [i_3 + 1]))));
            /* LoopSeq 3 */
            for (long long int i_8 = 2; i_8 < 17; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    var_23 = ((/* implicit */unsigned long long int) arr_31 [i_7] [i_7]);
                    arr_36 [i_9] [i_9] [i_8] [i_7] [i_3] [i_3] = ((/* implicit */unsigned short) ((long long int) var_7));
                }
                var_24 = ((((/* implicit */_Bool) arr_5 [i_8 - 2])) ? (var_2) : ((-(34797506432286375LL))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                var_25 ^= ((/* implicit */unsigned short) 1496753493);
                var_26 = ((/* implicit */unsigned long long int) arr_14 [i_3 - 1] [16]);
            }
            for (short i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                var_27 = ((/* implicit */long long int) min((var_27), ((-(arr_4 [i_3 - 1])))));
                arr_42 [i_7] [i_11] = ((/* implicit */signed char) (-(arr_4 [i_3 - 1])));
                var_28 = ((/* implicit */signed char) var_8);
                arr_43 [i_3 + 1] [i_7] = ((short) var_3);
                arr_44 [i_3] [i_7] = (((!(((/* implicit */_Bool) arr_41 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_11])))) ? (1047400259486129641LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_3 + 1] [i_7] [i_11] [i_11])))))));
            }
        }
        for (signed char i_12 = 4; i_12 < 19; i_12 += 3) 
        {
            arr_49 [i_3] [i_12] [i_3] = ((/* implicit */int) ((unsigned short) arr_3 [i_12 - 1]));
            arr_50 [i_3] [10LL] &= ((/* implicit */unsigned char) ((unsigned short) (unsigned short)65535));
            var_29 = ((/* implicit */short) ((arr_24 [i_3] [i_3] [i_3]) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_12 - 1]))))));
        }
        for (unsigned short i_13 = 4; i_13 < 19; i_13 += 1) 
        {
            arr_55 [i_13] = ((/* implicit */_Bool) arr_26 [i_3]);
            arr_56 [i_3] [i_13] [i_3 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294967292ULL))));
        }
        arr_57 [i_3 + 1] |= ((/* implicit */int) (signed char)-41);
        var_30 = ((/* implicit */unsigned short) (-2147483647 - 1));
    }
}
