/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75653
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned char) (-(min((((unsigned long long int) var_15)), (((/* implicit */unsigned long long int) ((long long int) 8887666450220530329ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2 - 2] [i_1] [i_3] = ((/* implicit */short) ((_Bool) var_11));
                                var_17 = ((/* implicit */unsigned int) (unsigned char)192);
                                var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_15 [i_4] [i_1] [i_1] [i_0 - 1]) ^ (((/* implicit */long long int) arr_5 [i_1] [i_1] [i_4]))))) >= (var_8)));
                                var_19 = ((/* implicit */unsigned long long int) ((((unsigned long long int) ((unsigned int) arr_5 [i_4] [i_1] [i_1]))) >= (((/* implicit */unsigned long long int) ((3343732312U) << (((arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 1]) - (7283886161641490830LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_21 [i_0] [9ULL] [9ULL] [9ULL] = ((/* implicit */short) (signed char)30);
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 9; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                arr_28 [i_0 + 1] [i_0 + 1] [i_7] [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_7] [i_6]);
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(((unsigned int) 464519896U)))))));
                                arr_29 [i_7] [i_5] [i_5] [i_5] = (i_7 % 2 == 0) ? (((/* implicit */unsigned long long int) (+(((((long long int) 3830447399U)) << (((((arr_18 [i_0] [i_5] [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(unsigned char)6] [i_5] [i_7] [i_7 + 2] [(unsigned char)0] [(unsigned char)6]))))) - (112682105U)))))))) : (((/* implicit */unsigned long long int) (+(((((long long int) 3830447399U)) << (((((((arr_18 [i_0] [i_5] [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(unsigned char)6] [i_5] [i_7] [i_7 + 2] [(unsigned char)0] [(unsigned char)6]))))) - (112682105U))) - (126U))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
    {
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                for (unsigned char i_12 = 1; i_12 < 20; i_12 += 3) 
                {
                    {
                        arr_41 [i_12] [10ULL] [i_11] [i_12] [i_11] [i_9] = ((/* implicit */unsigned char) arr_30 [23]);
                        arr_42 [i_9] [i_9] [i_12 - 1] = ((/* implicit */short) ((((/* implicit */int) arr_39 [17ULL] [i_10] [i_11] [i_12 + 1] [i_10] [i_11])) & (((/* implicit */int) arr_39 [i_9] [i_10] [i_11] [i_12 + 2] [i_10] [i_10]))));
                        arr_43 [i_9] = ((/* implicit */unsigned long long int) arr_33 [i_12 + 1] [i_9]);
                        var_21 = ((/* implicit */unsigned short) ((arr_32 [i_9] [i_9]) ? (((/* implicit */int) arr_32 [i_9] [i_9])) : (((/* implicit */int) arr_32 [i_9] [i_9]))));
                        arr_44 [i_9] [i_10] [i_11] [i_9] = ((/* implicit */_Bool) (-(((long long int) arr_30 [i_10]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            arr_48 [i_9] = ((/* implicit */long long int) 5661567173188366376ULL);
            /* LoopNest 2 */
            for (unsigned int i_14 = 3; i_14 < 22; i_14 += 3) 
            {
                for (short i_15 = 0; i_15 < 24; i_15 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((arr_39 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) ? (((/* implicit */int) arr_39 [i_9] [i_13] [i_13] [i_14 - 2] [i_14 - 2] [i_15])) : (((/* implicit */int) arr_39 [i_9] [i_15] [i_14] [i_15] [i_14] [i_9]))));
                        arr_56 [i_9] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_49 [i_9] [i_14 + 1] [i_9]))));
                        var_23 &= ((/* implicit */unsigned int) 8962725146189134998LL);
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_34 [i_14 + 1])) ? (arr_31 [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4008)))))))));
                    }
                } 
            } 
            arr_57 [i_9] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) arr_49 [i_9] [i_13] [i_13]))));
            /* LoopNest 2 */
            for (long long int i_16 = 3; i_16 < 22; i_16 += 3) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) (+(arr_61 [i_17] [i_9] [14U] [i_17])));
                        arr_62 [i_9] [i_9] [i_13] [(unsigned char)0] [i_9] = ((/* implicit */unsigned int) arr_60 [i_9] [i_9] [i_16] [i_17] [i_17]);
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned short) var_6);
        }
        for (unsigned int i_18 = 0; i_18 < 24; i_18 += 2) 
        {
            arr_66 [i_9] [i_9] [i_18] = ((/* implicit */unsigned short) ((2023110678U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)79)))));
            var_27 -= ((/* implicit */signed char) ((int) (signed char)-118));
        }
        for (long long int i_19 = 1; i_19 < 23; i_19 += 2) 
        {
            var_28 = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_52 [i_9] [i_9] [i_19 + 1]))))));
            arr_69 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [(unsigned char)0] [i_19] [i_19 + 1])) ? (((long long int) arr_64 [i_9])) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 24; i_20 += 3) 
            {
                for (unsigned long long int i_21 = 2; i_21 < 22; i_21 += 3) 
                {
                    for (unsigned int i_22 = 0; i_22 < 24; i_22 += 3) 
                    {
                        {
                            arr_76 [i_9] [8ULL] [i_20] [i_19] [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */int) arr_32 [10LL] [(_Bool)1])) == (((/* implicit */int) (short)-11795)))))));
                        }
                    } 
                } 
            } 
        }
        var_30 *= ((/* implicit */unsigned char) ((long long int) (unsigned char)21));
    }
    var_31 = ((/* implicit */signed char) var_11);
}
