/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9562
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
    var_19 = ((/* implicit */int) min((var_4), ((!(((/* implicit */_Bool) max(((short)-6568), (((/* implicit */short) var_4)))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((((int) 9U)) >> (((/* implicit */int) ((((((/* implicit */int) (unsigned short)4088)) >= (((/* implicit */int) (signed char)82)))) || (((/* implicit */_Bool) (unsigned short)61454)))))));
        var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2]))) > (arr_0 [i_0]))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) 1146530118U);
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_3 [i_1]))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    var_24 = ((((/* implicit */unsigned int) arr_2 [i_2])) != (var_12));
                    arr_9 [(_Bool)1] [i_1] [i_1] [(unsigned short)8] [i_1] [i_1] = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
                }
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [9] [i_5] [i_5] [(unsigned short)4])) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned int) arr_2 [i_1])) : (var_16))), (((/* implicit */unsigned int) (+(-1458586018))))))) : (arr_4 [i_0 - 1] [i_0] [7ULL] [5U])));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (+(var_16))))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1] [i_0])))))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) 1458586018))));
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) arr_0 [i_0 + 1]))));
                        var_29 = ((/* implicit */unsigned int) arr_12 [i_0 + 3]);
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)67)) / (max((((/* implicit */int) (unsigned short)3237)), (-1458586002)))))) ^ (0ULL))))));
                        var_31 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_0] [i_1] [i_6]))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(arr_10 [i_0] [i_1] [i_2] [i_4] [i_7] [i_4])))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_11 [i_1] [i_2]), (((/* implicit */signed char) var_4)))))) / (var_8))))))));
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_12 [i_0]))))))) < (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 3])))))) | ((-(arr_13 [i_2] [i_2] [i_2] [i_1] [(unsigned short)10]))))))))));
                        var_34 = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_4]);
                        arr_21 [11ULL] [i_1] [i_2] [13LL] [(short)12] = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) arr_14 [i_0] [i_1] [i_2] [i_0 + 2] [(unsigned short)14] [i_0]))) <= ((~(arr_0 [i_0 + 2])))));
                    }
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    var_35 -= ((/* implicit */unsigned long long int) (unsigned short)16384);
                }
                var_36 = ((/* implicit */signed char) ((((arr_10 [i_0 + 2] [i_1] [i_2] [i_1] [i_1] [i_1]) & (var_3))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_3 [i_0 + 3])))))));
                arr_23 [i_0] [i_1] [i_0] [i_1] |= ((/* implicit */signed char) arr_10 [i_0 - 1] [i_0] [i_1] [i_1] [i_1] [i_2]);
            }
            var_37 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_16)) | ((+(17173871168444532644ULL)))))) && (((/* implicit */_Bool) ((var_17) ^ (((/* implicit */unsigned int) var_13)))))));
        }
        for (signed char i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
        {
            var_38 -= ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)61389)) >> (((((/* implicit */int) (unsigned short)1066)) - (1052)))))));
            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((var_10) || (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_8] [i_8]))))))));
            var_40 = ((/* implicit */long long int) (-(min((var_15), (arr_2 [i_8])))));
        }
        for (signed char i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
        {
            arr_28 [i_9] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_9]);
            /* LoopNest 3 */
            for (signed char i_10 = 4; i_10 < 17; i_10 += 4) 
            {
                for (signed char i_11 = 1; i_11 < 16; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        {
                            var_41 += ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (-(var_7))))) >= (((/* implicit */int) ((min((var_15), (((/* implicit */int) arr_1 [i_9] [i_11])))) <= (((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))))));
                            var_42 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_31 [i_0] [(signed char)6] [(signed char)6] [i_11] [i_12])), (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-76))) >= (arr_25 [i_0]))))));
                        }
                    } 
                } 
            } 
            var_43 &= ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(arr_31 [(unsigned short)13] [i_0 + 3] [i_0 + 3] [i_9] [9])))), ((+(arr_16 [i_0] [(signed char)11] [i_9])))));
            var_44 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((arr_14 [i_0 - 1] [i_0 + 2] [(signed char)1] [i_0] [i_0] [i_0 - 1]), (var_6)))))) ? (-1458586032) : (((/* implicit */int) ((arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0] [i_0 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))));
        }
    }
    for (unsigned short i_13 = 1; i_13 < 15; i_13 += 3) /* same iter space */
    {
        arr_41 [i_13] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) arr_17 [i_13] [i_13] [i_13 + 1] [i_13] [0LL])), (max((1ULL), (((/* implicit */unsigned long long int) var_15))))))));
        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((arr_0 [(unsigned short)0]) >= (((/* implicit */long long int) -1346491099)))))));
        var_46 ^= ((int) max((((((/* implicit */int) arr_39 [i_13 + 1])) != (arr_33 [i_13] [i_13] [13] [i_13]))), (((((/* implicit */int) arr_36 [8U] [i_13 + 3] [i_13] [i_13] [i_13 + 1])) <= (((/* implicit */int) (unsigned short)27894))))));
        /* LoopSeq 1 */
        for (unsigned char i_14 = 1; i_14 < 17; i_14 += 1) 
        {
            var_47 = ((/* implicit */unsigned int) arr_37 [i_13] [7]);
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 3; i_15 < 16; i_15 += 3) 
            {
                for (signed char i_16 = 0; i_16 < 18; i_16 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_17 = 4; i_17 < 17; i_17 += 1) 
                        {
                            var_48 = arr_4 [i_13] [i_13] [i_13 + 2] [(_Bool)1];
                            arr_53 [i_13 + 1] [i_14] [i_15] [i_13] [i_17] = ((/* implicit */signed char) arr_30 [i_13] [(unsigned char)17] [(unsigned char)17] [1LL]);
                            arr_54 [i_13] [i_14] [i_15] [i_16] [i_13] = ((/* implicit */unsigned int) (~((+(arr_26 [i_17 + 1] [i_13] [i_15])))));
                        }
                        for (signed char i_18 = 2; i_18 < 16; i_18 += 1) 
                        {
                            arr_57 [i_13] [i_13] [i_14] [i_13] [i_16] [i_18] = ((/* implicit */unsigned int) arr_55 [i_13] [i_13] [i_13] [8] [i_13]);
                            var_49 = ((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_13] [i_13] [i_13]))));
                        }
                        var_50 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_14 + 1] [i_15 + 2] [i_15] [i_16] [i_16] [i_15]) == (arr_10 [i_14 - 1] [i_15 + 2] [i_15] [i_13] [i_13] [i_15]))))) == (min((arr_10 [i_14 - 1] [i_15 + 2] [i_15 - 2] [(signed char)13] [i_15] [i_14]), (arr_10 [i_14 + 1] [i_15 + 2] [i_15] [i_16] [i_15] [i_15])))));
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 1) /* same iter space */
    {
        var_51 = ((/* implicit */unsigned short) var_16);
        var_52 = ((/* implicit */int) ((arr_13 [7] [i_19] [i_19] [i_19] [i_19]) != (3639656332U)));
        var_53 = ((/* implicit */long long int) ((unsigned int) arr_26 [i_19] [i_19] [i_19]));
    }
    for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 1) /* same iter space */
    {
        var_54 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_3 [i_20])) : (((/* implicit */int) arr_24 [i_20] [i_20]))))) ? (max((((/* implicit */long long int) arr_51 [i_20] [i_20] [i_20] [i_20] [11U] [i_20] [i_20])), (arr_0 [i_20]))) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_20] [i_20] [i_20]))))), (max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_20] [(signed char)10]))) : (arr_4 [17LL] [i_20] [(unsigned char)5] [i_20]))), (((var_1) & (((/* implicit */long long int) ((/* implicit */int) arr_29 [5ULL] [i_20])))))))));
        var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_20] [i_20] [i_20] [i_20]))) - (((((/* implicit */_Bool) arr_16 [i_20] [i_20] [i_20])) ? (((/* implicit */unsigned long long int) 9223372036854775804LL)) : (arr_43 [16ULL] [16ULL] [16ULL]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_20])) / (((/* implicit */int) arr_3 [i_20]))))))))));
    }
}
