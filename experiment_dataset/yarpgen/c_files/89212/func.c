/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89212
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
    var_19 = ((/* implicit */int) var_5);
    var_20 ^= ((/* implicit */int) var_18);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_21 |= ((/* implicit */int) (+(((unsigned int) arr_0 [i_0] [i_0]))));
        var_22 |= max((((unsigned short) arr_0 [i_0] [i_0])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [12LL]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_23 &= ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_1]))));
        arr_4 [i_1] = ((/* implicit */unsigned short) ((unsigned char) arr_2 [i_1]));
        var_24 = ((/* implicit */int) max((((/* implicit */long long int) min((arr_2 [i_1]), (arr_2 [i_1])))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
        var_25 = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_3 [10U]))))));
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_26 |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2])))))))));
        /* LoopSeq 2 */
        for (int i_3 = 2; i_3 < 19; i_3 += 2) 
        {
            var_27 = ((/* implicit */int) arr_3 [i_3 - 2]);
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 3) 
            {
                arr_14 [i_4] [i_3] = (+((-(((/* implicit */int) arr_3 [i_4 + 2])))));
                arr_15 [i_2] [i_2] [i_3] [4] |= ((/* implicit */unsigned int) ((arr_12 [i_3] [i_4]) >= ((+(((/* implicit */int) arr_3 [i_2]))))));
                var_28 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((arr_8 [i_3 - 1] [i_4] [i_4 + 3]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_2] [(short)14] [i_2] [i_2])))))))), (max((((/* implicit */long long int) arr_8 [i_2] [i_2] [i_2])), (arr_9 [(signed char)16])))));
            }
        }
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                arr_24 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_2 [i_2]), (arr_2 [i_2]))))));
                var_29 = ((/* implicit */unsigned char) (short)-31198);
            }
            for (unsigned short i_7 = 2; i_7 < 19; i_7 += 4) 
            {
                var_30 |= ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */signed char) ((var_8) > (((/* implicit */long long int) arr_17 [i_7 + 1]))))), (arr_26 [i_7 + 1] [i_7 + 1] [i_7 + 1])))), ((~(((/* implicit */int) arr_23 [i_5] [10ULL] [i_7 - 2] [i_2]))))));
                var_31 ^= ((/* implicit */unsigned short) ((unsigned long long int) min((((((/* implicit */_Bool) arr_18 [i_7])) ? (arr_12 [i_2] [i_2]) : (((/* implicit */int) (unsigned char)234)))), (((/* implicit */int) ((signed char) arr_16 [i_2] [i_2]))))));
            }
            /* LoopSeq 2 */
            for (int i_8 = 1; i_8 < 19; i_8 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_9 = 1; i_9 < 19; i_9 += 2) 
                {
                    var_32 |= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10)))) == (((((/* implicit */_Bool) (unsigned short)59475)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52))) : (4294967275U))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_6)))))) * (max((var_17), (((/* implicit */long long int) arr_8 [i_2] [i_8] [i_8])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7766949350483237193LL)) && (((/* implicit */_Bool) min((1570533833), (((/* implicit */int) var_7)))))))))));
                    arr_34 [(unsigned char)19] [(unsigned char)3] [i_8] [(unsigned char)19] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))) ^ (max((min((arr_16 [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_33 [i_2] [i_5] [i_8])))), ((~(arr_11 [i_2] [i_2])))))));
                }
                var_33 = ((/* implicit */unsigned int) var_7);
                /* LoopSeq 2 */
                for (long long int i_10 = 2; i_10 < 19; i_10 += 3) /* same iter space */
                {
                    var_34 += ((/* implicit */int) ((short) ((int) 2608558929U)));
                    var_35 = ((/* implicit */long long int) arr_19 [(signed char)17] [(signed char)17] [i_10 - 1]);
                    arr_38 [i_2] [i_2] [i_8] [i_10] = ((/* implicit */unsigned int) var_13);
                }
                for (long long int i_11 = 2; i_11 < 19; i_11 += 3) /* same iter space */
                {
                    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)17997)) ? (((/* implicit */long long int) -1570533833)) : (-1LL))))));
                    var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) ((arr_27 [7U] [i_5] [0ULL] [i_11]) | (var_15)))))));
                    var_38 = ((/* implicit */long long int) arr_36 [i_11] [i_11 + 1] [i_8 - 1] [i_11]);
                    var_39 = ((/* implicit */unsigned char) (-(arr_11 [10LL] [i_2])));
                    /* LoopSeq 1 */
                    for (short i_12 = 1; i_12 < 17; i_12 += 3) 
                    {
                        arr_47 [i_2] [i_5] [(unsigned short)14] [(unsigned short)16] [i_11] = ((/* implicit */unsigned int) var_4);
                        var_40 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)97)) << (((3859332549316127576LL) - (3859332549316127574LL))))))));
                        var_41 = ((/* implicit */signed char) arr_41 [i_2] [i_5] [i_8] [i_11] [(unsigned short)11] [i_12]);
                    }
                }
            }
            for (int i_13 = 1; i_13 < 19; i_13 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    var_42 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_30 [i_13 + 1] [i_13 - 1] [i_13 + 1])), (((unsigned long long int) (signed char)97))));
                    var_43 |= ((/* implicit */signed char) min(((+(((/* implicit */int) arr_30 [i_13 - 1] [i_13 + 1] [i_13 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_13 - 1])))))));
                }
                for (unsigned int i_15 = 1; i_15 < 17; i_15 += 3) 
                {
                    arr_56 [i_13] [(unsigned char)18] = ((/* implicit */unsigned int) arr_52 [i_2] [(signed char)7] [i_2] [i_13] [i_13]);
                    arr_57 [i_2] [i_2] [i_13] [i_15] = ((/* implicit */signed char) ((((int) var_6)) > (((((((/* implicit */int) arr_7 [i_2] [i_2])) - (((/* implicit */int) arr_36 [i_2] [i_5] [i_13] [i_13])))) - (((/* implicit */int) arr_30 [i_15] [i_13 - 1] [i_2]))))));
                    var_44 = ((/* implicit */int) ((signed char) ((unsigned int) var_6)));
                    arr_58 [i_13] [i_5] [i_13] [i_13] [i_13] = ((/* implicit */int) var_8);
                }
                arr_59 [i_5] &= ((/* implicit */_Bool) (~(((unsigned long long int) arr_23 [i_13] [(unsigned short)16] [i_2] [i_2]))));
            }
            arr_60 [17] [i_5] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_5]), (arr_3 [i_5]))))) % (((unsigned long long int) arr_41 [i_5] [i_5] [i_5] [i_5] [2U] [i_2]))));
            arr_61 [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) ((unsigned int) arr_51 [i_2] [i_5] [i_5]))) & (max((var_11), (((/* implicit */long long int) (unsigned char)38)))))));
        }
    }
    var_45 = ((/* implicit */long long int) var_3);
    var_46 += ((/* implicit */int) max((var_5), (((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((((/* implicit */int) var_6)) / (((/* implicit */int) var_7)))))))));
}
