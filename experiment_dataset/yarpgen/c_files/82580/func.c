/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82580
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
    var_17 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_12))));
    var_18 = ((/* implicit */unsigned char) var_10);
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (var_6) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0)))))));
    var_20 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_21 += ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3] [i_3 + 1] [i_3] [i_3]))))) >> (((arr_0 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 2] [i_0])))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            var_22 = ((/* implicit */_Bool) (((+(((/* implicit */int) var_5)))) & (((/* implicit */int) arr_10 [i_0]))));
                            var_23 = ((/* implicit */int) arr_2 [i_0] [i_0]);
                        }
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            arr_14 [i_1] [i_0] [i_1] [i_0] [i_5] = ((/* implicit */int) (~(((arr_4 [i_0] [(_Bool)1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned char)2] [0ULL] [i_1] [i_0])))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4308)) & (((/* implicit */int) (_Bool)1))))) ? ((-(var_4))) : (((/* implicit */int) (_Bool)1))));
                            arr_15 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) (_Bool)1)) : (511)));
                            var_25 += ((/* implicit */unsigned int) arr_9 [i_5] [i_0 + 1]);
                        }
                    }
                } 
            } 
        } 
        arr_16 [i_0] = ((/* implicit */_Bool) (+(arr_0 [i_0 + 1])));
        var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 2]))));
    }
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        /* LoopSeq 4 */
        for (long long int i_7 = 2; i_7 < 12; i_7 += 2) 
        {
            var_27 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)51261), (((/* implicit */unsigned short) (signed char)-64))))) && (((/* implicit */_Bool) arr_20 [i_7 + 1] [i_6])))))) & (((((/* implicit */_Bool) ((arr_20 [i_7 + 2] [i_6]) << (((arr_20 [i_6] [i_6]) - (15391657276099984755ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)249))))) : (arr_17 [i_7 - 2])))));
            var_28 *= (~(8388606U));
        }
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            var_29 ^= 3340868620U;
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_6] [i_6])))))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
        {
            var_31 = ((/* implicit */long long int) ((arr_19 [i_6]) * (((/* implicit */unsigned long long int) var_10))));
            /* LoopSeq 2 */
            for (short i_10 = 2; i_10 < 14; i_10 += 4) 
            {
                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (arr_19 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51258))))) >> (((((((/* implicit */_Bool) arr_20 [i_9] [(short)11])) ? (((/* implicit */unsigned int) var_4)) : (4294967271U))) - (1794736493U))))))));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 1; i_11 < 14; i_11 += 4) 
                {
                    var_33 += ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)229)))) << (((((/* implicit */int) arr_21 [i_6] [i_9])) - (205)))));
                    var_34 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-9)) ^ (((/* implicit */int) arr_22 [i_9]))))) / (((((/* implicit */_Bool) (unsigned short)61227)) ? (arr_20 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6] [i_11])))))));
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_10 - 1] [i_10 + 1])) * (((/* implicit */int) arr_21 [i_10 - 2] [i_10 - 2]))));
                    var_36 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_29 [i_10] [i_10])) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (unsigned char)255))))));
                }
                var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_9] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_27 [i_10] [i_6]))))));
            }
            for (long long int i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_12] [i_9])) ? (arr_17 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)32)))));
                var_39 = ((((/* implicit */_Bool) arr_28 [i_6])) ? (((/* implicit */int) (unsigned short)4308)) : (((/* implicit */int) (unsigned short)0)));
            }
            var_40 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_30 [i_6] [i_9] [i_9] [i_9])) < (((/* implicit */int) arr_21 [i_6] [i_9]))));
            arr_32 [i_6] [i_9] [i_9] = ((/* implicit */_Bool) (-(arr_27 [i_9] [i_9])));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 15; i_13 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_14 = 4; i_14 < 12; i_14 += 1) 
            {
                arr_37 [i_14] [i_13] = ((/* implicit */unsigned long long int) ((arr_33 [i_6]) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_14 + 1] [i_14 - 3] [i_14 + 2])))));
                var_41 = ((/* implicit */unsigned char) (-(((var_0) ? (arr_33 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_6] [i_13] [i_13])))))));
            }
            arr_38 [i_13] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6] [i_13]))) : (((((/* implicit */long long int) ((/* implicit */int) var_14))) + (-3719302154035506556LL)))));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 15; i_15 += 2) 
            {
                for (unsigned int i_16 = 3; i_16 < 12; i_16 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 0; i_17 < 15; i_17 += 2) 
                        {
                            arr_45 [i_13] [i_13] = ((/* implicit */short) ((unsigned int) arr_39 [i_16] [i_16 - 1] [i_16]));
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)237)) & (((/* implicit */int) (signed char)2))));
                            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)120)) & (((/* implicit */int) (_Bool)1)))))));
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)14293))))) ? (((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (unsigned short)4308)) : (((/* implicit */int) (unsigned short)14295)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) 571129373U)))))));
                            arr_46 [i_6] [(unsigned char)9] [i_15] [i_16 - 1] [i_16] [i_6] = ((/* implicit */short) (~(((((arr_28 [i_6]) + (2147483647))) >> (((((/* implicit */int) (short)444)) - (424)))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_45 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_6] [i_6]))) - (arr_19 [i_6])))));
                            var_46 = ((/* implicit */unsigned char) ((arr_42 [i_13] [10LL] [i_13] [(unsigned short)2]) ? (((arr_34 [i_13]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (1622860258U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                            var_47 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)32)) & (((/* implicit */int) arr_42 [i_18] [i_16 - 3] [i_16 - 2] [i_13]))));
                        }
                        var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) arr_30 [(unsigned char)8] [i_16 + 3] [(unsigned char)8] [i_15])))) : (((/* implicit */int) ((_Bool) (unsigned char)88)))));
                        arr_49 [i_6] [i_16] = ((/* implicit */_Bool) (unsigned short)14295);
                    }
                } 
            } 
        }
        var_49 = ((/* implicit */short) arr_19 [(short)2]);
        arr_50 [i_6] [i_6] = ((long long int) arr_31 [i_6] [i_6]);
        arr_51 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) max((arr_34 [i_6]), (var_0))))))) | (((long long int) arr_31 [i_6] [i_6]))));
        var_50 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_24 [i_6] [i_6]), (arr_24 [i_6] [(signed char)11]))))));
    }
}
