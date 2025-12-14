/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71127
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
    var_12 += ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((var_9) << (((/* implicit */int) var_0))))) : (((unsigned long long int) var_4)))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (signed char)-42))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 4) /* same iter space */
        {
            var_13 = var_9;
            var_14 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (arr_3 [i_0 - 1] [i_0 - 1])))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 2; i_2 < 15; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                var_15 = ((/* implicit */unsigned long long int) ((arr_4 [i_0 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) : (var_9)));
                var_16 = ((/* implicit */signed char) ((unsigned long long int) var_5));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_17 = ((((var_10) ? (var_11) : (var_1))) <= (((/* implicit */int) (signed char)-23)));
                var_18 = ((/* implicit */long long int) var_0);
                var_19 = ((/* implicit */_Bool) (~(var_7)));
            }
            for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                var_20 = ((/* implicit */int) arr_4 [i_0 + 1]);
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        {
                            arr_19 [i_6] [i_0] [i_0] = ((/* implicit */signed char) arr_13 [i_0]);
                            var_21 = ((/* implicit */int) arr_17 [i_0] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        {
                            arr_27 [i_0] [i_2] [i_5] [i_5] [(signed char)13] [10LL] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */int) arr_22 [i_0])))))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */int) (_Bool)1))))) < (((long long int) (signed char)-24)))))));
                        }
                    } 
                } 
            }
            arr_28 [i_0] = ((((/* implicit */int) arr_24 [i_2] [i_2 - 2] [i_0 + 1] [i_0] [i_0 + 1] [i_0])) << (((((/* implicit */int) arr_24 [(short)8] [i_2 - 1] [i_0 - 1] [i_0] [i_0] [8])) - (30032))));
            var_23 = ((/* implicit */short) (-(((/* implicit */int) arr_20 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1]))));
            /* LoopSeq 3 */
            for (int i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                var_24 = ((/* implicit */long long int) arr_20 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]);
                /* LoopSeq 3 */
                for (signed char i_11 = 1; i_11 < 15; i_11 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                    var_26 += ((/* implicit */unsigned long long int) var_4);
                    arr_35 [i_0 + 1] [i_0] [i_10] = ((/* implicit */_Bool) ((var_1) | (((/* implicit */int) ((_Bool) var_3)))));
                }
                for (signed char i_12 = 1; i_12 < 15; i_12 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) var_9))));
                    arr_38 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                }
                for (unsigned int i_13 = 1; i_13 < 14; i_13 += 1) 
                {
                    arr_43 [i_13] [i_0] [(short)9] [2ULL] [i_0] [i_0] = ((/* implicit */short) ((_Bool) ((signed char) var_4)));
                    arr_44 [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_40 [i_0] [13ULL] [i_2] [i_0]))));
                }
            }
            for (signed char i_14 = 1; i_14 < 13; i_14 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */_Bool) var_11);
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_51 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_20 [i_0] [(signed char)14] [i_14 + 1] [i_0 - 1] [i_15])) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_14 - 1] [i_0 - 1] [i_14 - 1]))));
                    var_29 = ((/* implicit */short) var_8);
                    arr_52 [i_0] [i_0] = arr_3 [i_2 - 1] [i_14 + 2];
                    var_30 = ((/* implicit */short) var_10);
                    arr_53 [i_0] [i_0] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (var_8)))) ? (((/* implicit */unsigned long long int) ((arr_13 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10496)))))) : (var_5));
                }
            }
            for (signed char i_16 = 1; i_16 < 13; i_16 += 4) /* same iter space */
            {
                var_31 += ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (var_11))) & (((/* implicit */int) ((signed char) 2147483647)))));
                var_32 = ((/* implicit */short) ((((((/* implicit */long long int) var_11)) <= (var_7))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_50 [i_0] [0] [i_2 - 2] [i_0])));
                /* LoopSeq 2 */
                for (signed char i_17 = 2; i_17 < 13; i_17 += 3) 
                {
                    var_33 = ((/* implicit */long long int) ((_Bool) var_11));
                    arr_60 [i_0 - 1] [i_0] [i_16] [i_17] = ((/* implicit */unsigned long long int) ((arr_33 [11] [i_2]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_11) : (var_11))))));
                    arr_61 [i_0] = ((/* implicit */unsigned long long int) var_11);
                }
                for (int i_18 = 0; i_18 < 16; i_18 += 3) 
                {
                    arr_64 [i_0] = (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)10526)) <= (((/* implicit */int) (short)2))))));
                    arr_65 [7LL] [7LL] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_16 [i_0 + 1] [i_2] [i_16] [i_18]))));
                    arr_66 [i_18] [i_2] [i_16] [i_2] [i_16] |= ((/* implicit */short) (signed char)-84);
                    var_34 = ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6));
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((((/* implicit */int) arr_36 [i_18])) / (((/* implicit */int) var_3)))) << (((arr_56 [i_16]) + (3112038541312041973LL))))))));
                }
            }
        }
    }
    for (short i_19 = 0; i_19 < 12; i_19 += 1) 
    {
        var_36 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((var_6), (var_7)))))) ? (max((((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20988))))), (10765478891879414723ULL))) : (((/* implicit */unsigned long long int) (-(((var_1) + (((/* implicit */int) arr_25 [(signed char)5] [(signed char)5] [i_19] [i_19] [i_19] [i_19])))))))));
        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_36 [i_19])), ((signed char)-1)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-20396))))) != ((((_Bool)1) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))) > (((/* implicit */int) (signed char)-23)))))));
    }
}
