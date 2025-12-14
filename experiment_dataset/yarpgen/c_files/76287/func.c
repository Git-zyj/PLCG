/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76287
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
    for (int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_20 |= ((((/* implicit */_Bool) arr_0 [i_0 - 1])) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [(_Bool)1] [i_0 + 2])) % (((/* implicit */int) arr_4 [i_1]))));
            var_22 |= ((/* implicit */_Bool) ((((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            arr_9 [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [(signed char)8] [(signed char)14] [i_0 + 1])) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [(unsigned short)12] [i_2 - 2] [(unsigned short)12])) : (((/* implicit */int) (signed char)3))))));
            var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    arr_16 [(short)1] [i_2 - 1] [i_2] [i_4] [i_4] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [(short)12] [i_2 - 2] [i_0] [i_0] [i_0]))) % (var_19))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2 - 1])))));
                    var_24 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_0 + 2])))) ? (((/* implicit */int) (!(var_12)))) : ((-(((/* implicit */int) arr_11 [7U] [i_0] [(_Bool)1] [i_0]))))));
                }
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_10 [(signed char)12] [i_3] [i_3] [i_3]) ? (((/* implicit */int) arr_2 [i_2 - 1] [1])) : (((/* implicit */int) arr_11 [i_2 + 1] [(unsigned short)4] [(unsigned short)4] [i_2 + 1]))))) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2] [i_2 - 1])) : ((+(((/* implicit */int) (_Bool)1)))))))));
            }
            for (signed char i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */int) ((unsigned short) arr_12 [8U]));
                var_27 = ((/* implicit */unsigned long long int) ((((_Bool) arr_14 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 2] [13ULL] [i_0 + 2])) ? (((((/* implicit */int) arr_15 [i_0] [11ULL] [i_2] [(_Bool)1] [i_5])) % (((/* implicit */int) var_18)))) : ((((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [(unsigned short)4] [i_0])) : (((/* implicit */int) var_18))))));
            }
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                var_28 = ((/* implicit */signed char) ((var_10) % (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) | (((/* implicit */int) (_Bool)1)))))));
                var_29 = ((/* implicit */_Bool) max((var_29), (var_15)));
            }
        }
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                var_30 = ((/* implicit */_Bool) ((signed char) ((signed char) (signed char)83)));
                var_31 = ((/* implicit */_Bool) arr_13 [i_0 - 1] [(unsigned short)6] [i_0 - 1] [i_8]);
            }
            arr_26 [2ULL] [11U] = ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) (_Bool)1)))));
            arr_27 [(_Bool)1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_8 [(unsigned char)13] [(unsigned char)13] [(signed char)10])) : (((/* implicit */int) (unsigned short)56887))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))));
            arr_28 [i_7] [i_7] = ((/* implicit */unsigned char) var_19);
        }
        var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1]))) % ((-(var_6)))));
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_25 [i_0 + 1] [i_0 - 1] [i_0 + 1])) ^ (((/* implicit */int) arr_25 [i_0] [i_0 + 1] [i_0 + 2]))));
    }
    for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
    {
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28070)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (_Bool)1)))))));
        arr_32 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((arr_10 [i_9] [i_9] [i_9] [i_9]) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(signed char)2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_9] [i_9] [i_9])) % (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */int) arr_14 [i_9] [i_9] [i_9] [i_9] [i_9] [(short)5])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_9] [(_Bool)1] [(signed char)11] [(_Bool)1]))))))))));
        var_34 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-83)) ^ (((/* implicit */int) arr_0 [i_9])))) ^ (((/* implicit */int) max((arr_0 [i_9]), (((/* implicit */unsigned short) var_15)))))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
    {
        var_35 = ((/* implicit */unsigned short) var_6);
        var_36 = ((/* implicit */_Bool) ((3377699720527872ULL) % (((/* implicit */unsigned long long int) 871427617U))));
    }
    var_37 = ((/* implicit */unsigned short) (+(((max((var_6), (((/* implicit */unsigned long long int) (unsigned short)59203)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)52808), (((/* implicit */unsigned short) var_9))))))))));
}
