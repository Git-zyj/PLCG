/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9350
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
    var_17 &= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)15))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [3])) ? (min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (unsigned char)6))))))));
        arr_4 [i_0] &= ((/* implicit */short) min((((((arr_2 [i_0 - 1]) >> (((17014356960371509715ULL) - (17014356960371509714ULL))))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)218))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) ((17014356960371509727ULL) <= (((/* implicit */unsigned long long int) arr_1 [i_0]))))) : (((var_12) ? (((/* implicit */int) var_0)) : (arr_1 [i_0]))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) (~(15560719606874961617ULL)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        arr_8 [(_Bool)1] = ((/* implicit */unsigned long long int) ((((arr_6 [(short)9] [12]) % (((/* implicit */long long int) ((/* implicit */int) var_3))))) ^ (((/* implicit */long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_8)))))));
        arr_9 [6] = ((/* implicit */unsigned char) ((arr_6 [15ULL] [i_1]) != (((/* implicit */long long int) var_9))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        /* LoopSeq 4 */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            arr_16 [i_3] = ((/* implicit */_Bool) ((unsigned short) ((var_16) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
            arr_17 [i_2] [(short)3] [5ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3])) ? ((-(arr_15 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_2])))));
        }
        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
        {
            arr_21 [i_2] [i_2] |= ((/* implicit */_Bool) -2284317707256378384LL);
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    arr_26 [i_2] [i_2] = ((/* implicit */unsigned char) arr_25 [i_5]);
                    arr_27 [(short)6] [(short)6] [(short)6] [i_6] = ((/* implicit */long long int) arr_11 [i_4]);
                    arr_28 [i_2] [i_4] [i_4] [0] [i_6] = ((/* implicit */int) ((1432387113338041900ULL) > (((/* implicit */unsigned long long int) 0LL))));
                }
                for (unsigned char i_7 = 3; i_7 < 9; i_7 += 2) 
                {
                    arr_33 [i_2] [0LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [2U] [i_5] [i_7 + 2])) ? (((/* implicit */int) arr_10 [i_2] [i_7 - 2])) : (((/* implicit */int) arr_10 [i_2] [9]))));
                    arr_34 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (arr_2 [i_5])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_7] [8LL] [i_2] [i_2]))) / (arr_6 [i_2] [i_4]))) : (((/* implicit */long long int) arr_7 [(short)16]))));
                    arr_35 [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (arr_25 [i_4])))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)-23027)))) : (((((/* implicit */int) arr_10 [i_2] [i_2])) - (((/* implicit */int) (unsigned char)239))))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 1; i_8 < 10; i_8 += 4) 
                    {
                        arr_38 [9LL] [(short)8] [9LL] [(short)8] [i_7] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) + ((+(139637976727552ULL)))));
                        arr_39 [i_2] [i_2] [i_5] [i_7 - 2] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_8]))));
                        arr_40 [i_2] [2LL] [i_5] [i_7] [7] [2LL] [i_8] = ((/* implicit */_Bool) ((short) 17014356960371509725ULL));
                    }
                }
                arr_41 [i_2] [3U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_4])) || (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) -1))))));
            }
            arr_42 [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) 1445269778);
            arr_43 [i_2] [i_2] = ((/* implicit */_Bool) arr_14 [i_2]);
        }
        for (signed char i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
        {
            arr_46 [i_2] = ((/* implicit */unsigned long long int) ((long long int) 139637976727558ULL));
            arr_47 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_32 [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_32 [i_2] [i_2] [i_9] [i_9]))));
            arr_48 [1ULL] [i_9] [1ULL] = ((((/* implicit */_Bool) ((unsigned long long int) arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) arr_25 [i_2])) : (((((/* implicit */_Bool) arr_12 [i_2])) ? (arr_2 [8ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
            arr_49 [(short)5] = ((/* implicit */short) arr_20 [i_2] [i_2]);
            arr_50 [i_2] [i_2] [6ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_11 [i_2]))));
        }
        for (signed char i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
        {
            arr_53 [i_10] [i_10] = ((/* implicit */int) var_0);
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                arr_57 [i_10] [i_10] = ((((/* implicit */unsigned long long int) arr_20 [i_10] [i_2])) & (arr_44 [i_11]));
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    arr_62 [i_10] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_12]))));
                    arr_63 [i_2] [i_10] [i_10] [i_2] = arr_31 [i_11] [i_11] [i_11] [i_11] [i_2];
                    arr_64 [i_10] [i_10] [i_10] [i_10] [i_2] = arr_56 [i_10] [i_11] [i_11];
                }
            }
            arr_65 [(signed char)7] [i_10] = ((signed char) arr_18 [i_2] [i_10]);
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                {
                    arr_70 [i_13] [i_13] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_2] [i_2])) ? (((/* implicit */int) arr_36 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_15))))) : (var_6)));
                    arr_71 [(signed char)10] [i_14] = ((/* implicit */short) ((arr_55 [i_14] [i_13] [i_2] [i_2]) >> (((-2284317707256378366LL) + (2284317707256378375LL)))));
                    arr_72 [i_2] [i_13] [i_14] = ((/* implicit */long long int) (~(arr_0 [i_14])));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */short) var_0);
}
