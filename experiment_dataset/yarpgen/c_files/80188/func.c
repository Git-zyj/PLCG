/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80188
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) (signed char)63);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_11 [i_3] [i_3] = ((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_0]))) ? ((-(1383279722))) : (((arr_2 [6] [i_1]) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1])))));
                        arr_12 [14LL] [i_1] [i_2] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)-46))))))) ? (((/* implicit */int) var_4)) : ((+(((((/* implicit */_Bool) var_11)) ? (arr_7 [13U] [i_1] [i_1]) : (arr_5 [i_0] [i_0] [i_0])))))));
                        var_19 = ((/* implicit */_Bool) (((-(0ULL))) & (arr_10 [i_0] [i_1] [i_3])));
                        var_20 = ((((/* implicit */_Bool) ((short) ((unsigned short) var_13)))) ? (((int) (signed char)-124)) : (((/* implicit */int) ((signed char) arr_8 [i_1] [i_2]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_13 [i_4])))) ? (((arr_9 [i_4]) + (((/* implicit */int) arr_6 [i_4])))) : ((-(((/* implicit */int) var_3))))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                arr_21 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(arr_4 [10] [10])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                arr_22 [i_4] [i_5] [i_4] = var_0;
                arr_23 [i_4] = ((/* implicit */int) (signed char)-63);
            }
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                var_21 = ((/* implicit */_Bool) -1256829930);
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    for (unsigned char i_9 = 2; i_9 < 15; i_9 += 3) 
                    {
                        {
                            arr_31 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) -532494377)) ? (874816186) : (((/* implicit */int) (unsigned short)63488))));
                            arr_32 [i_4] = ((/* implicit */signed char) -1256829930);
                            var_22 = ((/* implicit */signed char) 1662525649);
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned short) var_0)))));
                            arr_33 [i_4] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (signed char)-108))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)63)))) : (((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */unsigned long long int) arr_19 [i_4] [i_9] [i_7] [i_7])) : (var_15)))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-46))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 2; i_10 < 15; i_10 += 3) 
                {
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_25 += ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20669))) <= (((((/* implicit */_Bool) (signed char)-28)) ? (5929222226565404563ULL) : (((/* implicit */unsigned long long int) arr_19 [15U] [i_7] [(short)1] [3])))));
                            arr_41 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63))));
                            arr_42 [i_4] [i_5] [i_5] [i_7] [i_5] [i_4] = ((/* implicit */short) ((signed char) ((arr_38 [i_4] [i_5] [i_7] [i_10] [i_4]) % (((/* implicit */long long int) var_17)))));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_10 + 1] [i_10 + 4] [i_11 - 1])))))));
                        }
                    } 
                } 
                arr_43 [i_4] [(signed char)18] [i_4] [(signed char)18] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))) : (arr_19 [i_4] [i_4] [(signed char)16] [i_7])));
            }
            /* LoopNest 3 */
            for (long long int i_12 = 1; i_12 < 16; i_12 += 4) 
            {
                for (int i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    for (long long int i_14 = 1; i_14 < 18; i_14 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_4] [i_5] [(short)14] [i_13] [i_4])) ? (arr_13 [i_12]) : (((/* implicit */unsigned long long int) 2047LL))))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) arr_20 [i_5] [i_13])))))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) arr_16 [i_4]))));
                            arr_50 [i_4] [i_4] [i_12] [i_13] [i_14] = (_Bool)0;
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
    {
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_15] [i_15] [i_15] [17ULL] [17ULL])))))) : (((arr_25 [i_15] [i_15] [i_15]) >> (((arr_28 [i_15] [i_15] [i_15] [i_15] [i_15]) - (982534800)))))))) : (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_15]))) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93))))))))));
        var_30 = ((/* implicit */unsigned short) ((int) arr_6 [i_15]));
    }
    var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_17)), (min((((/* implicit */unsigned long long int) (-(-1134360012)))), (((unsigned long long int) var_8))))));
    var_32 = ((/* implicit */_Bool) max((var_32), (((_Bool) (short)29730))));
    /* LoopNest 2 */
    for (unsigned int i_16 = 1; i_16 < 14; i_16 += 4) 
    {
        for (int i_17 = 3; i_17 < 15; i_17 += 2) 
        {
            {
                arr_60 [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_17] [i_17 + 1] [i_17] [i_17] [i_17 + 1] [i_17 - 2] [i_17])) ? (arr_13 [i_16 + 2]) : (((/* implicit */unsigned long long int) arr_58 [i_17 - 2] [(unsigned char)15] [i_16 + 1]))))) ? (min((min((((/* implicit */long long int) var_4)), (6817047415004768834LL))), (min((var_9), (((/* implicit */long long int) arr_27 [i_16] [8] [(signed char)14] [i_16])))))) : (((/* implicit */long long int) ((((((/* implicit */int) (short)-29730)) + (2147483647))) << (((((((/* implicit */int) (signed char)-63)) + (64))) - (1))))))));
                var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) arr_16 [i_17]))), (min((((/* implicit */unsigned long long int) arr_14 [16LL])), (arr_13 [i_16]))))))));
            }
        } 
    } 
}
