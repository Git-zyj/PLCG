/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88982
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [20LL] [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    var_11 -= ((/* implicit */unsigned char) arr_1 [i_0]);
                    var_12 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) (signed char)80)))), (((/* implicit */int) arr_3 [i_1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-60)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_1])) >> (((((/* implicit */int) arr_10 [i_1 - 1] [(unsigned char)21] [i_1 - 1])) - (80)))));
                            arr_18 [i_0] [i_1] [i_1] [i_0] [i_3] [(unsigned char)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_3] [i_4] [i_4])) ? (arr_6 [i_2] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        }
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 1]))));
                            arr_22 [i_5] [i_3] [i_0] [i_1] [(short)17] = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) (signed char)68)));
                        }
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((short) arr_0 [i_0])))));
                            var_17 -= ((/* implicit */short) var_1);
                            var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                            var_19 = ((/* implicit */unsigned char) ((unsigned short) (+(25LL))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */short) 0ULL);
                            var_21 = ((/* implicit */unsigned char) (_Bool)1);
                            arr_27 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1])) > (((/* implicit */int) (unsigned char)255))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) ((unsigned short) (signed char)-77));
                            arr_32 [i_0] [i_0] [13LL] [i_3] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_1 [i_1 - 1]);
                        }
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            arr_36 [i_3] [i_0] [i_3] [i_3] [i_3] = ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) var_7))));
                            arr_37 [i_3] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */unsigned short) (signed char)76);
                            arr_38 [i_3] [i_9] [i_1] [3ULL] [i_0] = var_2;
                            arr_39 [i_1] [i_1] [11LL] [i_3] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)65)) && (((/* implicit */_Bool) arr_26 [i_1] [i_2] [i_2] [i_2] [i_2 - 2] [i_2 - 2] [i_1 - 1]))));
                        }
                        arr_40 [i_0] [(_Bool)1] [i_0] [4ULL] = ((/* implicit */short) (~(arr_23 [i_2] [i_3] [i_2 + 1] [i_1 + 1] [i_2 + 1])));
                        arr_41 [i_0] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_2] [i_0] [i_0] [i_3] [i_3])) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_2] [21] [21LL])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)13610)))) : (((((/* implicit */_Bool) arr_30 [i_3] [i_2] [(signed char)16] [i_1] [i_1] [(signed char)16] [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_15 [i_2] [i_0] [i_1]))))));
                    }
                    var_23 ^= ((/* implicit */short) ((unsigned short) (unsigned short)55681));
                }
                var_24 -= ((/* implicit */unsigned short) (signed char)125);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            {
                var_25 = ((/* implicit */unsigned int) ((unsigned short) var_7));
                var_26 ^= ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)119)), (var_9)))) ? (((/* implicit */long long int) max((((((/* implicit */int) (short)23437)) * (((/* implicit */int) (signed char)58)))), (((((/* implicit */int) (short)13610)) * (((/* implicit */int) arr_19 [i_11]))))))) : ((-(arr_13 [i_11] [i_10] [(unsigned short)11] [i_10] [i_11] [i_11]))));
                arr_46 [i_10] [i_10] [i_11] = ((long long int) ((((/* implicit */_Bool) arr_20 [i_10] [i_10] [i_10] [i_11] [i_10])) ? (((/* implicit */int) arr_20 [i_11] [i_11] [i_11] [i_10] [i_10])) : (((/* implicit */int) (signed char)-60))));
                var_27 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (signed char)-125))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 2) 
    {
        for (signed char i_13 = 4; i_13 < 12; i_13 += 4) 
        {
            {
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)65535)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_31 [i_13] [i_12 + 1] [i_13])))))))));
                var_29 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_50 [i_13])) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)13))))))))));
            }
        } 
    } 
}
