/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90875
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) 12587928418012121924ULL);
                var_12 = min((((/* implicit */short) var_6)), (arr_5 [i_0] [i_0] [i_0]));
            }
        } 
    } 
    var_13 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32045)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12992)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 2; i_4 < 13; i_4 += 3) 
            {
                arr_13 [i_3] [i_3] [i_4 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_12 [i_4 - 2] [i_4] [1LL] [i_4]), (arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4])))) % ((-(((((/* implicit */_Bool) (unsigned char)23)) ? (var_7) : (((/* implicit */int) (short)-32043))))))));
                arr_14 [i_3] = ((/* implicit */unsigned short) ((((_Bool) arr_6 [i_4 - 1])) ? (((arr_8 [i_4] [(_Bool)1]) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [(signed char)5])), (arr_0 [i_3]))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_4 + 1])) | (((/* implicit */int) arr_10 [i_4 + 1])))))));
            }
            for (int i_5 = 1; i_5 < 11; i_5 += 1) 
            {
                arr_17 [i_2] [i_3] [(_Bool)1] [i_5] = ((/* implicit */unsigned int) arr_9 [i_5 + 2]);
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 13; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        {
                            var_14 &= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_22 [i_6 - 1] [i_6 - 1] [(_Bool)1] [(_Bool)1] [(unsigned char)3]), (((/* implicit */unsigned short) arr_18 [4] [i_6] [i_6 + 1] [i_6] [i_6] [i_6]))))) ? ((~(((/* implicit */int) arr_22 [i_6] [i_6 - 1] [i_6] [i_6] [i_6])))) : (((int) 2667987679U))));
                            arr_23 [i_2] [i_3] [(short)0] [i_6] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_3] [i_5]))))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_2] [i_3] [4ULL]))) : ((+(((/* implicit */int) var_0))))))));
                            arr_24 [i_2] [i_3] [i_2] [i_6] [i_3] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_4 [i_2] [i_5 + 2]) : (arr_4 [i_2] [i_5 - 1])))) && (((/* implicit */_Bool) var_1))));
                            arr_25 [i_3] = ((/* implicit */short) ((long long int) arr_20 [i_6 + 1] [i_3] [i_5]));
                            arr_26 [i_3] [i_6] [6U] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [(signed char)13] [i_2])) ? (((/* implicit */unsigned long long int) arr_15 [i_2] [(unsigned short)3] [i_2])) : ((-(arr_3 [(unsigned short)9] [13])))));
                        }
                    } 
                } 
            }
            arr_27 [i_3] = ((/* implicit */short) ((arr_4 [i_2] [i_2]) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_3])) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_12 [i_2] [i_3] [13LL] [i_2])))))));
        }
        for (int i_8 = 2; i_8 < 13; i_8 += 3) 
        {
            var_15 = 8901261860159179647LL;
            var_16 |= ((/* implicit */int) (+(((arr_28 [i_8 - 2] [i_8 + 1]) + (arr_28 [i_8 - 2] [i_8 - 1])))));
            var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_2] [i_8 + 1])) && (((/* implicit */_Bool) arr_7 [i_2] [i_8 + 1])))) ? ((+(arr_21 [i_8] [i_2] [i_8 + 1] [i_2] [i_8 + 1] [i_8 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_28 [i_8 - 1] [i_8 - 2]) <= (((/* implicit */long long int) ((var_4) << (((((/* implicit */int) var_2)) - (125))))))))))));
        }
        for (int i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */short) (+(((/* implicit */int) max((arr_0 [12]), (max(((unsigned short)55066), (((/* implicit */unsigned short) var_6)))))))));
            arr_32 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((arr_28 [i_9] [i_9]) + (arr_4 [0ULL] [i_9])))))) != (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [(signed char)5])) ? (((/* implicit */int) (short)24437)) : (((/* implicit */int) (signed char)12))))), (arr_6 [i_2])))));
            var_19 = ((/* implicit */unsigned long long int) (unsigned char)84);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    for (int i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        {
                            arr_44 [i_13] [1U] [i_10] = ((/* implicit */int) arr_22 [i_13] [i_12] [(unsigned short)13] [i_2] [i_2]);
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_42 [i_11 - 1] [i_11 - 1] [i_11 - 1])) == (((/* implicit */int) arr_42 [i_11 - 1] [i_11] [i_11 - 1]))));
                        }
                    } 
                } 
            } 
            arr_45 [(signed char)5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_2] [i_10]))) ^ (arr_39 [i_2])));
            /* LoopNest 3 */
            for (unsigned short i_14 = 3; i_14 < 10; i_14 += 4) 
            {
                for (unsigned short i_15 = 0; i_15 < 14; i_15 += 3) 
                {
                    for (int i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) arr_39 [i_16]);
                            arr_54 [i_15] [1] [i_15] = ((/* implicit */unsigned short) arr_19 [i_15] [i_14] [i_14] [i_15] [i_10]);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_17 = 0; i_17 < 14; i_17 += 2) 
            {
                for (unsigned short i_18 = 3; i_18 < 13; i_18 += 3) 
                {
                    for (unsigned short i_19 = 0; i_19 < 14; i_19 += 3) 
                    {
                        {
                            var_22 += ((/* implicit */_Bool) ((signed char) arr_28 [i_18 - 3] [i_18 - 3]));
                            arr_63 [i_10] [(unsigned short)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_18 - 2] [i_18 + 1])) ? (((/* implicit */long long int) ((((arr_52 [i_19] [(short)1] [(short)9]) + (2147483647))) >> (((((/* implicit */int) arr_36 [i_2] [(unsigned short)3] [i_2])) - (22273)))))) : (arr_11 [i_18 + 1] [i_18 - 3])));
                        }
                    } 
                } 
            } 
        }
        arr_64 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_53 [i_2] [i_2] [i_2] [i_2] [i_2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [(short)11]))) : (max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2])))));
    }
}
