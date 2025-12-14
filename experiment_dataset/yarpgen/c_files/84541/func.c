/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84541
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [(_Bool)1] [(_Bool)1] [i_1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */long long int) 2860225291U)) : (9223372036854775793LL))) : (3580661256793858617LL)))));
                arr_7 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)14884)), (arr_4 [i_0] [i_0] [i_1])))) ? (((/* implicit */int) arr_3 [i_0])) : (((int) ((short) var_7))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_3] [8LL] [i_0] [11] = ((/* implicit */short) max((((arr_10 [i_0] [i_2] [i_0]) ^ (((/* implicit */int) max((((/* implicit */short) arr_3 [i_2])), (arr_0 [i_3])))))), (((/* implicit */int) ((_Bool) (short)8110)))));
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) ((((_Bool) min((arr_1 [i_3]), (arr_1 [i_0])))) ? (((/* implicit */int) ((arr_9 [i_3 + 3] [i_3 + 3]) > (arr_9 [i_3 + 2] [i_3 + 2])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_3 + 3])) <= (((/* implicit */int) (short)-27477)))))));
                            arr_16 [i_3] = ((/* implicit */_Bool) var_8);
                            var_13 -= ((/* implicit */_Bool) arr_1 [i_1]);
                            arr_17 [7U] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (-9223372036854775793LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_4 = 3; i_4 < 16; i_4 += 4) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (~(((/* implicit */int) arr_1 [i_4 - 2])))))));
        arr_22 [i_4] [i_4] = ((/* implicit */_Bool) -9223372036854775791LL);
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
    {
        var_16 += ((/* implicit */short) (+(((arr_21 [i_5]) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (int i_7 = 3; i_7 < 10; i_7 += 3) 
            {
                {
                    var_17 -= ((/* implicit */_Bool) ((unsigned short) arr_25 [i_6]));
                    var_18 = ((/* implicit */short) ((arr_3 [i_7 - 2]) ? (((/* implicit */long long int) arr_26 [i_5] [i_5] [i_7 - 2])) : (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_7])))))));
                }
            } 
        } 
        arr_31 [i_5] = ((/* implicit */int) ((unsigned long long int) arr_21 [5ULL]));
        /* LoopSeq 4 */
        for (unsigned char i_8 = 1; i_8 < 10; i_8 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_5]))));
            /* LoopSeq 1 */
            for (long long int i_9 = 2; i_9 < 9; i_9 += 4) 
            {
                arr_38 [i_8] [i_9] [i_8] = ((/* implicit */long long int) (_Bool)1);
                arr_39 [i_8] = ((/* implicit */_Bool) arr_23 [i_8]);
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    for (short i_11 = 4; i_11 < 10; i_11 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */short) (-(((/* implicit */int) arr_33 [i_8]))));
                            arr_44 [i_8] = ((long long int) var_1);
                            var_21 = (!(((/* implicit */_Bool) arr_40 [i_5] [i_8 - 1] [i_9] [i_10] [i_10] [i_8])));
                            arr_45 [i_5] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((unsigned short) (unsigned short)50079))) : (((/* implicit */int) ((_Bool) (unsigned short)2983)))));
                            arr_46 [i_5] [i_8] [i_5] [i_5] [i_10] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-27477))));
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_12 = 4; i_12 < 8; i_12 += 3) /* same iter space */
        {
            arr_50 [i_5] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (arr_21 [8U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_5]))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 9223372036854775788LL))))));
            var_22 ^= (~(arr_9 [i_5] [i_12 - 3]));
        }
        for (unsigned long long int i_13 = 4; i_13 < 8; i_13 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_14 = 3; i_14 < 10; i_14 += 1) 
            {
                for (int i_15 = 1; i_15 < 9; i_15 += 4) 
                {
                    for (short i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        {
                            arr_64 [i_5] [i_5] [i_14 - 1] [i_15] [i_13] |= ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
                            arr_65 [i_5] [i_13] [7] [i_15] [i_16] [i_5] [7] = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_5] [i_5])) <= (((/* implicit */int) arr_29 [i_13 + 3] [i_15 - 1]))));
                            var_23 = ((/* implicit */unsigned int) -7666919837030476816LL);
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_5])) ? (((/* implicit */int) ((_Bool) var_1))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
            arr_66 [i_5] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_53 [i_5] [i_13 - 4] [i_13] [i_13 - 2])) && (arr_28 [i_5])));
        }
        for (unsigned char i_17 = 2; i_17 < 9; i_17 += 2) 
        {
            /* LoopNest 2 */
            for (short i_18 = 1; i_18 < 9; i_18 += 3) 
            {
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_75 [i_18] = ((signed char) (short)-32760);
                        arr_76 [i_19] [(short)7] [i_5] [i_5] = ((/* implicit */short) arr_32 [i_18 - 1] [i_17]);
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned short) arr_35 [i_17 - 1] [i_5] [i_5]);
        }
    }
    /* vectorizable */
    for (unsigned int i_20 = 0; i_20 < 11; i_20 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned int) (short)-1);
        /* LoopSeq 1 */
        for (long long int i_21 = 0; i_21 < 11; i_21 += 3) 
        {
            var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_20]))));
            arr_82 [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_20] [i_20])) ? (((/* implicit */unsigned long long int) arr_30 [i_20] [i_20] [i_20] [i_20])) : (arr_68 [(unsigned short)10])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((8795556151296LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            var_28 = ((/* implicit */unsigned int) (short)14884);
        }
        arr_83 [i_20] = ((/* implicit */unsigned short) ((_Bool) var_10));
    }
}
