/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8435
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                arr_9 [(_Bool)1] [(_Bool)1] [i_0] &= ((arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 1]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22400))));
                arr_10 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-19968)))))));
                /* LoopSeq 3 */
                for (long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0]))) : (var_1)));
                        arr_17 [i_0] [i_1 - 1] [i_1 - 1] [i_1] [i_3 + 1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-97)) / (((/* implicit */int) (short)24823))));
                    }
                    arr_18 [i_0] [i_1] [i_2 + 1] [i_3 - 1] = ((/* implicit */int) (-(arr_4 [i_1])));
                }
                for (short i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    var_13 = ((/* implicit */short) var_1);
                    arr_22 [i_0] [i_0] [18LL] [i_5] [i_1] = ((/* implicit */long long int) arr_11 [i_0] [i_1]);
                    var_14 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [(unsigned short)15] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
                    var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_1 + 1] [i_2 - 1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))) : (arr_6 [i_1 + 1] [i_2] [i_2 + 1])));
                }
                for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    var_16 -= ((/* implicit */short) ((arr_19 [i_1 + 1] [i_0]) + (((/* implicit */int) var_5))));
                    var_17 = (signed char)96;
                }
            }
            for (long long int i_7 = 2; i_7 < 19; i_7 += 3) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned int) (short)7356);
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-71))));
                            var_20 = ((/* implicit */unsigned long long int) (signed char)83);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_13 [i_1 - 1] [i_0] [i_1 - 1] [i_1 - 1] [i_7 + 1] [i_7 + 1]), (var_9)))) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_1] [i_0] [8ULL] [i_1 - 1] [i_7 - 2] [8ULL])) != (((/* implicit */int) arr_13 [i_1 - 1] [i_0] [i_1 - 1] [i_1 - 1] [i_7 - 2] [2ULL]))))) : (((/* implicit */int) ((unsigned char) -5LL))))))));
            }
            /* vectorizable */
            for (long long int i_10 = 2; i_10 < 19; i_10 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */_Bool) max((var_22), (((_Bool) 5553816926310481670ULL))));
                arr_38 [i_1] [i_1] [i_1] [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-97))));
                var_23 -= ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 + 1] [i_10 - 1]);
            }
            for (int i_11 = 1; i_11 < 21; i_11 += 1) 
            {
                var_24 = ((/* implicit */unsigned long long int) (~(max((((-2344177682950360087LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-92))))), (var_11)))));
                arr_41 [(unsigned char)21] [i_1] [i_1] [i_11 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_1 + 1] [i_1 + 1] [8LL]))) ? (arr_35 [19] [i_1 + 1] [i_11 + 2] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176)))));
            }
            arr_42 [17LL] [i_1] [(unsigned char)17] = ((/* implicit */int) ((2344177682950360086LL) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)96))))))));
        }
        for (short i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            arr_45 [4] [7ULL] = ((/* implicit */unsigned long long int) ((((long long int) arr_0 [i_0])) != (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
            var_25 = ((/* implicit */int) (-(7470385514979487138LL)));
        }
        var_26 -= ((/* implicit */short) min((9886799555348356418ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_0] [i_0])) ? (3678304768U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))))))));
        var_27 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(var_4)))) != (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)-24823)) : (((/* implicit */int) (signed char)-87))))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_37 [(short)8] [i_0] [i_0]) != (var_10))))) : (arr_36 [i_0] [i_0] [i_0] [(unsigned short)18])))));
        var_28 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (signed char)-117)), (5553816926310481646ULL))), (((((/* implicit */_Bool) arr_43 [i_0])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_43 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_14 = 2; i_14 < 22; i_14 += 4) 
            {
                var_29 -= ((/* implicit */unsigned char) min((((_Bool) ((signed char) (signed char)97))), (((arr_33 [i_0] [14LL] [i_0] [i_13] [i_14 - 1]) != (((/* implicit */unsigned int) 1176714120))))));
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_0] [i_13] [i_0] [1LL])) ? (((/* implicit */long long int) max((arr_50 [i_0] [i_13] [i_14 + 1]), (((/* implicit */unsigned int) var_10))))) : (max((((/* implicit */long long int) var_6)), (var_1)))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_16 = 0; i_16 < 23; i_16 += 2) 
                {
                    arr_55 [i_0] [(_Bool)0] [i_15] [i_16] [(unsigned char)2] = ((((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_32 [(signed char)3] [i_13] [i_15] [7ULL] [i_13])) : (((/* implicit */int) ((((/* implicit */int) (signed char)77)) != (var_10)))));
                    var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                }
                arr_56 [i_0] [i_13] [(short)20] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_29 [i_15] [i_13] [i_0])) != (arr_43 [i_0])));
            }
            for (unsigned short i_17 = 0; i_17 < 23; i_17 += 2) 
            {
                var_32 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) ((signed char) 12892927147399069953ULL))) != (var_10))))));
                arr_59 [3U] [i_13] [i_17] &= ((/* implicit */short) 18446744073709551610ULL);
            }
            var_33 = ((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */unsigned short) (short)23620)), (arr_51 [i_0])))), (((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_13])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))));
            var_34 = ((/* implicit */short) (~((-(arr_35 [i_0] [i_0] [(_Bool)1] [i_0])))));
        }
        for (long long int i_18 = 0; i_18 < 23; i_18 += 3) 
        {
            var_35 = ((/* implicit */short) var_8);
            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) max((((/* implicit */long long int) ((_Bool) ((var_4) ? (arr_29 [i_0] [i_18] [(short)1]) : (var_11))))), (max((7555184600065753387LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_0] [(unsigned short)18] [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)10])) : (((/* implicit */int) (signed char)71))))))))))));
        }
    }
    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) var_5))));
}
