/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57879
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_3 [4LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (18446744073709551615ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 2778292336U)) > (var_9))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_2))));
            var_21 = ((/* implicit */_Bool) ((((_Bool) var_14)) ? (((((/* implicit */_Bool) (unsigned short)42484)) ? (var_11) : (((/* implicit */unsigned int) 536854528)))) : (arr_6 [i_0] [i_0 + 1])));
            var_22 = ((/* implicit */unsigned char) ((var_14) != ((-(4103061095U)))));
            arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) + (((/* implicit */int) var_16))));
        }
        /* LoopSeq 4 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_5 [i_0 - 1])) : (var_14)));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 1] [(signed char)4]))) : (var_6)));
        }
        for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) ((arr_17 [i_3 + 1] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (var_1)));
                            var_25 = ((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 1] [i_3 + 2] [i_4 - 1]);
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */short) (~(((/* implicit */int) arr_17 [i_3 - 1] [i_0 + 1]))));
            var_27 = ((/* implicit */unsigned char) arr_15 [i_0] [i_0] [4U] [4U]);
        }
        for (unsigned short i_7 = 1; i_7 < 11; i_7 += 4) /* same iter space */
        {
            var_28 = arr_23 [i_0 + 1] [i_7];
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) ((((arr_17 [3U] [14U]) ? (((/* implicit */int) (unsigned short)53303)) : (arr_29 [(short)7] [i_7] [i_8] [i_9]))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_28 [i_7] [i_0 - 1] [i_7] [i_7] [i_8] [i_7])) : (((/* implicit */int) var_19))))));
                        arr_31 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_29 [(short)0] [i_7] [(short)0] [i_9])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_18 [i_0] [i_7 + 1] [i_7 + 1] [i_9])))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0])) || (((/* implicit */_Bool) arr_7 [i_7])))))));
                        var_30 = arr_7 [(unsigned short)3];
                        var_31 |= ((/* implicit */short) ((arr_7 [i_0 - 1]) << (((((/* implicit */int) var_12)) - (36775)))));
                        var_32 += ((/* implicit */unsigned int) (+(((/* implicit */int) var_16))));
                    }
                } 
            } 
            var_33 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 1] [i_7 - 1] [i_7])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_16))));
            var_34 = ((/* implicit */signed char) (+(var_0)));
        }
        for (unsigned short i_10 = 1; i_10 < 11; i_10 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    for (short i_13 = 3; i_13 < 14; i_13 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */int) var_5);
                            var_36 = ((/* implicit */_Bool) ((int) var_9));
                        }
                    } 
                } 
            } 
            arr_45 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_0 + 1] [i_10 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (((((/* implicit */_Bool) 3314429401U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27853))) : (191906210U)))));
            var_37 = ((/* implicit */unsigned int) arr_14 [i_10 + 2]);
        }
    }
    for (short i_14 = 1; i_14 < 12; i_14 += 1) 
    {
        arr_49 [(short)8] |= ((/* implicit */short) arr_22 [i_14] [i_14]);
        /* LoopSeq 1 */
        for (short i_15 = 0; i_15 < 13; i_15 += 1) 
        {
            var_38 = ((/* implicit */unsigned char) (((!(var_18))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (856408920) : (((/* implicit */int) var_7))))) ? (arr_20 [i_14] [i_14] [i_14] [i_14] [i_15] [i_15] [i_15]) : (((/* implicit */int) ((signed char) var_6)))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2097151))))));
            var_39 = ((/* implicit */short) arr_7 [i_14]);
        }
        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_14] [i_14]))))) ? (max((((/* implicit */long long int) 2155419934U)), (max((((/* implicit */long long int) arr_34 [(unsigned short)13] [(signed char)10])), (var_13))))) : (((/* implicit */long long int) (~(arr_34 [i_14 - 1] [i_14])))))))));
    }
    var_41 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_16 = 2; i_16 < 15; i_16 += 2) 
    {
        for (unsigned char i_17 = 0; i_17 < 17; i_17 += 2) 
        {
            {
                var_42 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */unsigned long long int) var_13)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_16])) ? (((/* implicit */int) arr_57 [i_16] [i_16] [i_16])) : (((/* implicit */int) var_4))))) ? ((-(-15))) : (((/* implicit */int) arr_57 [i_16 + 2] [i_16 + 2] [(unsigned short)1]))))));
                var_43 = ((/* implicit */_Bool) (-((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_13)))))));
            }
        } 
    } 
}
