/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97763
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 *= ((/* implicit */_Bool) 542332941956160147ULL);
        arr_2 [i_0] [i_0] = var_3;
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (arr_0 [i_0])));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        arr_15 [i_1] [i_3] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_8 [i_2] [i_3 + 1])) / (var_0)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) arr_18 [i_1] [i_5] [i_3 - 1] [i_5] [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (1U)))));
                            arr_19 [i_3] [i_3 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_3 - 1] [i_5] [i_3 - 1] [i_4] [i_5] [i_3])) ? (var_17) : (((/* implicit */unsigned long long int) 3658907875U))));
                            var_21 = ((/* implicit */signed char) ((var_7) ? (542332941956160160ULL) : (17904411131753391465ULL)));
                            arr_20 [i_3] = arr_8 [i_2] [i_2];
                        }
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            var_22 = arr_16 [i_3] [i_3] [i_3 - 1] [i_6] [i_6] [i_3];
                            arr_23 [i_6] [i_3] [i_3] [i_1] = (i_3 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 542332941956160149ULL)) ? (arr_16 [(unsigned short)2] [i_1 - 3] [i_1 - 3] [i_3] [i_4] [i_3]) : (((/* implicit */unsigned long long int) 2676276120U))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3])) << (((arr_16 [i_1] [i_1 - 3] [i_1] [i_1] [13U] [i_3]) - (4812083422718399365ULL))))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 542332941956160149ULL)) ? (arr_16 [(unsigned short)2] [i_1 - 3] [i_1 - 3] [i_3] [i_4] [i_3]) : (((/* implicit */unsigned long long int) 2676276120U))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3])) << (((((arr_16 [i_1] [i_1 - 3] [i_1] [i_1] [13U] [i_3]) - (4812083422718399365ULL))) - (5739643952267099528ULL)))))))));
                            var_23 &= ((/* implicit */unsigned long long int) arr_18 [i_1] [i_2] [i_3] [i_4] [i_2]);
                        }
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            arr_27 [i_1] [i_3] [i_3 - 1] [i_4] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_26 [i_1] [i_3] [i_3] [i_4 + 1] [i_7])) : (18446744073709551615ULL)));
                            var_24 = ((/* implicit */unsigned int) ((var_4) <= (((/* implicit */unsigned long long int) 19U))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_2] [i_3 - 1] [i_4 + 1] [i_7])) == (((/* implicit */int) (signed char)8)))))));
                        }
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (_Bool)1))))) <= ((-(arr_25 [i_1 - 2] [i_1 - 1] [i_2] [i_3] [i_3] [i_3] [(unsigned short)12]))))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned int) ((signed char) arr_6 [i_1 + 1]));
    }
    /* LoopSeq 2 */
    for (int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 10; i_10 += 2) 
            {
                for (unsigned short i_11 = 2; i_11 < 10; i_11 += 3) 
                {
                    {
                        var_28 = ((/* implicit */signed char) ((unsigned long long int) 14412397726977892241ULL));
                        var_29 = ((/* implicit */_Bool) (unsigned short)15);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    {
                        arr_43 [i_9] [i_12] [i_9] [6] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((unsigned long long int) arr_31 [i_13] [i_13])) <= (((((/* implicit */_Bool) 4034346346731659391ULL)) ? (542332941956160148ULL) : (7530012071996702720ULL)))))), (max((arr_37 [i_9] [2U] [2U] [2U]), (((/* implicit */unsigned long long int) arr_42 [i_8] [(_Bool)1] [i_9] [i_12] [i_13] [i_13]))))));
                        var_30 = ((/* implicit */_Bool) var_2);
                        var_31 = min((((/* implicit */unsigned long long int) arr_17 [i_8] [i_9] [i_12] [i_13] [i_12])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_8]))) + (var_4))));
                    }
                } 
            } 
        }
        for (unsigned int i_14 = 2; i_14 < 10; i_14 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 4) 
            {
                for (unsigned int i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    {
                        var_32 |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2232244657932164437ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108))) : (2232244657932164455ULL)))));
                        arr_52 [i_8] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_8] [i_15] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_41 [i_8] [i_14] [5])), (6652577046246218679ULL)))) ? (arr_12 [i_8] [i_14 - 1] [i_15]) : (((/* implicit */int) var_8))))) - (min((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((var_0) + (1465753418))))))))));
                        arr_53 [i_16] [i_15] [i_14] [i_8] = ((/* implicit */unsigned short) ((int) ((min((((/* implicit */unsigned long long int) 536870911)), (17904411131753391468ULL))) / (arr_37 [i_16] [i_14 - 2] [(unsigned short)10] [i_16]))));
                        var_33 = ((/* implicit */unsigned short) ((_Bool) (((+(-1))) & (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_8 [i_15] [i_14])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 11; i_17 += 3) 
                        {
                            arr_56 [i_8] [i_8] [i_14] [i_15] [i_15] [(unsigned short)10] [i_17] = arr_9 [i_14 - 1] [i_14 - 2] [11U] [i_14 + 1];
                            arr_57 [i_8] = ((/* implicit */int) (signed char)12);
                            var_34 = ((/* implicit */signed char) 17777366288880510146ULL);
                            var_35 = ((unsigned long long int) (unsigned short)65526);
                            arr_58 [i_17] [(signed char)3] [i_14] = max(((+(arr_34 [i_14] [i_14] [i_14 - 1] [i_14 - 1]))), (((/* implicit */int) ((arr_34 [(signed char)5] [i_14] [i_14 - 1] [i_14 - 2]) <= (((/* implicit */int) (_Bool)0))))));
                        }
                    }
                } 
            } 
            var_36 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) 2023278982U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3734007383U))), ((~(arr_47 [i_8] [i_14 - 1] [i_14] [i_14]))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((min((1439221090U), (((/* implicit */unsigned int) (signed char)-17)))) >= (((((/* implicit */_Bool) arr_35 [10U] [i_14] [i_8] [i_14])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
        }
        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((((((/* implicit */unsigned long long int) arr_4 [i_8])) % (((((/* implicit */unsigned long long int) var_12)) % (arr_45 [i_8] [9ULL] [i_8]))))) >> (((/* implicit */int) max((arr_29 [i_8]), (((/* implicit */signed char) ((((/* implicit */_Bool) 5U)) || (((/* implicit */_Bool) arr_39 [i_8] [i_8]))))))))))));
        var_38 = ((/* implicit */int) var_3);
        var_39 = ((/* implicit */unsigned int) (~(var_17)));
        var_40 = ((/* implicit */unsigned short) ((542332941956160163ULL) << (0U)));
    }
    for (int i_18 = 0; i_18 < 11; i_18 += 2) /* same iter space */
    {
        var_41 -= ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_46 [i_18] [i_18] [i_18]))))));
        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) arr_40 [i_18] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61481))) : (4294967295U))), (((/* implicit */unsigned int) 134184960)))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_19 = 0; i_19 < 25; i_19 += 4) 
    {
        var_43 = ((1U) >= (4294967292U));
        var_44 *= ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
    }
}
