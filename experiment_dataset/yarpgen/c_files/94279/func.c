/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94279
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
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 0ULL))));
    var_21 = ((unsigned long long int) (signed char)3);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((long long int) (_Bool)1));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_2 [i_0 + 4] [i_0] [i_1]);
        }
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            arr_9 [6ULL] [i_0] [i_2] = ((/* implicit */_Bool) var_10);
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
            {
                for (long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_13 [i_0 + 4] [i_3 + 1]))) | (((/* implicit */int) arr_13 [i_0 + 3] [i_3 - 2]))));
                            arr_19 [i_0] [i_2] [i_3] [i_4] [i_3] [i_5] [i_4] = ((/* implicit */unsigned short) (-(var_10)));
                            arr_20 [i_0] [i_0] [i_3 + 1] [i_5] = ((/* implicit */signed char) -9);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        {
                            arr_29 [i_0] [i_7] [i_6] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (short)-32104)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14764))))) : (((/* implicit */int) var_7))));
                            arr_30 [i_8] [i_7] [i_6] [i_7] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((short) var_7))))) / (min((var_4), (((/* implicit */unsigned long long int) ((short) (unsigned short)5199)))))));
                        }
                    } 
                } 
                arr_31 [i_0] [i_0] [i_6] = ((/* implicit */short) var_7);
                arr_32 [i_0] [i_6] [i_6] &= ((/* implicit */signed char) arr_22 [i_0] [i_0 - 1] [i_6]);
            }
        }
        /* vectorizable */
        for (long long int i_9 = 1; i_9 < 14; i_9 += 4) 
        {
            arr_35 [i_0] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14764)) / (((/* implicit */int) var_2))));
            arr_36 [14LL] [i_9] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (arr_10 [i_0] [i_9 - 1] [i_9] [i_9]) : (((/* implicit */int) (short)-10744)))))));
            arr_37 [i_0] [i_9] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((long long int) (signed char)15)));
            /* LoopNest 2 */
            for (unsigned short i_10 = 2; i_10 < 14; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    {
                        arr_45 [i_11] [i_10] [i_11] [i_11] [i_9 + 2] [i_0] |= ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14764))) / (arr_27 [i_0 + 1] [i_9] [i_11] [i_10] [i_11]));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 4; i_12 < 15; i_12 += 1) 
                        {
                            arr_49 [i_10] [i_9] [i_10] [i_10 - 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */short) ((signed char) arr_2 [i_11] [i_9 - 1] [i_10 + 3]));
                            arr_50 [i_0] [i_9] [i_0] [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) arr_0 [i_0] [i_12]);
                        }
                        arr_51 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_11] [i_10 + 2] [i_9] [i_0 + 1] [i_0]);
                    }
                } 
            } 
        }
        arr_52 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (short)1)))))));
        arr_53 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((int) arr_38 [i_0] [i_0 + 4])));
        arr_54 [i_0] = ((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0]);
    }
    var_22 = ((/* implicit */short) var_2);
}
