/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59931
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) (-(14073171902084481958ULL)));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((arr_1 [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_7)))))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned long long int) ((arr_9 [i_3] [i_0]) - (arr_9 [i_1] [i_3])));
                            arr_11 [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)0))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_3 [i_0] [i_1] [i_0]))));
                var_17 = ((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_1] [i_1] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_3 [i_0] [i_0] [i_2])));
            }
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                var_18 = ((/* implicit */short) (+((+(((/* implicit */int) arr_1 [i_0]))))));
                arr_16 [i_0] [i_0] [i_0] = var_0;
                arr_17 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (short)13);
                arr_18 [i_5] = ((((/* implicit */_Bool) 9660404962715135326ULL)) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) (!((((_Bool)1) && ((_Bool)1))))))));
            }
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (short)0))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 1; i_7 < 22; i_7 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) arr_15 [i_7 + 2] [i_6] [i_1]);
                    arr_23 [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65535))));
                    arr_24 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */unsigned long long int) arr_3 [i_7] [(unsigned short)3] [i_1]);
                }
                arr_25 [4U] [4U] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_9)))) ? (min((((long long int) 6723009413937405139ULL)), (((/* implicit */long long int) (unsigned short)0)))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 2; i_8 < 22; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        {
                            var_21 |= ((/* implicit */unsigned int) (+((~(((/* implicit */int) ((((/* implicit */_Bool) 11841507349908237285ULL)) && (((/* implicit */_Bool) 8465339012875410104LL)))))))));
                            arr_30 [i_8] [i_8 + 1] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((3332948510U) + (var_13)))))))));
                            var_22 = ((/* implicit */unsigned long long int) ((signed char) max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_8 - 1] [i_9]))) : (805471960U))), (((/* implicit */unsigned int) (!(arr_22 [19LL] [i_1] [i_1] [i_9])))))));
                            var_23 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((arr_3 [i_1] [i_8] [i_9]) & (((/* implicit */long long int) ((/* implicit */int) (short)-6)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_8 + 2]))))));
                            var_24 += ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (+(arr_12 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) max(((unsigned short)0), ((unsigned short)0)))) : (((/* implicit */int) var_8)))));
                        }
                    } 
                } 
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_33 [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) arr_10 [i_10] [i_10]);
                /* LoopSeq 3 */
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) var_10)))));
                    arr_36 [i_10] [i_10] [i_1] [i_10] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_29 [i_11] [i_10] [i_1] [i_1] [i_0] [i_0] [i_0]))))));
                    arr_37 [i_0] [i_0] [i_10] [i_11] = ((/* implicit */unsigned long long int) var_8);
                    arr_38 [i_0] [i_10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_0]);
                    arr_39 [i_0] [i_0] [i_10] [i_10] [i_0] [i_10] = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */long long int) ((arr_8 [i_0] [i_10] [i_1] [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)96))))), (min((7997695231763200LL), (((/* implicit */long long int) arr_1 [i_0])))))));
                }
                for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    arr_42 [i_12] [i_10] [i_10] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_12])) + (((/* implicit */int) arr_0 [i_1]))))));
                    var_26 = ((/* implicit */unsigned long long int) (+(var_3)));
                }
                for (long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_13])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-1))))) : (min((16759780729449513682ULL), (((/* implicit */unsigned long long int) -6120523389595215585LL)))))), ((~(min((arr_14 [i_0] [i_0] [13U]), (((/* implicit */unsigned long long int) var_13))))))));
                    arr_45 [i_0] &= ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [(unsigned short)11])) ? (((/* implicit */int) (unsigned short)18205)) : (((/* implicit */int) arr_0 [i_10]))))), ((~(var_3)))))));
                    var_28 = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) 815164804U)) && (((/* implicit */_Bool) var_13)))) ? (arr_35 [i_10] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12))))))));
                    var_29 = ((/* implicit */unsigned long long int) arr_19 [i_1] [i_1] [i_10] [i_13]);
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_9 [i_0] [i_13])) + (((((/* implicit */_Bool) (unsigned short)22701)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (10599525688238224903ULL))))))));
                }
            }
        }
        var_31 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((var_5) <= (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0])) ? (arr_26 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65516)))))));
        /* LoopSeq 1 */
        for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) 
        {
            var_32 ^= ((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) arr_31 [i_0]))))), ((+(var_0)))));
            arr_49 [i_14] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_10 [(short)19] [i_14]), ((unsigned short)96))))));
            arr_50 [i_0] [i_14] [i_14] = ((/* implicit */short) arr_35 [i_0] [i_14]);
        }
        var_33 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min(((unsigned short)23733), (((/* implicit */unsigned short) (unsigned char)3))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_48 [i_0])) ? (var_0) : (var_3))))))));
    }
    var_34 = var_1;
    var_35 ^= max((((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) var_1))))))), (var_13));
}
