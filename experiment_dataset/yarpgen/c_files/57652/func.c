/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57652
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((int) ((arr_0 [i_0] [11]) / (1192700014)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_14 [i_0] [i_1 - 2] [i_2] [4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) | (13685245788638894264ULL)));
                        arr_15 [i_2] [i_3] = ((/* implicit */int) min((((((((/* implicit */unsigned long long int) var_0)) / (var_18))) >> (((((var_12) + (arr_3 [i_1]))) + (1155153118))))), (((/* implicit */unsigned long long int) ((int) min((arr_9 [i_1]), (((/* implicit */unsigned long long int) var_2))))))));
                        arr_16 [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_3 [10])) : (arr_2 [i_2]))) == (((/* implicit */unsigned long long int) max((var_2), (var_6)))))) || (((/* implicit */_Bool) arr_5 [i_3] [i_2] [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 23; i_4 += 1) 
                    {
                        var_20 = ((int) var_18);
                        arr_19 [i_4] [i_2] [2] [i_0] = ((/* implicit */unsigned long long int) ((arr_5 [i_4 + 2] [i_4 + 2] [i_2]) + (arr_12 [i_4 - 1] [i_1 + 1] [i_0])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            arr_23 [i_5] [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_6 [i_4] [i_1 - 1])) * (arr_2 [i_1]))) % (var_10)));
                            arr_24 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11))))) <= (((-95421015) + (95421015)))));
                            arr_25 [i_5] [i_4 + 1] [i_2] [i_1 + 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0]) < (arr_7 [i_5] [i_2] [i_2]))))) ^ (arr_2 [i_4 + 1])));
                        }
                    }
                    /* LoopSeq 3 */
                    for (int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_5 [i_2] [i_1] [i_0]) > (var_0)))) + (((int) 11824005894214552241ULL))))) ? (arr_26 [i_0] [i_0] [i_1 - 1] [i_2] [i_6]) : (arr_8 [i_0]));
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_1 [i_1 - 2] [i_1 - 2]))))));
                    }
                    for (int i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            var_23 = ((int) -95421015);
                            var_24 = ((((/* implicit */int) ((((var_0) <= (var_12))) && (((/* implicit */_Bool) arr_7 [i_7] [i_1 - 2] [i_0]))))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_18) != (var_19))))) < (arr_1 [i_1 - 1] [i_1 - 1])))));
                        }
                        arr_36 [i_2] [i_1 + 1] [i_0] = ((int) arr_5 [i_0] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        arr_39 [i_9] [i_9] [i_1 + 1] [i_2] [i_1 + 1] [i_0] = ((/* implicit */int) arr_38 [i_9] [i_1 - 2] [i_1 - 2] [i_0]);
                        arr_40 [i_9] [i_2] [i_1] [i_0] [i_0] = ((int) ((1170662950) & (-750570002)));
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            var_25 = ((arr_30 [i_10] [i_9] [i_2] [i_0]) % ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_9] [i_2] [i_1 - 2] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_9]))))))));
                            var_26 = ((/* implicit */int) ((17292791680656991732ULL) * (3574998403819261360ULL)));
                            var_27 = ((/* implicit */int) ((((min((((/* implicit */unsigned long long int) arr_21 [i_10] [i_2] [i_0])), (var_14))) << (((((((/* implicit */_Bool) arr_17 [i_10] [i_1 - 2] [i_1 - 2] [i_0])) ? (arr_42 [i_10] [i_9] [i_2] [i_1 - 2] [24ULL]) : (var_18))) - (1810400831569501836ULL))))) >= (((unsigned long long int) ((arr_42 [i_0] [i_0] [i_2] [i_1 - 1] [i_0]) + (((/* implicit */unsigned long long int) arr_32 [i_10])))))));
                            var_28 = ((/* implicit */unsigned long long int) ((max((arr_31 [i_9] [i_2]), (((var_9) + (arr_10 [i_0] [i_1] [i_0]))))) >= (arr_21 [i_0] [i_1 - 2] [i_2])));
                        }
                        for (int i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            arr_46 [i_0] [i_1] [i_0] [i_11] [i_11] = ((((/* implicit */_Bool) ((((int) var_10)) / (((arr_33 [18] [21] [i_9] [i_11]) & (var_7)))))) ? (((/* implicit */int) ((((-858777088) / (-1389488282))) <= (arr_3 [i_1 - 2])))) : (((/* implicit */int) ((((var_13) == (var_13))) || (((/* implicit */_Bool) (+(var_1))))))));
                            var_29 = ((/* implicit */int) ((((((arr_35 [6ULL] [i_1] [i_2]) & (((/* implicit */unsigned long long int) -456416813)))) / (((/* implicit */unsigned long long int) arr_37 [i_11] [i_11] [i_1 - 1] [i_1 - 1])))) << (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_29 [i_11] [i_9] [i_2] [i_2] [i_1] [i_0]))) || (((((/* implicit */unsigned long long int) arr_26 [i_11] [23] [i_2] [i_1] [i_0])) == (var_10))))))));
                        }
                    }
                }
            } 
        } 
        arr_47 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [5ULL]))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 13; i_12 += 1) 
    {
        var_30 = ((/* implicit */unsigned long long int) ((2147483647) | (0)));
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 11; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                {
                    arr_54 [i_12] [i_13] [i_14] = ((int) arr_30 [i_13 + 2] [i_13 - 1] [i_13 + 1] [i_12]);
                    var_31 = ((((int) var_17)) + (arr_21 [i_14] [i_13 - 1] [i_13 - 1]));
                    arr_55 [i_12] [i_13] [i_12] [i_12] = ((/* implicit */int) ((((unsigned long long int) arr_2 [i_14])) >> (((((arr_27 [21ULL]) % (arr_32 [i_12]))) - (186239080)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_15 = 2; i_15 < 12; i_15 += 3) 
        {
            /* LoopNest 2 */
            for (int i_16 = 2; i_16 < 11; i_16 += 4) 
            {
                for (int i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    {
                        arr_63 [i_17] [i_12] [i_16] [i_12] [i_12] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_30 [i_17] [i_16 + 2] [i_15] [i_12])) | (arr_49 [i_16 + 2]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                        arr_64 [i_12] [i_12] [i_17] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_16 - 2] [i_16 - 1] [i_15 - 2]))));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) 6622738179494999374ULL)) ? (4112013894983610212ULL) : (((/* implicit */unsigned long long int) 1385242234))));
                    }
                } 
            } 
            arr_65 [i_12] [i_12] [i_15 + 1] = var_9;
        }
    }
    var_33 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_1)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (var_0) : (var_2)))), (min((((/* implicit */unsigned long long int) -1083667827)), (6622738179494999369ULL)))))));
    var_34 = ((/* implicit */int) ((var_10) | (((/* implicit */unsigned long long int) var_11))));
    var_35 = ((int) ((((var_12) / (var_17))) != (((int) -2043648875))));
}
