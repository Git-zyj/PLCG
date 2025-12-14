/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98927
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)194))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) arr_0 [i_0])))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_18 *= ((/* implicit */unsigned long long int) (unsigned char)171);
        arr_6 [i_1] = ((/* implicit */unsigned char) var_13);
        arr_7 [i_1] |= ((/* implicit */short) (unsigned char)83);
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_9 [(unsigned short)0])) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_2] [(short)20])) == (((/* implicit */int) (unsigned short)511)))))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [17ULL])))))));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                for (short i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    {
                        arr_22 [i_4] = ((/* implicit */long long int) arr_18 [14ULL] [14ULL] [i_4] [i_4 + 1] [i_4] [(unsigned char)16]);
                        arr_23 [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_11 [(_Bool)1] [(unsigned short)20])) ^ (((/* implicit */int) ((signed char) (signed char)126)))))), (min(((~(var_6))), (((/* implicit */long long int) (unsigned char)173))))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (unsigned char)171)) : (1359315449)))) ? (((/* implicit */int) arr_19 [i_2] [i_3] [(_Bool)1] [i_4])) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_3 - 3] [i_4 - 1])) == (((/* implicit */int) arr_8 [i_3 + 2] [i_4 + 2])))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_2])) >= (var_12)))), (var_5)))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((short) arr_21 [9] [3] [3] [i_2] [i_2])))));
            arr_24 [i_2] = (unsigned char)194;
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)83)) || (((/* implicit */_Bool) 9223372036854775807LL))));
        }
        for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            var_23 ^= min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [3U] [i_6])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) arr_8 [i_2] [i_6]))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        {
                            arr_36 [(short)15] [i_6] [(short)15] [i_6] [(_Bool)1] [i_9] = ((/* implicit */unsigned long long int) arr_29 [i_2] [i_7] [i_9]);
                            var_24 &= ((/* implicit */_Bool) (~(arr_34 [i_2] [i_9] [i_2] [(unsigned char)12] [i_9])));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)84)))))));
            }
            for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                var_26 = ((/* implicit */unsigned char) arr_19 [i_2] [21ULL] [i_6] [i_6]);
                var_27 = min((((((/* implicit */_Bool) (unsigned short)0)) ? (((long long int) var_4)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) arr_8 [i_2] [i_6]))))))), (((/* implicit */long long int) arr_15 [15] [i_6] [(_Bool)1] [(unsigned short)4])));
            }
            for (int i_11 = 1; i_11 < 21; i_11 += 2) 
            {
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_15 [i_2] [(unsigned char)11] [8ULL] [8ULL]))));
                var_29 ^= ((/* implicit */_Bool) min((arr_28 [i_11 - 1] [2] [i_11 - 1] [i_11 + 1]), (((/* implicit */long long int) ((unsigned char) ((int) var_5))))));
            }
            for (signed char i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                arr_43 [i_2] [i_2] [i_6] = ((/* implicit */short) 9223372036854775807LL);
                var_30 = ((((/* implicit */_Bool) ((arr_39 [i_2]) / (arr_39 [i_12])))) ? (((-9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)119))))) : (min((arr_39 [i_6]), (arr_39 [i_6]))));
                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [(short)15] [i_12])))))))))));
                arr_44 [i_6] [i_12] [i_12] [i_12] = (+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_35 [2U] [i_2] [i_2] [i_2] [i_2] [i_2])))));
            }
            arr_45 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_2] [i_6] [i_6]))) > (var_11))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((short) var_0)))))) || (((((/* implicit */int) (short)-19506)) >= (((/* implicit */int) arr_12 [i_6]))))));
            arr_46 [i_6] [(_Bool)1] = ((/* implicit */int) arr_8 [i_2] [i_2]);
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 1; i_13 < 20; i_13 += 3) 
        {
            arr_49 [i_13] = ((/* implicit */unsigned long long int) (signed char)98);
            var_32 = ((/* implicit */_Bool) var_13);
        }
    }
    /* LoopNest 3 */
    for (signed char i_14 = 3; i_14 < 19; i_14 += 3) 
    {
        for (unsigned short i_15 = 2; i_15 < 18; i_15 += 4) 
        {
            for (unsigned char i_16 = 3; i_16 < 16; i_16 += 2) 
            {
                {
                    var_33 = ((/* implicit */unsigned char) var_13);
                    arr_59 [i_16] [i_16] [i_15] [i_16] |= 1841378808;
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)168), ((unsigned char)84)))) < (((((/* implicit */int) (unsigned char)240)) & (((/* implicit */int) (unsigned char)43))))));
                    var_35 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_13 [1ULL] [2ULL])) >> (((((/* implicit */int) (unsigned char)240)) - (239)))))))) - (min((min((((/* implicit */long long int) var_12)), (var_4))), (((/* implicit */long long int) var_15))))));
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */short) var_15);
    var_37 = ((/* implicit */_Bool) var_10);
}
