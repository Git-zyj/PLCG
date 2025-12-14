/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7174
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_7 [8U] [(unsigned char)9] [i_0]), ((unsigned short)5896)))) ? (max((66135318), (((((/* implicit */_Bool) 3819129438U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? ((-(((/* implicit */int) (signed char)-41)))) : (((/* implicit */int) arr_6 [i_0]))))));
                        var_21 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0]);
                        arr_11 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned short)9] [i_1] [(unsigned short)1] [i_3]))) : (16465829698111822177ULL)))) ? (66135318) : (((/* implicit */int) arr_6 [i_0]))))));
                        var_22 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [(unsigned short)9])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3])) : (arr_3 [5U]))), (((((/* implicit */int) var_16)) - (((/* implicit */int) arr_7 [i_1] [10U] [i_3]))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 2; i_6 < 8; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */_Bool) arr_0 [i_6]);
                            var_24 = ((/* implicit */unsigned short) arr_0 [i_0]);
                        }
                        for (unsigned short i_7 = 3; i_7 < 10; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max(((~((-(var_8))))), (((/* implicit */unsigned int) (unsigned short)65506)))))));
                            var_26 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_15 [i_4] [4] [i_5] [i_7] [i_7 - 2])) <= (((/* implicit */int) (signed char)127))))) >= (((/* implicit */int) arr_22 [i_4] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 2] [i_4] [i_7]))));
                            var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_4])) == (((/* implicit */int) arr_10 [0LL] [i_5] [(unsigned short)8] [6LL])))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_0] [i_1] [i_4] [i_5] [(signed char)8]))))) >= (((((/* implicit */_Bool) arr_5 [i_0] [(short)6])) ? (1607930086U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (min((((/* implicit */int) ((((/* implicit */_Bool) (short)25847)) && (((/* implicit */_Bool) (signed char)118))))), (((((/* implicit */int) arr_1 [i_4])) | (((/* implicit */int) (unsigned char)8))))))));
                            var_28 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-4160)) + (2147483647))) << (((((/* implicit */int) arr_22 [i_4] [i_7 + 1] [(unsigned short)2] [(short)10] [i_7] [i_4] [i_7])) - (45)))))) - ((~(max((((/* implicit */unsigned int) (unsigned char)192)), (2687037206U)))))));
                        }
                        arr_23 [(short)1] [i_0] [i_0] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_5] [i_5] [i_5])) - (((/* implicit */int) arr_2 [i_0])))))));
                        arr_24 [i_0] [0U] [i_0] = ((/* implicit */short) (+((+(((/* implicit */int) (signed char)114))))));
                    }
                } 
            } 
        }
        for (int i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                var_29 = ((/* implicit */unsigned char) (unsigned short)26);
                /* LoopNest 2 */
                for (unsigned char i_10 = 2; i_10 < 7; i_10 += 3) 
                {
                    for (unsigned short i_11 = 3; i_11 < 8; i_11 += 4) 
                    {
                        {
                            arr_36 [i_8] [i_0] = ((/* implicit */int) var_14);
                            arr_37 [(short)8] [i_0] [(short)2] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_15 [i_11] [(signed char)7] [i_9] [i_10 + 2] [i_11 + 3])) <= (((/* implicit */int) (unsigned short)56805))))) | (((/* implicit */int) (unsigned short)46083))));
                        }
                    } 
                } 
            }
            var_30 = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned char)176)))) | (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (short)-8607))))))));
        }
        var_31 -= ((/* implicit */unsigned char) arr_1 [2]);
        arr_38 [i_0] = ((/* implicit */unsigned long long int) var_4);
        arr_39 [i_0] [(signed char)6] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))), (((((/* implicit */int) arr_13 [i_0] [i_0])) << (((/* implicit */int) arr_13 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 2; i_12 < 9; i_12 += 1) 
        {
            for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_14 = 3; i_14 < 10; i_14 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))) == (var_13))), ((!(((/* implicit */_Bool) arr_12 [i_0] [i_13]))))));
                        var_33 = ((/* implicit */short) 12078268375824610802ULL);
                    }
                    for (long long int i_15 = 4; i_15 < 9; i_15 += 4) 
                    {
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_25 [i_15])) ? (((((/* implicit */_Bool) 3550490079U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_27 [i_15])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)225)) && (((/* implicit */_Bool) (short)32767))))))), (((((/* implicit */int) arr_17 [i_15] [i_15] [i_15 + 2] [i_15])) ^ (((/* implicit */int) arr_17 [i_15] [(unsigned char)10] [i_15 + 1] [i_15])))))))));
                        var_35 = ((/* implicit */unsigned int) arr_16 [(short)6] [i_15] [i_0] [8LL]);
                    }
                    arr_49 [4ULL] [i_0] [i_13] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_4 [i_12 - 1])))))));
                    arr_50 [i_0] [i_12] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)37083)) : (((/* implicit */int) (short)12))))) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [4U])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [3U])) || (((/* implicit */_Bool) (unsigned short)29)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 2; i_16 < 9; i_16 += 2) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 11; i_17 += 1) 
                        {
                            {
                                arr_56 [i_17] [i_17] [i_17] [i_17] [i_16] [i_17] [6ULL] |= ((/* implicit */signed char) min((max((((/* implicit */int) arr_6 [i_16])), ((~(((/* implicit */int) (short)2532)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)11)), (arr_26 [2U] [2U])))) ? (((((/* implicit */_Bool) 2512251651U)) ? (((/* implicit */int) (unsigned short)29)) : (((/* implicit */int) var_10)))) : (66135318)))));
                                arr_57 [1U] [1U] [i_13] [i_0] [i_17] = ((/* implicit */_Bool) (~((+((-(((/* implicit */int) (short)32750))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
