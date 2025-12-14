/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57267
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
    var_17 += ((/* implicit */short) (signed char)105);
    var_18 = ((/* implicit */int) var_4);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)32239)) ^ (((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [i_0])) * (((/* implicit */int) arr_3 [i_0] [i_1]))));
        }
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned short) (short)32241))), (1080863910568919040LL))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            arr_11 [i_2] = ((/* implicit */short) min(((!(((((/* implicit */int) (signed char)-125)) >= (((/* implicit */int) arr_4 [i_0] [i_2])))))), (arr_9 [i_2])));
            /* LoopSeq 4 */
            for (int i_3 = 2; i_3 < 22; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) (signed char)-122)) : (-1325114116)))) ? (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (1209198200477282996LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)36924))))))), (min((((long long int) var_2)), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)174)) ? (arr_6 [i_0] [i_2] [i_3]) : (799444882))))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)20321)) >> (((-1209198200477283025LL) + (1209198200477283035LL))))) | (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-16)), ((unsigned char)141))))))))))));
                    arr_17 [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */int) ((_Bool) arr_3 [i_0] [i_2]))), ((-(((/* implicit */int) arr_4 [i_0] [i_0])))))));
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_3] [i_5] [i_2] [i_0])) ^ ((~(arr_1 [i_0])))));
                    var_23 = var_11;
                }
                var_24 = ((/* implicit */int) arr_0 [i_0]);
                var_25 = ((unsigned long long int) (unsigned char)240);
            }
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                arr_25 [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0])) ? (2420092221308168566LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0])))));
                arr_26 [i_2] [i_2] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43086))) : (arr_18 [i_2] [i_2]))));
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) | (arr_12 [i_0] [i_0] [i_0] [i_0])));
            }
            for (int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                var_27 -= ((/* implicit */short) arr_18 [i_0] [2LL]);
                var_28 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_28 [i_0] [i_7] [i_0] [i_2])))) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_28 [i_0] [i_2] [i_7] [i_0])))))));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        {
                            arr_35 [i_0] [i_2] [i_2] [i_8] [i_8] [i_9] = ((/* implicit */long long int) arr_28 [i_0] [i_0] [i_0] [i_0]);
                            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((min((((/* implicit */long long int) (short)-1)), (var_11))) ^ (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                            var_30 = ((/* implicit */signed char) max((max((((/* implicit */int) ((short) arr_21 [i_0] [i_2] [i_7] [i_7] [i_9]))), (min((((/* implicit */int) (signed char)6)), (var_10))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    arr_39 [i_0] [i_2] [i_2] [i_10] = ((/* implicit */short) ((((_Bool) arr_2 [i_10] [(short)22])) ? (((((/* implicit */_Bool) (signed char)-1)) ? (1047879546) : (((/* implicit */int) (signed char)5)))) : (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [(_Bool)1] [(unsigned short)11] [18ULL]))));
                    var_31 = ((/* implicit */signed char) 300896405);
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    arr_42 [i_2] [i_2] [i_2] [i_0] = ((arr_34 [i_0] [i_0] [i_2] [i_7] [i_11]) & (((/* implicit */int) arr_15 [i_2])));
                    arr_43 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_2])) <= (((/* implicit */int) arr_2 [i_2] [i_2]))));
                }
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_49 [i_0] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */signed char) max((1709885588888664671ULL), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 1648590703571248699LL)) ? (arr_14 [19ULL] [i_2] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))))))))));
                            arr_50 [i_7] [i_2] [i_7] [i_2] [i_13] = ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_14 = 1; i_14 < 22; i_14 += 3) 
            {
                arr_53 [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_40 [i_0] [i_0] [i_14] [i_0])))));
                arr_54 [i_2] [i_2] [i_14] = ((/* implicit */long long int) ((arr_1 [i_14 - 1]) / (arr_1 [i_14 + 1])));
                arr_55 [i_0] [i_2] [i_2] [i_14 + 1] = ((/* implicit */_Bool) 17522508291060118880ULL);
                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775786LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (1ULL))))));
                var_33 ^= ((/* implicit */long long int) var_15);
            }
        }
        arr_56 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_10 [i_0])) + (2147483647))) >> (((((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) arr_10 [i_0])) : (-667756392))) + (14403)))));
        var_34 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) arr_15 [i_0])), (6986962969628086134ULL)))));
    }
    /* vectorizable */
    for (unsigned short i_15 = 2; i_15 < 13; i_15 += 3) /* same iter space */
    {
        var_35 = ((/* implicit */signed char) var_2);
        var_36 = ((/* implicit */int) min((var_36), (((int) (signed char)-7))));
    }
    for (unsigned short i_16 = 2; i_16 < 13; i_16 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_17 = 0; i_17 < 16; i_17 += 2) 
        {
            var_37 = ((/* implicit */_Bool) ((unsigned short) min((arr_23 [i_16 - 1] [17] [i_16] [i_16]), (((/* implicit */int) ((((/* implicit */int) var_8)) == (var_7)))))));
            var_38 = ((/* implicit */long long int) 11291411599644423228ULL);
            arr_63 [0] [i_17] = ((/* implicit */unsigned short) max((((var_6) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [i_16 - 1] [i_16])))), (((/* implicit */int) (unsigned char)118))));
            var_39 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_62 [i_16 + 1] [i_16 + 2] [i_16 + 3])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_16 - 2] [i_17] [i_16] [i_16 - 2] [i_16] [i_17])))))));
        }
        /* vectorizable */
        for (unsigned short i_18 = 0; i_18 < 16; i_18 += 4) 
        {
            arr_66 [i_16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_37 [i_16] [i_16 + 3] [i_16 + 2] [i_16 + 1] [i_16 + 2] [i_16 - 2]))));
            /* LoopNest 3 */
            for (signed char i_19 = 0; i_19 < 16; i_19 += 1) 
            {
                for (unsigned short i_20 = 1; i_20 < 12; i_20 += 2) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_40 = (signed char)-30;
                            var_41 = ((arr_45 [i_18] [i_18] [i_19] [i_20 + 2]) | (arr_45 [i_18] [i_18] [i_19] [i_20 + 2]));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_22 = 2; i_22 < 15; i_22 += 3) 
            {
                arr_79 [i_22] [i_18] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) > (arr_21 [i_22] [i_22] [i_22] [i_22] [i_22 - 1])));
                arr_80 [i_18] = ((/* implicit */short) (signed char)27);
                arr_81 [i_18] [i_18] [i_22] = ((/* implicit */unsigned short) arr_23 [i_16] [i_18] [i_22] [i_22]);
            }
            for (signed char i_23 = 1; i_23 < 15; i_23 += 3) 
            {
                var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_16] [i_18] [(unsigned char)20] [i_23 + 1] [i_16 + 1]))) : ((+(11459781104081465471ULL)))));
                arr_84 [i_16] [i_18] [i_23] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_16 + 1] [i_16 + 2])) ? (arr_22 [i_16 + 2] [i_16 + 2]) : (((/* implicit */int) (signed char)1))));
            }
            arr_85 [i_16] [i_18] = ((/* implicit */unsigned char) arr_71 [i_16 + 1] [i_18]);
            var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_16 + 3] [i_16 - 1]))));
        }
        arr_86 [i_16] = ((int) 3);
    }
    var_44 += ((/* implicit */long long int) min((((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)3)), (var_11)))) ? (max((var_1), (939524096))) : (((/* implicit */int) ((unsigned short) var_14))))), (((/* implicit */int) var_3))));
}
