/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62704
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_19 += ((/* implicit */int) min((8444249301319680ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_11 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) arr_1 [i_0] [i_1]));
                        arr_12 [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 1]))) | (((unsigned int) arr_5 [i_3] [i_1] [i_0])))));
                        arr_13 [i_0] [(short)13] [i_0] [i_0] [(unsigned char)4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((short) arr_10 [i_0 - 2] [i_0 + 1]))), (max((min((arr_5 [i_0] [21] [i_2]), (((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_1] [i_2] [i_3] [i_3])))), (((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_3])))))));
                    }
                    arr_14 [i_0] [2] = ((/* implicit */_Bool) arr_9 [(_Bool)1] [3U] [i_0] [i_0 - 1]);
                }
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) arr_5 [i_0] [i_0 - 1] [i_0]))), (arr_9 [i_0 + 2] [i_0 - 1] [3ULL] [3ULL]))))) | (((arr_1 [i_0 + 1] [i_0 - 2]) | (max((((/* implicit */unsigned int) (_Bool)1)), (3665997142U)))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned int) max((((((unsigned long long int) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4])) - (min((8444249301319682ULL), (((/* implicit */unsigned long long int) 0U)))))), (((/* implicit */unsigned long long int) ((arr_7 [i_4] [i_4] [i_4] [i_4]) + (arr_2 [i_4]))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) -3798026577450279280LL)) && (((/* implicit */_Bool) min((arr_6 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) (short)-19718))))))))));
    }
    for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            arr_25 [19U] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_6] [i_6] [(signed char)9]))) - (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [20ULL]))) + (arr_5 [i_6] [i_6] [i_6]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_5] [i_5] [i_5 + 3] [17ULL]))))))));
            var_21 = ((/* implicit */unsigned long long int) ((unsigned char) min((arr_23 [i_5 + 2]), (arr_23 [i_5 + 1]))));
            /* LoopNest 3 */
            for (short i_7 = 1; i_7 < 19; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            arr_32 [i_5] [i_6] [(short)2] [i_7 - 1] [i_6] [19U] [13U] = ((unsigned int) max((((long long int) arr_26 [i_5 + 1])), (((/* implicit */long long int) ((int) arr_5 [i_5 + 1] [(short)14] [(short)7])))));
                            arr_33 [i_5] [i_5 - 2] [i_5 - 2] [6U] [i_5] [i_5] [i_5] = ((/* implicit */short) arr_4 [i_6]);
                            arr_34 [i_5] [i_6] [i_7] [i_7] [i_8] = ((/* implicit */int) max((arr_23 [i_6]), (arr_23 [i_5])));
                            arr_35 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [i_5] = ((unsigned char) ((((((/* implicit */_Bool) arr_24 [(unsigned char)14] [i_6] [(unsigned char)14])) && (((/* implicit */_Bool) arr_30 [9ULL] [i_6] [i_6] [(unsigned char)2] [i_6] [i_6])))) || (((/* implicit */_Bool) min((arr_24 [i_8] [i_7] [i_6]), (((/* implicit */short) arr_8 [1ULL] [i_6] [i_6] [i_8] [i_9])))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned char i_10 = 1; i_10 < 20; i_10 += 4) 
        {
            for (signed char i_11 = 4; i_11 < 19; i_11 += 3) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_43 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) arr_39 [i_5] [i_10] [i_10] [i_12]);
                        arr_44 [i_11] [i_11 - 2] [i_11] [i_10] [i_11] = arr_19 [i_11] [i_10 - 1];
                    }
                } 
            } 
        } 
        arr_45 [i_5] = ((/* implicit */int) arr_9 [i_5] [0U] [i_5] [i_5]);
        var_22 *= min((((2537451761117943157ULL) + (((/* implicit */unsigned long long int) ((long long int) 4294967293U))))), (((unsigned long long int) arr_31 [i_5 - 2] [i_5] [i_5 - 1] [i_5] [1LL])));
    }
    /* LoopNest 2 */
    for (int i_13 = 4; i_13 < 9; i_13 += 2) 
    {
        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 3) 
        {
            {
                arr_50 [i_13] [i_14] &= ((/* implicit */int) max((max((arr_40 [i_13 + 4] [i_13 + 3] [i_13 - 2]), (((/* implicit */unsigned int) arr_10 [i_14] [i_13 + 3])))), (max((arr_40 [i_14] [i_13 - 3] [i_13 - 3]), (arr_40 [i_13 - 4] [i_13 - 4] [i_13])))));
                arr_51 [i_13 + 1] [6ULL] [(signed char)11] = ((/* implicit */unsigned int) max((arr_22 [i_13] [9U]), (((/* implicit */unsigned long long int) arr_21 [i_14]))));
                arr_52 [i_14] [4ULL] = ((/* implicit */unsigned char) arr_10 [i_13] [18U]);
                var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_13]))) / (max((((/* implicit */unsigned long long int) ((_Bool) 18438299824408231935ULL))), (max((549761139437196896ULL), (((/* implicit */unsigned long long int) 3044652712U))))))));
                var_24 = ((/* implicit */int) arr_31 [i_13] [i_14] [i_13 - 1] [10ULL] [i_14]);
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_18))));
    var_26 = ((/* implicit */unsigned char) min((((unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) var_8))));
}
