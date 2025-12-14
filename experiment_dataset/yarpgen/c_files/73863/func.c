/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73863
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (_Bool)0));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5612444148465042104ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214))) : (1099243192320ULL)))))) ? (arr_1 [i_1] [i_1]) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_6 [i_0]))))), (arr_4 [i_1]))));
            var_19 = ((/* implicit */unsigned long long int) (unsigned char)214);
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) arr_5 [(_Bool)1] [i_2]);
            arr_11 [i_2] = ((/* implicit */unsigned long long int) (unsigned char)112);
            arr_12 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */int) arr_8 [i_0] [i_2])) : (((/* implicit */int) arr_0 [i_2]))));
            var_20 = ((/* implicit */unsigned char) ((arr_1 [i_0] [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2])))));
            var_21 = ((/* implicit */unsigned char) var_3);
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [(_Bool)1])) : (((/* implicit */int) arr_13 [i_0]))));
            arr_15 [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))));
            var_23 = (-(((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_5 = 3; i_5 < 6; i_5 += 3) 
                {
                    arr_22 [i_5] [i_4] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))) : (4207795941106003944ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned short)5]))))))));
                    arr_23 [i_5] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_0] [6ULL] [(unsigned char)7] [(unsigned char)7] [(_Bool)1] [6]))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 1; i_7 < 9; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((arr_21 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7] [i_7 - 1] [i_7 + 1]) != (arr_21 [i_7 + 1] [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_7 - 1])));
                        arr_29 [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_7 + 1] [i_7 + 1] [i_4])) | (((/* implicit */int) var_15))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_7 + 1] [i_7 + 1] [i_3])) ? (arr_18 [i_7 + 1] [i_3] [(unsigned short)0]) : (arr_18 [i_7 - 1] [i_3] [i_4])));
                    }
                    var_26 = ((/* implicit */unsigned short) var_6);
                }
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    arr_32 [i_0] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0]))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (540431955284459520ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) arr_25 [0ULL] [(unsigned char)7] [0ULL] [0ULL])) : (4158740739078661730ULL)));
                    var_28 = arr_16 [i_0] [9] [i_0] [(unsigned char)9];
                    arr_33 [0] [8ULL] [i_4] [i_4] [0] &= ((/* implicit */unsigned char) -1103248720);
                }
                arr_34 [i_0] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-1059440212) + (((/* implicit */int) (unsigned char)41))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))) : ((+(var_7)))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                var_29 = ((/* implicit */_Bool) (-(14360994821623986976ULL)));
                var_30 = ((((/* implicit */int) (unsigned short)53370)) >> (((/* implicit */int) arr_26 [i_0] [i_3])));
                var_31 = ((/* implicit */_Bool) var_7);
                /* LoopNest 2 */
                for (unsigned char i_10 = 4; i_10 < 9; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        {
                            arr_43 [i_3] [i_10] = ((/* implicit */int) ((var_8) ? (((var_8) ? (15509688940446234743ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_3]))))) : (((/* implicit */unsigned long long int) (((-2147483647 - 1)) + (((/* implicit */int) var_14)))))));
                            arr_44 [i_10] = ((/* implicit */unsigned char) var_10);
                        }
                    } 
                } 
            }
            for (unsigned char i_12 = 3; i_12 < 7; i_12 += 3) 
            {
                arr_49 [6ULL] [i_3] = ((((/* implicit */int) arr_46 [i_0] [i_0] [i_12 - 3])) ^ (((/* implicit */int) arr_36 [i_12 - 2])));
                var_32 = ((((/* implicit */_Bool) arr_28 [i_12 - 2] [i_3] [i_0])) ? (((((/* implicit */int) (unsigned short)64955)) & (((/* implicit */int) arr_9 [i_12 - 1] [i_3] [i_12 - 3])))) : (((/* implicit */int) arr_8 [i_0] [(unsigned char)4])));
            }
            var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_0]))));
        }
    }
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        arr_53 [i_13] = ((/* implicit */_Bool) max(((-(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65535)))))), (((((/* implicit */_Bool) arr_50 [i_13])) ? (max((((/* implicit */int) var_4)), (var_2))) : (((/* implicit */int) (!((_Bool)1))))))));
        arr_54 [i_13] [i_13 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (max((((/* implicit */int) max(((unsigned char)185), (((/* implicit */unsigned char) (_Bool)1))))), (arr_50 [i_13]))) : ((+(((/* implicit */int) var_13))))));
    }
    var_34 = ((/* implicit */int) var_15);
    var_35 = ((/* implicit */int) (unsigned short)41942);
}
