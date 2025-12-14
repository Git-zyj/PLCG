/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62676
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((unsigned long long int) -6366945495790006384LL))));
                        var_17 = max((arr_5 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned short) arr_0 [i_0])), (arr_8 [i_0] [i_2] [i_0]))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) var_13);
        var_19 = 4294967276U;
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_7))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 10; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) 1865437979U))) > (((/* implicit */int) arr_7 [(signed char)3] [(signed char)3]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((var_10) >= (8825294593692961322ULL)))))) / (min((((var_0) << (((((/* implicit */int) var_4)) + (7137))))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        var_23 = ((/* implicit */unsigned long long int) ((signed char) (_Bool)0));
                        var_24 ^= ((/* implicit */short) arr_6 [i_0] [i_4]);
                        arr_18 [7U] [i_0] = ((/* implicit */int) arr_8 [i_5] [i_5] [i_0]);
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) max((((arr_3 [(signed char)10] [2] [i_7 + 3]) >> (((((/* implicit */int) var_3)) + (50))))), (((/* implicit */int) (_Bool)1))));
        var_26 = ((/* implicit */unsigned short) var_0);
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            arr_24 [i_7 - 1] [i_8] [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max(((signed char)-63), ((signed char)-127)))), (max((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 1048575U))))), (((((/* implicit */_Bool) -1012431803)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 3; i_9 < 9; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_11 = 2; i_11 < 10; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_8])) || (((/* implicit */_Bool) min((var_7), (((/* implicit */int) arr_16 [i_11] [i_9] [i_9 - 1] [i_10])))))))))))));
                            var_28 = ((/* implicit */unsigned long long int) min((-896186227898019946LL), (((/* implicit */long long int) ((arr_27 [i_11 + 1] [i_8] [i_7 + 1]) && (((/* implicit */_Bool) var_1)))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_37 [i_8] [3U] [10] [i_8] = ((/* implicit */unsigned short) max((var_8), (((/* implicit */short) ((signed char) max((var_0), (((/* implicit */unsigned long long int) var_7))))))));
                            arr_38 [6U] [2U] [i_8] [i_10] [i_8] = ((/* implicit */int) max((((var_2) ? (((/* implicit */long long int) max((var_15), (var_7)))) : (((((/* implicit */long long int) 1048588U)) / (1965158463177205292LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (185766012U)))) ? (((/* implicit */unsigned int) ((int) arr_11 [i_7] [i_7] [i_8] [(_Bool)1] [(_Bool)1] [(signed char)8]))) : (arr_29 [i_9 + 1] [i_9 + 1] [i_10] [i_12] [6U] [1]))))));
                        }
                        arr_39 [i_10] [i_10] [i_8] [i_8] [i_8] [i_7 + 2] = ((/* implicit */int) arr_2 [i_10] [9U]);
                    }
                } 
            } 
            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) 3299070517U))));
        }
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            arr_42 [i_7 - 1] = ((/* implicit */unsigned int) (_Bool)1);
            /* LoopSeq 2 */
            for (long long int i_14 = 0; i_14 < 11; i_14 += 4) /* same iter space */
            {
                var_30 = ((/* implicit */long long int) ((signed char) ((int) -8945062835212485325LL)));
                var_31 = arr_36 [i_7] [i_14] [i_14] [i_14] [i_7] [(signed char)6];
                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((4611123068473966592LL) << (((((/* implicit */int) arr_8 [i_7] [2LL] [i_14])) - (13298)))))))))));
                arr_47 [i_14] [i_13] [i_7] [i_7] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_7 + 1] [i_7 + 1])) ? (((/* implicit */unsigned int) -911151908)) : (var_14)))), (((unsigned long long int) var_14)));
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 9; i_15 += 2) 
                {
                    for (signed char i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) arr_5 [i_7] [i_7] [i_15]);
                            var_34 = ((/* implicit */_Bool) max((var_34), (((max((((/* implicit */unsigned long long int) 20U)), (15867682437012226827ULL))) > (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_32 [i_16] [i_15] [i_14] [i_13 - 1] [i_7])), (arr_49 [i_15 + 2] [i_13 - 1] [i_13] [i_13]))))))));
                            var_35 = arr_50 [2ULL] [i_15] [i_14] [i_13] [(unsigned short)5] [i_7 + 2];
                            var_36 = ((/* implicit */signed char) var_7);
                        }
                    } 
                } 
            }
            for (long long int i_17 = 0; i_17 < 11; i_17 += 4) /* same iter space */
            {
                arr_55 [i_17] [i_17] [i_13] [i_7] = ((/* implicit */_Bool) var_15);
                var_37 = ((/* implicit */long long int) ((signed char) max((3229134020U), (((/* implicit */unsigned int) arr_36 [i_7] [i_7 + 2] [i_17] [i_7 + 1] [i_7] [i_7 + 3])))));
            }
        }
    }
    /* LoopNest 3 */
    for (long long int i_18 = 1; i_18 < 11; i_18 += 2) 
    {
        for (signed char i_19 = 1; i_19 < 11; i_19 += 1) 
        {
            for (unsigned long long int i_20 = 1; i_20 < 11; i_20 += 4) 
            {
                {
                    arr_64 [i_19] [i_19] = ((/* implicit */short) var_10);
                    var_38 = ((/* implicit */unsigned int) arr_60 [i_18]);
                    var_39 = ((/* implicit */int) min((((/* implicit */long long int) var_5)), (((long long int) arr_59 [i_19 - 1] [i_18 - 1]))));
                    var_40 = ((/* implicit */unsigned short) ((unsigned int) 0));
                }
            } 
        } 
    } 
}
