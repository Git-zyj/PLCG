/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79416
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
    var_19 = ((/* implicit */signed char) var_7);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 2]))) % ((~(arr_0 [i_0 + 1])))));
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))) : (((((/* implicit */_Bool) var_11)) ? (var_11) : (var_14))))))));
        var_22 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    for (short i_1 = 2; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((min((arr_3 [i_1]), (((/* implicit */unsigned long long int) (signed char)-119)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (var_13)))))))), (((((arr_3 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1])))))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) /* same iter space */
        {
            var_24 = (-(arr_3 [14ULL]));
            arr_6 [i_1] [i_1] &= ((9228090071207384083ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_2 - 1])))));
            var_25 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((signed char) arr_1 [i_1 - 1] [i_2]))), (9228090071207384083ULL)));
            /* LoopSeq 3 */
            for (int i_3 = 4; i_3 < 18; i_3 += 2) 
            {
                var_26 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) % (((/* implicit */int) var_8))));
                var_27 |= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [i_2] [i_3])), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2]))))));
                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) 9228090071207384064ULL)) ? (9228090071207384058ULL) : (9228090071207384067ULL)));
                var_29 = ((/* implicit */unsigned short) arr_0 [i_3]);
                var_30 += ((/* implicit */int) ((((((/* implicit */int) arr_7 [i_1] [i_1] [i_3])) != (((/* implicit */int) arr_7 [i_1 + 2] [i_1 - 1] [14])))) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3 - 2]))))))));
            }
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                var_31 = var_16;
                var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned char) ((-1991681320) >= (((/* implicit */int) (signed char)-124)))))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_5 [0LL] [i_1 + 2])) : (((/* implicit */int) arr_5 [i_1] [i_1 + 2])))) : (((((9228090071207384086ULL) < (9228090071207384063ULL))) ? (((/* implicit */int) arr_5 [i_2] [i_1])) : ((-(((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2]))))))));
                var_33 = ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1]))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4 - 1] [(unsigned char)5] [i_1] [i_1]))) * (9228090071207384075ULL))))) : (((/* implicit */unsigned long long int) var_1)));
                var_34 = ((/* implicit */unsigned long long int) min((var_34), (9228090071207384067ULL)));
                var_35 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_12 [i_1] [i_2 + 1] [i_1] [i_4])), ((-(((9218654002502167552ULL) + (9218654002502167533ULL)))))));
            }
            /* vectorizable */
            for (unsigned char i_5 = 1; i_5 < 15; i_5 += 1) 
            {
                var_36 += ((((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_2 + 1] [i_5])) || (((/* implicit */_Bool) arr_5 [i_5] [i_2])))) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1] [i_1]))))));
                var_37 = ((/* implicit */signed char) arr_4 [(signed char)14] [i_5 + 2]);
            }
        }
        /* vectorizable */
        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 1) /* same iter space */
        {
            var_38 = ((/* implicit */signed char) var_0);
            var_39 = ((/* implicit */unsigned char) ((9218654002502167548ULL) | (9218654002502167540ULL)));
        }
        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 1) /* same iter space */
        {
            var_40 -= ((long long int) arr_1 [i_1] [i_1]);
            var_41 = ((/* implicit */unsigned int) arr_4 [i_1] [i_7 + 1]);
        }
    }
    /* vectorizable */
    for (signed char i_8 = 2; i_8 < 19; i_8 += 2) 
    {
        arr_25 [i_8] = ((9228090071207384092ULL) + (9228090071207384076ULL));
        arr_26 [i_8] = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_24 [(signed char)1] [i_8]))))));
        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9228090071207384083ULL)) ? (9228090071207384062ULL) : (9228090071207384080ULL))))));
        /* LoopSeq 4 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_29 [i_8] [i_8] [i_9] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8 + 2] [i_8 - 1])) ? (((/* implicit */int) arr_24 [i_8 + 2] [i_8 - 1])) : (((/* implicit */int) arr_24 [i_8 + 2] [i_8 - 1]))));
            var_43 = ((/* implicit */signed char) ((arr_23 [i_9]) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_9]))))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_44 = ((/* implicit */unsigned char) ((short) arr_27 [i_10]));
            var_45 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                arr_37 [2ULL] [(signed char)1] [i_11] [(unsigned char)6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_8] [i_11] [i_11]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    var_46 = ((/* implicit */unsigned short) arr_21 [i_8 + 1]);
                    arr_42 [i_11] [i_11] [i_11] [i_11] [i_13] = var_12;
                    var_47 = ((/* implicit */unsigned int) ((int) arr_24 [i_8] [i_8]));
                    /* LoopSeq 2 */
                    for (long long int i_14 = 1; i_14 < 18; i_14 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_39 [i_8 - 2] [i_8 - 2] [i_11] [i_8 - 2])) >> (((9228090071207384067ULL) - (9228090071207384049ULL)))));
                        var_49 = (!((!(((/* implicit */_Bool) arr_22 [i_12])))));
                        arr_47 [i_8] [i_8 + 1] [i_11] [i_13] [i_12] [i_13] [i_14 - 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_34 [i_8 - 2] [i_11] [i_8 - 2]))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        var_50 |= ((/* implicit */unsigned long long int) ((long long int) var_7));
                        var_51 = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                        arr_50 [(signed char)6] [i_11] [i_13] [i_13] [i_15] = ((/* implicit */unsigned int) var_2);
                        var_52 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))));
                    }
                }
            }
            arr_51 [i_11] = ((/* implicit */int) ((_Bool) var_0));
        }
        for (unsigned char i_16 = 2; i_16 < 19; i_16 += 2) 
        {
            var_53 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_8]))));
            var_54 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) 9218654002502167529ULL))) ? (((((/* implicit */_Bool) var_11)) ? (arr_21 [i_16]) : (var_11))) : (((/* implicit */int) arr_43 [i_8] [i_8] [i_8] [i_8] [i_8]))));
            var_55 = ((/* implicit */signed char) arr_48 [i_8] [i_8] [i_8] [i_8] [(signed char)2] [i_8] [i_8]);
        }
    }
    var_56 = ((/* implicit */unsigned char) min((9228090071207384047ULL), (9218654002502167552ULL)));
    var_57 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) ((unsigned char) var_0))) << (((((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_3))))) - (43816))))), (min(((-(((/* implicit */int) var_17)))), (((/* implicit */int) var_18))))));
    /* LoopSeq 2 */
    for (short i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
    {
        var_58 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_24 [(short)9] [i_17])) > (((/* implicit */int) arr_24 [i_17] [i_17])))))));
        arr_57 [i_17] = ((/* implicit */unsigned short) var_7);
    }
    for (short i_18 = 0; i_18 < 12; i_18 += 3) /* same iter space */
    {
        arr_62 [i_18] = (!(((/* implicit */_Bool) 18446744073709551593ULL)));
        var_59 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_18] [i_18] [i_18] [i_18] [i_18])) ? (9228090071207384083ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)94)))))))));
        var_60 = ((/* implicit */short) -12LL);
        var_61 = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))) - (9228090071207384064ULL))));
    }
}
