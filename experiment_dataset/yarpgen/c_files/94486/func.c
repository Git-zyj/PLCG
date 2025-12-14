/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94486
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) * (((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75)))))));
        var_13 = ((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0])), ((unsigned short)3585)))) | (max(((((-2147483647 - 1)) / (((/* implicit */int) (signed char)-81)))), (((/* implicit */int) min((arr_0 [i_0]), ((signed char)79)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */int) arr_0 [i_1 + 2])) ^ (((/* implicit */int) ((unsigned char) arr_5 [i_1])))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (((_Bool)0) ? (arr_5 [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181)))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_15 = ((/* implicit */signed char) (_Bool)1);
            arr_12 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_2] [i_2]))));
            var_16 -= ((/* implicit */long long int) arr_0 [3LL]);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) : (arr_15 [i_2] [i_4] [i_4]))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))))));
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (_Bool)0))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 288225978105200640ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180))) : (18446744073709551600ULL)))))));
                arr_18 [i_2] [i_4] [i_4] [0ULL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_4] [i_4] [i_4]) * (((/* implicit */unsigned long long int) (-(arr_9 [0] [i_4]))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)165))))) : ((+(var_9))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned char)14), (((/* implicit */unsigned char) var_0))))))))));
            }
            for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2])) * (((/* implicit */int) arr_3 [i_2])))))));
                var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_10 [i_6] [i_4] [i_2])))) ? (arr_10 [(short)9] [(short)9] [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [(unsigned char)12]) * (var_7)))) ? (((((/* implicit */int) (signed char)-79)) / (404331071))) : (((/* implicit */int) (short)-6111)))))));
            }
            for (short i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                var_22 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (short)23887)) != (((/* implicit */int) (_Bool)0)))))))), (arr_24 [(unsigned char)2] [(unsigned char)2])));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_11 [i_2] [i_4] [i_7])) ? (((/* implicit */unsigned long long int) ((1055531162664960LL) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) -14)) ? (35184372088831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
                arr_25 [i_2] [i_7] [i_2] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_4]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)1)) * (((/* implicit */int) (signed char)122))))) : (min((((/* implicit */unsigned long long int) var_0)), (arr_15 [i_2] [i_4] [i_7])))));
                var_24 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((_Bool) arr_23 [i_2] [i_4] [i_7]))), (((((/* implicit */unsigned long long int) -14)) / (7562912265411254074ULL))))) << ((+(((/* implicit */int) max((var_11), (var_1))))))));
                var_25 *= ((/* implicit */unsigned char) (~(min(((+(arr_10 [i_7] [i_4] [(unsigned short)7]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (arr_1 [i_4]))))))));
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_29 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2]))) * (((var_9) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)96)))))))));
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        {
                            var_26 = ((((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_2] [i_9]))))) >= ((((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_8])))))) : (((arr_20 [i_2] [i_9] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))))))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((-(1155654867U))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3771313617U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)1)))) * (((/* implicit */int) arr_13 [i_10])))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) ((523653678U) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            }
        }
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned char) var_6);
            arr_38 [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)104))) * (arr_10 [i_2] [i_2] [i_2])));
            var_30 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)252))));
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) 
                {
                    {
                        arr_44 [i_2] [2ULL] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((arr_37 [i_2]) - (3592732204280481101LL)))));
                        arr_45 [i_12] [i_12] [i_13] [i_2] [(signed char)5] [(signed char)5] = ((/* implicit */signed char) (_Bool)1);
                        arr_46 [i_2] [i_2] [i_12] [i_12] [i_13] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_33 [1LL] [i_2])) ? (arr_20 [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) / (((arr_17 [i_12] [i_12] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29454)))))));
                    }
                } 
            } 
        }
        arr_47 [i_2] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_39 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_39 [i_2] [3U] [i_2])))), (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) <= (9007199254740991LL)))), (arr_26 [i_2] [i_2] [i_2]))))));
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_31 = ((min((15395488604099506476ULL), (((/* implicit */unsigned long long int) (signed char)-24)))) & (((/* implicit */unsigned long long int) 20086459U)));
                    var_32 = ((/* implicit */short) (signed char)-33);
                }
            } 
        } 
        var_33 = (!(((/* implicit */_Bool) -880601106)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_17 = 0; i_17 < 14; i_17 += 2) 
        {
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? ((+(arr_20 [i_2] [i_17] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36082)))));
            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((arr_9 [i_2] [i_2]) + (((/* implicit */int) arr_53 [i_2] [i_17] [i_2]))))));
            arr_58 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) < (var_2)));
            /* LoopNest 2 */
            for (unsigned char i_18 = 2; i_18 < 12; i_18 += 3) 
            {
                for (long long int i_19 = 4; i_19 < 13; i_19 += 4) 
                {
                    {
                        arr_63 [i_2] [i_2] [i_18] [i_18] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_2] [i_18 - 1] [i_2]))));
                        var_36 = ((/* implicit */unsigned char) arr_14 [(unsigned char)13] [(unsigned char)13] [i_2]);
                    }
                } 
            } 
        }
    }
    for (unsigned char i_20 = 2; i_20 < 14; i_20 += 1) 
    {
        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_20 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)36073)) / ((-(((/* implicit */int) (_Bool)1))))))) : ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))) / (var_9))))))))));
        arr_68 [2U] [9LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((arr_65 [i_20]) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) var_3)))), (((/* implicit */int) min((var_1), ((signed char)-15))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_20 - 2]))))) : (((/* implicit */int) arr_2 [i_20 + 2]))));
    }
    var_38 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_5)) ? (7117680129760448691LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) % (-2806169016097993369LL))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))));
    var_39 = ((/* implicit */unsigned char) (_Bool)1);
}
