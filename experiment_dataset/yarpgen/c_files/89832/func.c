/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89832
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)58);
                var_12 = ((/* implicit */_Bool) var_2);
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((arr_3 [i_0] [i_1 - 3]) & (min((((/* implicit */long long int) (unsigned char)191)), (max((((/* implicit */long long int) arr_2 [i_0] [i_1 + 2] [i_1 + 2])), (arr_3 [i_0] [i_0])))))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 4; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((long long int) arr_3 [i_0] [i_3]))) < (((unsigned long long int) (short)0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_11 [i_0] [i_0 + 2] [i_0])) >> (((var_3) + (745422306))))) != (((arr_13 [i_0] [i_0] [i_0 + 2] [i_0]) + (((/* implicit */int) arr_9 [i_0])))))))) : (((((((arr_9 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_1)) + (15925)))))));
                                arr_15 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_0 + 2] [i_0 + 2] [i_2] [i_3 - 4]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_13 [i_1] [i_2 + 2] [i_3] [i_4])))))) : (arr_3 [i_0] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_7)));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_1] [(short)13] [i_0]);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_5 = 4; i_5 < 9; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 8; i_6 += 2) 
        {
            for (short i_7 = 1; i_7 < 8; i_7 += 1) 
            {
                {
                    arr_23 [i_5] [i_6] [i_7] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5 - 1] [i_6] [(unsigned char)17] [i_7])) ? (279275953455104ULL) : (((/* implicit */unsigned long long int) max((arr_3 [i_5] [i_5]), (((/* implicit */long long int) var_10)))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 2; i_8 < 7; i_8 += 1) 
                    {
                        arr_26 [i_5] [i_6] [i_7 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_24 [i_8 + 1] [i_8 + 1] [i_8 + 3] [i_8 + 1]), (((/* implicit */long long int) arr_20 [i_8 - 1] [i_7 + 1] [i_8]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47))) : (((arr_24 [i_8 - 2] [i_8] [i_8] [i_8 - 1]) | (((/* implicit */long long int) arr_20 [i_8 + 1] [i_7 - 1] [i_7]))))));
                        arr_27 [i_5] = ((/* implicit */signed char) ((max((var_5), (((/* implicit */long long int) (signed char)-117)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_8] [i_7] [i_5 - 4])) ? (((/* implicit */int) arr_6 [i_8] [i_8 + 1] [i_8 + 2] [i_8])) : (((((/* implicit */int) arr_10 [i_6] [i_6] [i_7] [i_7] [i_7 + 2] [i_7])) ^ (((/* implicit */int) arr_6 [i_5] [i_6 + 1] [i_7] [i_8 + 1])))))))));
                        arr_28 [i_5] [i_6] [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))) <= (arr_8 [i_6 - 1] [i_6 - 2] [i_6 - 2] [i_6 + 2])))) & (-1709576813)));
                    }
                    arr_29 [i_5] [i_5] [i_6 - 2] [i_7] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (unsigned char)208))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) << (((((/* implicit */int) ((short) (signed char)117))) - (105))))) : (((/* implicit */int) (unsigned short)41595))));
                }
            } 
        } 
        arr_30 [i_5] [i_5 - 4] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_22 [i_5 - 2] [i_5])) : (arr_13 [i_5] [i_5] [i_5] [i_5 - 3]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) var_0)) : (288221580058689536ULL)))) ? (arr_14 [(_Bool)0] [8ULL] [8ULL] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5 - 4] [i_5 - 3] [i_5] [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
        var_14 = max((((arr_24 [i_5] [i_5] [i_5 - 4] [i_5 - 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5 - 4]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_5] [i_5])) + (((/* implicit */int) (signed char)116))))));
    }
    for (int i_9 = 2; i_9 < 11; i_9 += 1) 
    {
        var_15 = (-(((/* implicit */int) arr_11 [i_9] [i_9] [10LL])));
        arr_33 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) * (min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)16))))), (var_5)))));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 12; i_10 += 1) 
        {
            for (unsigned short i_11 = 1; i_11 < 10; i_11 += 1) 
            {
                {
                    var_16 = max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_11])) < (((/* implicit */int) arr_1 [i_9]))))), (((((/* implicit */_Bool) arr_11 [i_10] [i_10 + 1] [i_10])) ? (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (unsigned char)233))))) : (((/* implicit */int) min((arr_11 [i_9] [i_9] [i_10]), (arr_10 [i_10] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
                    var_17 = ((/* implicit */unsigned long long int) var_4);
                    var_18 = ((/* implicit */long long int) (((~(((-8214331629879316866LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-118))))))) < (((/* implicit */long long int) ((((arr_39 [i_9] [(signed char)6] [i_9] [i_9]) >= (((/* implicit */int) var_11)))) ? (1297874940) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) var_1)))))))));
                }
            } 
        } 
        arr_40 [i_9] [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_2 [i_9 + 2] [i_9] [i_9 - 2]))) != (((/* implicit */unsigned int) var_8))));
    }
    for (unsigned int i_12 = 1; i_12 < 11; i_12 += 2) 
    {
        arr_44 [i_12] [i_12] = ((/* implicit */int) (((((!(((/* implicit */_Bool) -6659981417601131701LL)))) && (((/* implicit */_Bool) arr_3 [(unsigned char)16] [i_12])))) && (((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_0 [i_12]))))));
        arr_45 [i_12] = ((/* implicit */int) ((unsigned short) max((var_2), (((/* implicit */short) arr_9 [(signed char)8])))));
        var_19 = ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)-74))) - (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_0))))))) ? (arr_14 [i_12] [i_12 + 4] [i_12] [i_12] [i_12 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_12] [i_12 + 4] [i_12] [i_12]))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 1; i_13 < 15; i_13 += 1) 
    {
        arr_49 [i_13] = ((/* implicit */int) -8447142422743330712LL);
        /* LoopNest 2 */
        for (unsigned short i_14 = 4; i_14 < 13; i_14 += 2) 
        {
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
            {
                {
                    arr_56 [i_13 + 1] [i_14] [i_15] [i_15] = ((/* implicit */short) (signed char)-123);
                    arr_57 [i_15] [i_14] [i_15] = ((/* implicit */unsigned short) arr_52 [i_13 + 1] [i_13 + 1] [i_13 + 1]);
                    arr_58 [i_15] [i_14] [i_15] = ((/* implicit */int) (_Bool)0);
                }
            } 
        } 
        arr_59 [i_13] = ((/* implicit */long long int) var_10);
    }
}
