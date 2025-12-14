/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94359
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_1)))) ? ((-(((/* implicit */int) var_11)))) : (((var_3) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))))), ((~(min((var_8), (((/* implicit */unsigned int) var_7)))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((-(arr_8 [i_2] [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))));
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                    var_15 += ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                }
                for (short i_4 = 2; i_4 < 21; i_4 += 1) 
                {
                    var_16 = ((/* implicit */int) min((var_16), ((-(((/* implicit */int) (signed char)-8))))));
                    arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = (-(((/* implicit */int) arr_3 [i_0] [i_4 - 2])));
                    arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_2] [(unsigned short)14]))));
                }
            }
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
            {
                arr_19 [i_0] = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_0]);
                var_17 ^= ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_5])))), (((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))));
            }
            /* vectorizable */
            for (signed char i_6 = 3; i_6 < 22; i_6 += 4) 
            {
                var_18 |= (+(((/* implicit */int) arr_7 [i_6] [(short)12] [i_6 - 2])));
                var_19 = ((((/* implicit */_Bool) arr_7 [i_6 - 3] [(unsigned char)13] [i_6 - 3])) ? (((/* implicit */int) arr_20 [i_6 + 1] [i_6 + 1] [i_6 - 2])) : (((/* implicit */int) arr_20 [i_6 - 2] [i_6] [i_6])));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31573))));
                arr_22 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_7 [i_1] [i_6 + 1] [i_6 - 1]);
            }
            var_21 = ((/* implicit */unsigned int) max((var_21), ((-(((((/* implicit */_Bool) max((arr_18 [i_0] [i_0] [i_0] [(signed char)6]), (((/* implicit */unsigned long long int) arr_8 [(signed char)19] [i_1]))))) ? (max((arr_14 [i_0] [i_0] [i_0] [i_1] [(unsigned short)12]), (((/* implicit */unsigned int) arr_9 [i_0] [(_Bool)1] [(short)12] [i_0] [i_0] [(signed char)10])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))));
            arr_23 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_1] [(unsigned short)5] [i_0]))))) ? ((-(((/* implicit */int) arr_20 [i_0] [i_0] [i_0])))) : (((/* implicit */int) max((arr_20 [i_0] [i_0] [3]), (arr_20 [i_0] [i_0] [i_0]))))));
        }
        var_22 = ((/* implicit */short) min((max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))), (arr_3 [i_0] [i_0])));
    }
    /* LoopSeq 3 */
    for (int i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        var_23 += (!(((/* implicit */_Bool) min((arr_4 [i_7]), (arr_24 [i_7] [i_7])))));
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            arr_30 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) max((max((532979225), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) max((arr_14 [(signed char)18] [(signed char)18] [i_8] [(signed char)18] [17U]), (((/* implicit */unsigned int) arr_25 [i_7] [i_8]))))) ? ((((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-115)))) : (((/* implicit */int) (signed char)-57))))));
            var_24 = ((/* implicit */unsigned long long int) arr_29 [(signed char)3] [(signed char)3] [i_7]);
        }
    }
    for (signed char i_9 = 1; i_9 < 21; i_9 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_38 [18U] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_18 [i_10] [i_10] [i_10] [(signed char)14]), (((/* implicit */unsigned long long int) arr_1 [15ULL]))))))))));
            arr_39 [(signed char)13] [5ULL] [(signed char)13] = (-(((/* implicit */int) arr_20 [i_10] [i_10] [i_10])));
            arr_40 [i_10] [i_9] [i_9] = (-(max((((arr_34 [i_9] [10U]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9] [i_9] [i_9] [i_10] [i_10]))) : (arr_17 [1ULL] [(unsigned short)6]))), (((/* implicit */unsigned long long int) min((arr_5 [i_9]), (((/* implicit */unsigned short) arr_13 [1ULL] [i_10] [i_10]))))))));
            var_25 = ((/* implicit */int) min(((~(arr_11 [i_9 + 1] [i_9 - 1] [i_9 - 1]))), (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_9 + 1] [i_9] [(unsigned char)14] [16]))))), (((((/* implicit */_Bool) -1296334129)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (unsigned char)193)))))))));
            arr_41 [i_10] [(signed char)7] [i_9] = ((/* implicit */signed char) arr_5 [i_10]);
        }
        for (int i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            arr_46 [i_9] [i_11] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_9 + 1] [i_9 + 1] [i_11] [i_11] [(signed char)7] [i_9 - 1]))))), (arr_32 [i_11] [i_9 + 1])));
            var_26 = ((/* implicit */short) (~((-(((((/* implicit */_Bool) arr_42 [i_11] [i_9] [i_11])) ? (((/* implicit */int) arr_3 [(unsigned short)5] [i_9])) : (((/* implicit */int) arr_9 [i_9] [i_9] [i_11] [i_11] [7] [i_9]))))))));
            arr_47 [i_11] [(signed char)5] = ((/* implicit */unsigned int) arr_9 [i_9 + 1] [i_11] [i_11] [12] [i_9] [i_9]);
            var_27 = ((/* implicit */unsigned short) max((arr_32 [i_9 - 1] [i_9 - 1]), (((/* implicit */unsigned int) ((arr_13 [i_9] [i_9] [i_9]) ? (arr_43 [i_9] [(signed char)16] [i_11]) : (((((/* implicit */_Bool) arr_9 [1ULL] [1ULL] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_20 [i_9] [(_Bool)1] [i_11])) : (((/* implicit */int) arr_13 [i_9] [i_9] [i_11])))))))));
        }
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)62))))) ? (((((/* implicit */_Bool) arr_11 [i_12] [i_9 + 1] [i_9])) ? (arr_48 [(unsigned char)20] [(unsigned char)20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_12] [i_12] [i_9 + 1]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [(short)1] [i_12] [i_12])))))));
            arr_51 [i_9] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_18 [i_9] [i_9 + 1] [(short)8] [(short)0]))))));
            var_29 |= ((/* implicit */unsigned int) arr_33 [i_9 + 1]);
            var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_48 [4] [i_12])))) ? (((/* implicit */int) arr_9 [i_9 + 1] [i_9 + 1] [(signed char)22] [i_9 + 1] [i_9] [i_9])) : ((-(((/* implicit */int) arr_31 [i_9]))))));
        }
        var_31 |= ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */short) arr_50 [i_9] [(signed char)10] [i_9 - 1])), (arr_21 [i_9] [20U] [(short)4] [20U])))), ((+((-(((/* implicit */int) arr_50 [i_9] [i_9 + 1] [i_9]))))))));
        var_32 += ((/* implicit */int) min((min((((/* implicit */unsigned long long int) max((arr_10 [i_9] [19] [i_9] [(_Bool)1] [i_9]), (((/* implicit */unsigned short) arr_21 [i_9 - 1] [i_9] [(unsigned char)18] [20]))))), (arr_17 [i_9 - 1] [i_9 - 1]))), ((-(min((((/* implicit */unsigned long long int) arr_0 [i_9 - 1])), (arr_48 [i_9] [i_9])))))));
    }
    for (signed char i_13 = 1; i_13 < 21; i_13 += 3) /* same iter space */
    {
        arr_55 [i_13] = ((/* implicit */short) arr_17 [i_13] [i_13]);
        var_33 = ((/* implicit */int) max(((~(max((((/* implicit */unsigned long long int) arr_35 [i_13])), (arr_48 [i_13] [i_13]))))), (((/* implicit */unsigned long long int) ((arr_52 [i_13 - 1]) ? (((/* implicit */int) arr_52 [i_13 + 1])) : (((/* implicit */int) arr_52 [i_13 + 1])))))));
        arr_56 [i_13] [15LL] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)34)) ? (646498719U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62)))))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_13] [12ULL] [i_13]))))), (arr_45 [i_13] [i_13])))));
    }
    var_34 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))), ((~(((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
}
