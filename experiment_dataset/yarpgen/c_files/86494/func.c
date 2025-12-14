/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86494
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
    var_12 = ((/* implicit */int) ((((/* implicit */long long int) ((var_9) >> (((((var_0) * (((/* implicit */int) (_Bool)1)))) + (39650864)))))) ^ (var_5)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)16])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (min((((/* implicit */int) (signed char)50)), (7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_4)), (var_11))))) : ((~(((((/* implicit */_Bool) (short)-26458)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) : (356016354U)))))));
        var_14 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_6)))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 356016374U)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483634)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (12639267203056019120ULL)))) ? (((/* implicit */long long int) ((var_3) >> (((/* implicit */int) (_Bool)1))))) : (((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_16 = ((/* implicit */unsigned short) max(((+(4294967295U))), (((/* implicit */unsigned int) (signed char)-40))));
                            arr_13 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!((_Bool)1)))), (arr_6 [23U] [(_Bool)1] [(_Bool)1] [i_1] [i_1] [(_Bool)1])))) ? (((/* implicit */long long int) min((var_3), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])) && (((/* implicit */_Bool) var_6)))))))) : (min((((/* implicit */long long int) (unsigned char)0)), (((((/* implicit */long long int) var_3)) ^ (5083135721995616131LL)))))));
                        }
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_3] [i_2] [i_1 + 1] [i_0] = max((((2203244611U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))));
                            var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1]))))) : (((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-14851))))))), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
                            arr_19 [i_0] [i_1] [21ULL] [i_3] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_3 + 3] [i_1 + 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (signed char)-91)) : (-800000058))) * (((/* implicit */int) max((arr_11 [i_0] [i_0] [20LL] [i_3] [(unsigned short)1]), (arr_8 [i_3]))))));
                        }
                        arr_20 [i_1] [i_0] = ((/* implicit */signed char) var_5);
                        arr_21 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) / (((((/* implicit */_Bool) 1683718964)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-17620)))))) ^ ((~(((/* implicit */int) var_7))))));
                        var_18 = ((/* implicit */_Bool) var_9);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 23; i_6 += 1) /* same iter space */
        {
            arr_24 [i_0] [i_6] = ((/* implicit */long long int) (+(-1683718972)));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2091722684U)));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) var_7)) >> (((((((/* implicit */_Bool) var_9)) ? (1482205394) : (((/* implicit */int) arr_14 [8U] [i_6] [i_6] [i_0] [i_0] [i_0] [8U])))) - (1482205373))))))));
            arr_25 [i_0] [i_6] [i_0] = (~(79946445013818658LL));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_0)))) ? (((((/* implicit */_Bool) (unsigned short)55679)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1572016645U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_0] [i_6 + 1] [i_6])))));
        }
        for (unsigned short i_7 = 1; i_7 < 23; i_7 += 1) /* same iter space */
        {
            arr_28 [i_0] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((var_6) * (((/* implicit */unsigned int) var_0))))))));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        var_22 += (!((!(((/* implicit */_Bool) var_7)))));
                        var_23 = ((/* implicit */unsigned char) (signed char)-71);
                    }
                } 
            } 
        }
        for (unsigned short i_10 = 1; i_10 < 23; i_10 += 1) /* same iter space */
        {
            arr_38 [i_0] [i_0] = ((/* implicit */signed char) var_9);
            arr_39 [i_0] [i_0] = ((/* implicit */int) ((var_10) ? (min((min((((/* implicit */unsigned int) var_11)), (2422526318U))), (arr_6 [i_0 - 1] [i_0] [i_0] [i_10 - 1] [i_10 - 1] [i_10]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((((/* implicit */_Bool) -490659585)) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) var_11)))))))));
        }
    }
    for (long long int i_11 = 0; i_11 < 16; i_11 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1099510579200ULL)) ? (-1457409188) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_5)))))))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) 62571049)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(short)18] [i_11] [i_11])))))) || (((/* implicit */_Bool) var_1)))))))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -92354741)))))));
        var_26 -= (_Bool)1;
        arr_43 [i_11] [i_11] |= ((/* implicit */unsigned char) arr_30 [i_11] [i_11] [(unsigned char)0]);
        var_27 = ((((/* implicit */_Bool) arr_31 [(_Bool)1] [(_Bool)1] [i_11])) ? (((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-12955)) + (2147483647))) >> (((((/* implicit */int) (signed char)36)) - (30)))))) * (min((2422526318U), (((/* implicit */unsigned int) var_4)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)48))))) ? (((((/* implicit */int) arr_27 [22LL] [22LL])) * (((/* implicit */int) (signed char)54)))) : (((/* implicit */int) arr_27 [i_11] [(_Bool)1]))))));
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 21; i_12 += 1) 
    {
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned int) var_9))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)73))) ^ (2422526310U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
        arr_48 [4LL] = ((/* implicit */int) var_5);
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_1))));
    }
}
