/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74833
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
    var_13 = ((/* implicit */long long int) (-(((/* implicit */int) ((((((/* implicit */int) (signed char)-13)) * (((/* implicit */int) var_10)))) != ((+(((/* implicit */int) var_9)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_1 [i_0])))));
        var_15 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            arr_8 [i_2] [(signed char)15] [(signed char)15] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) arr_3 [i_2])));
            /* LoopSeq 1 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_16 += ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_1]))));
                arr_12 [2U] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) (((~(((/* implicit */int) var_0)))) + (((/* implicit */int) arr_4 [i_2]))));
            }
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (signed char i_5 = 1; i_5 < 20; i_5 += 3) 
                {
                    var_17 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (unsigned char)159)))));
                    arr_18 [i_2] [i_2] = ((/* implicit */unsigned char) var_5);
                    arr_19 [i_4] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)126)) + (((/* implicit */int) arr_2 [i_2]))))));
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        arr_24 [i_1] [(unsigned char)1] [i_4] [i_1] [i_2] [i_5] [i_5 - 1] = (unsigned char)197;
                        arr_25 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)122))))) ^ (arr_20 [(_Bool)1] [i_5 - 1] [i_5 - 1] [17LL] [i_5 - 1] [i_5])));
                        arr_26 [i_2] = ((/* implicit */unsigned int) arr_7 [i_2] [i_2] [i_2]);
                    }
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) (unsigned char)130)));
                        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1]))));
                    }
                }
                for (unsigned char i_8 = 1; i_8 < 19; i_8 += 3) 
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_23 [i_8 - 1] [i_8 + 3])))))));
                    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_1] [i_8 + 2] [5LL]))));
                }
                for (long long int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2] [i_2])) + (((/* implicit */int) ((((/* implicit */int) (signed char)16)) == (((/* implicit */int) arr_11 [i_2])))))));
                        arr_36 [i_2] [i_2] [(signed char)2] [(signed char)11] = ((/* implicit */int) arr_6 [i_2] [i_9] [i_2]);
                        arr_37 [i_1] [i_1] [i_1] [i_1] [i_10] &= ((/* implicit */signed char) ((var_9) || (((/* implicit */_Bool) arr_21 [(_Bool)1] [i_10] [i_10] [i_10] [i_10]))));
                    }
                    var_23 -= ((/* implicit */_Bool) arr_33 [i_9] [i_4] [i_4] [i_1]);
                    var_24 = ((/* implicit */unsigned int) (unsigned char)128);
                }
                for (long long int i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        arr_45 [i_2] [i_2] [i_12] = ((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (((/* implicit */int) arr_34 [i_1] [(signed char)5] [i_4] [i_11] [i_12] [i_12])))) + (((/* implicit */int) arr_10 [i_1] [i_2] [i_11] [i_11]))));
                        var_25 = ((/* implicit */long long int) (+(((/* implicit */int) arr_42 [i_1] [i_2] [i_2] [i_4] [i_4] [i_11] [i_2]))));
                    }
                    for (signed char i_13 = 4; i_13 < 21; i_13 += 2) 
                    {
                        var_26 += ((/* implicit */long long int) ((signed char) arr_5 [i_4] [i_13 - 2]));
                        var_27 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_4]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 3; i_14 < 21; i_14 += 3) 
                    {
                        var_28 += ((/* implicit */_Bool) (~(((unsigned long long int) (unsigned short)31052))));
                        var_29 ^= ((/* implicit */unsigned char) ((arr_28 [i_1] [i_2] [i_14 - 3] [i_1] [i_14 - 3]) ? (((/* implicit */int) arr_28 [(_Bool)1] [i_2] [i_14 - 3] [i_4] [i_2])) : (((/* implicit */int) arr_28 [i_11] [i_11] [i_14 + 1] [i_11] [i_14 + 1]))));
                    }
                    for (short i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_30 &= ((/* implicit */int) var_7);
                        var_31 = ((/* implicit */long long int) arr_31 [i_2] [i_2] [i_15]);
                        var_32 = ((/* implicit */_Bool) (+(arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])));
                        arr_54 [i_2] [(signed char)21] [i_4] = ((/* implicit */unsigned char) (signed char)73);
                        var_33 = ((/* implicit */_Bool) arr_14 [i_1]);
                    }
                    arr_55 [i_1] [i_4] [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) var_9)) / (((/* implicit */int) arr_34 [i_1] [i_1] [i_2] [i_2] [i_4] [i_11]))))));
                }
                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_2] [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_4 [i_2]))));
            }
            for (unsigned int i_16 = 0; i_16 < 22; i_16 += 2) /* same iter space */
            {
                var_35 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_16])) >> (0LL)));
                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) arr_50 [i_16] [i_16] [i_2] [i_16] [i_1])))))));
                arr_58 [i_2] [i_2] [i_2] [i_1] = arr_57 [i_16];
            }
            for (long long int i_17 = 1; i_17 < 20; i_17 += 1) 
            {
                arr_61 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned char) arr_1 [i_1]));
                arr_62 [i_2] [i_2] [i_2] = var_9;
            }
        }
        for (long long int i_18 = 0; i_18 < 22; i_18 += 4) 
        {
            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8753))) : (-1849818220307889025LL))) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_18] [i_18] [i_18]))))))));
            arr_66 [i_1] [i_1] [(unsigned short)19] = ((/* implicit */long long int) arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)8] [i_18]);
        }
        for (unsigned char i_19 = 0; i_19 < 22; i_19 += 2) 
        {
            var_38 = ((/* implicit */long long int) (unsigned short)47044);
            /* LoopNest 2 */
            for (long long int i_20 = 0; i_20 < 22; i_20 += 4) 
            {
                for (unsigned int i_21 = 4; i_21 < 21; i_21 += 3) 
                {
                    {
                        arr_74 [i_21] [i_19] = ((((long long int) (_Bool)0)) < (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)26217))))));
                        var_39 = ((/* implicit */int) var_0);
                    }
                } 
            } 
            arr_75 [i_1] [i_19] = ((arr_15 [i_1] [i_1] [i_19] [i_19] [i_19] [2U]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1] [i_1]))));
        }
        for (unsigned short i_22 = 0; i_22 < 22; i_22 += 1) 
        {
            var_40 = ((/* implicit */signed char) ((int) arr_79 [13LL] [i_1] [i_1]));
            arr_80 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)94)) && (((/* implicit */_Bool) var_0))))) != ((-(((/* implicit */int) (signed char)-51))))));
        }
        var_41 = ((/* implicit */long long int) ((unsigned int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]));
        var_42 = ((/* implicit */_Bool) (signed char)68);
    }
    var_43 = ((/* implicit */long long int) var_12);
}
