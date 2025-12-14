/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72124
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
    var_11 = (unsigned short)58603;
    var_12 &= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_0))) | (-1LL))))) & (((((/* implicit */long long int) ((/* implicit */int) var_1))) & ((~(var_9)))))));
    var_13 = var_7;
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-71))))))) : (((unsigned long long int) min((-2052119969), (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */int) (short)63)), ((~(((/* implicit */int) var_6))))))), ((-(((long long int) var_10))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) ((max((arr_5 [i_0] [(unsigned char)4] [i_0]), (arr_5 [i_1] [i_0] [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_6 [12LL] [i_1])))))), (((((((/* implicit */_Bool) -14LL)) || (((/* implicit */_Bool) (signed char)91)))) ? (((/* implicit */int) max((var_0), (((/* implicit */signed char) var_1))))) : (((/* implicit */int) ((-6662939032531063875LL) < (arr_2 [i_0] [i_0]))))))));
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */_Bool) ((long long int) (~(var_10))));
                var_17 ^= ((/* implicit */short) ((unsigned long long int) ((unsigned short) arr_5 [i_0] [i_0] [i_0])));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_18 += ((/* implicit */unsigned int) 8765105185605385697LL);
                var_19 = ((/* implicit */unsigned char) ((long long int) ((arr_5 [i_1] [i_1] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) var_3))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_0]), (((short) var_3))))) || (var_1)));
                arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) var_5);
                var_21 = ((/* implicit */long long int) (signed char)-71);
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_7 = 1; i_7 < 21; i_7 += 1) 
                    {
                        arr_27 [i_1] = ((/* implicit */unsigned long long int) (short)-64);
                        var_22 &= ((/* implicit */_Bool) ((((((/* implicit */int) (short)-32757)) == (((/* implicit */int) (unsigned short)32341)))) ? (((/* implicit */long long int) arr_11 [i_7 + 3] [i_1] [i_1] [i_0])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)17]))) : (arr_5 [i_1] [i_1] [i_1])))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_6 - 1] [i_6] [(unsigned char)2] [i_0])) ? (((/* implicit */int) arr_25 [i_6 - 1] [i_6] [i_0] [i_7] [i_7] [i_6])) : (((/* implicit */int) arr_25 [i_6 - 1] [i_7 + 1] [i_0] [i_7 + 2] [i_7] [i_7 + 2])))))));
                    }
                    arr_28 [i_0] [i_1] [i_6] [i_6 - 1] [i_1] = ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) 17U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_23 [i_0] [i_1] [i_1] [i_5] [17LL]))))) : (max((((/* implicit */unsigned long long int) var_8)), (arr_21 [i_0] [i_0] [i_0] [i_1]))))), (((/* implicit */unsigned long long int) (unsigned char)48))));
                }
                for (long long int i_8 = 2; i_8 < 21; i_8 += 1) 
                {
                    arr_31 [i_1] [i_0] [i_1] [i_5] [i_8] = ((/* implicit */unsigned char) arr_21 [i_1] [i_8 + 2] [i_8 - 1] [i_1]);
                    var_24 = ((/* implicit */short) arr_21 [i_1] [i_5] [i_1] [i_1]);
                    var_25 = ((/* implicit */signed char) var_4);
                    arr_32 [i_0] [i_1] [i_5] [i_0] &= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((17U), (var_10)))) > (arr_16 [i_8 - 2] [i_0] [i_0] [16ULL])))), (max((arr_29 [i_8 - 1] [i_8 + 2] [i_8 + 2] [(signed char)14] [i_8 - 1]), (arr_29 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1])))));
                }
                arr_33 [i_1] [i_1] = ((/* implicit */signed char) 4293576373U);
                arr_34 [i_5] [i_5] [i_1] [(signed char)6] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 17U)))) || (((/* implicit */_Bool) ((long long int) (unsigned char)207))))))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-62)))))) - (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_1] [i_1]))))), (var_5)))));
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_9] [i_0] [i_0])))))));
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                for (unsigned char i_11 = 1; i_11 < 20; i_11 += 1) 
                {
                    {
                        arr_43 [i_0] |= ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) > (arr_16 [i_11 + 1] [i_11 + 3] [i_0] [i_11 + 4]));
                        /* LoopSeq 1 */
                        for (long long int i_12 = 1; i_12 < 23; i_12 += 1) 
                        {
                            arr_46 [i_0] [i_9] [i_0] [i_9] [i_12 + 1] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_9] [i_11 + 2] [i_12 + 1])) || (((/* implicit */_Bool) var_9)))));
                            var_28 = ((/* implicit */short) arr_29 [i_12 + 1] [i_12 + 1] [i_11 + 3] [i_11] [i_10]);
                            var_29 = ((/* implicit */_Bool) ((short) ((signed char) (_Bool)1)));
                        }
                    }
                } 
            } 
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_9]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9]))) : (arr_29 [i_0] [i_0] [i_0] [i_9] [i_9])))) || (((/* implicit */_Bool) ((long long int) (_Bool)1)))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_31 = ((/* implicit */unsigned int) max((var_31), (arr_48 [i_13] [(short)1])));
            var_32 = ((/* implicit */long long int) arr_41 [i_0] [22LL] [i_0] [i_0]);
            var_33 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (-5596033658960440572LL))) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_13] [i_0])))));
            var_34 = ((/* implicit */unsigned long long int) ((_Bool) ((((((/* implicit */_Bool) 2047ULL)) || (((/* implicit */_Bool) 6476654021264133741ULL)))) ? (5596033658960440572LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_35 [i_0] [i_13] [20LL])))))));
            var_35 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned char) arr_48 [i_0] [(_Bool)1]))), (arr_48 [i_0] [i_0])));
        }
        for (short i_14 = 0; i_14 < 24; i_14 += 2) 
        {
            arr_52 [i_0] [i_0] [(unsigned short)7] = ((unsigned long long int) arr_5 [i_0] [(_Bool)1] [i_14]);
            var_36 += ((/* implicit */unsigned long long int) min((((arr_12 [i_0]) / (arr_12 [i_14]))), (arr_12 [i_14])));
        }
        var_37 = ((/* implicit */short) min((((min((2047ULL), (((/* implicit */unsigned long long int) var_6)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_12 [i_0])))))), (((/* implicit */unsigned long long int) ((max((0LL), (((/* implicit */long long int) (short)-32757)))) / (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)146), (((/* implicit */unsigned char) var_0)))))))))));
    }
}
