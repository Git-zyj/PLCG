/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61508
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (var_1)))) * (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) 4294443008ULL))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [(short)19]);
            var_16 = ((/* implicit */signed char) (!((_Bool)1)));
            arr_6 [i_1 + 2] [17U] [(unsigned short)5] &= ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 - 1])) : (0ULL)));
            var_17 = (_Bool)1;
            var_18 = ((/* implicit */unsigned short) var_11);
        }
        for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) /* same iter space */
        {
            var_19 ^= ((/* implicit */_Bool) var_4);
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)384))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (arr_0 [i_0] [i_0])))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_3 [i_0] [i_0]))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (unsigned short)45934))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            var_23 = ((/* implicit */signed char) var_3);
        }
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_3 [1] [i_3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))))));
            var_25 = ((/* implicit */int) ((arr_7 [i_3] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_4 [i_0])));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 1) 
            {
                arr_14 [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)382))));
                arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)19601)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)401)))));
                arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [18U] [(unsigned char)11] [i_4])) : (((/* implicit */int) var_12))));
                /* LoopSeq 3 */
                for (signed char i_5 = 3; i_5 < 23; i_5 += 1) 
                {
                    arr_20 [i_5] [6U] [i_4] [(unsigned char)23] = ((/* implicit */long long int) (~(((unsigned int) var_3))));
                    var_26 = ((/* implicit */unsigned short) arr_19 [i_5] [i_5] [i_4] [i_3] [i_0]);
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5 - 1] [(unsigned char)14])) ? (arr_19 [i_0] [i_0] [i_4] [i_4 - 1] [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                }
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    arr_23 [(signed char)1] [(signed char)1] = ((/* implicit */unsigned char) ((arr_13 [i_0] [(signed char)8] [i_4 - 1]) >> (((arr_13 [i_0] [(unsigned char)5] [i_4 - 2]) - (3372423144U)))));
                    var_28 = arr_5 [i_4 - 2] [i_4 - 1] [i_4 - 1];
                    var_29 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)19590))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((arr_8 [1U] [i_4 - 1] [i_4]) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) arr_8 [i_0] [11LL] [(_Bool)0])))) : (((/* implicit */int) arr_18 [i_7] [i_3] [i_0] [6U] [i_3] [i_0])))))));
                        var_31 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned short)45917)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_6)))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)54979)) >> (((((/* implicit */int) (short)2751)) - (2730)))))) ? (((/* implicit */int) arr_26 [(unsigned char)18] [22ULL] [i_4] [i_6])) : ((-(((/* implicit */int) (unsigned char)0))))));
                        arr_30 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-1)) ? (4294443008ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) >> (((((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_4] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (9223372036854775807LL)))));
                    }
                    arr_31 [i_0] [i_3] [18U] [i_6] [i_0] = 0U;
                }
                for (signed char i_9 = 2; i_9 < 23; i_9 += 4) 
                {
                    var_33 = ((/* implicit */unsigned int) arr_7 [i_0] [i_9 - 2]);
                    arr_34 [i_0] [i_3] [i_0] [i_4] [13U] [11U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0] [(signed char)14] [i_4 - 1] [i_9 - 1] [i_9] [i_4])) ? (((/* implicit */int) (unsigned short)15832)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_4 - 2]))));
                    arr_35 [i_0] [i_0] [i_0] = var_7;
                }
            }
            var_34 = ((/* implicit */signed char) arr_29 [i_3] [(short)17]);
        }
        for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            var_35 = ((/* implicit */int) var_2);
            arr_40 [i_0] [i_0] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_10])) < (((/* implicit */int) arr_12 [i_10]))));
            var_36 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)28672)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_33 [i_0] [(_Bool)1] [i_0])));
        }
        var_37 = ((/* implicit */unsigned short) ((_Bool) arr_3 [i_0] [i_0]));
    }
    var_38 = ((/* implicit */unsigned char) (+((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)50092)) : (((/* implicit */int) (unsigned char)246))))))));
    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) var_9))));
    var_40 *= ((/* implicit */_Bool) var_2);
}
