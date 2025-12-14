/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67619
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? ((~(var_14))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) ? (1968438736U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
    var_16 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_2 [i_0 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1])) / (arr_2 [i_0])))) ? (((var_11) / (arr_1 [i_0] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1679262348U)) ? (-1497818598) : (-1497818598)));
            arr_9 [0] [i_0 + 1] = ((/* implicit */short) var_13);
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                var_17 = ((/* implicit */unsigned int) ((long long int) (unsigned short)65535));
                arr_12 [(short)6] [i_2] = ((/* implicit */int) (-(arr_1 [i_0 + 1] [i_0 + 1])));
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)14] [i_0]))) != (((((/* implicit */_Bool) 8589934336ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_1 [i_1] [i_2]))))))));
                arr_13 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) 244036688U);
            }
            var_19 = var_3;
        }
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
        {
            arr_16 [i_0] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_3]);
            arr_17 [i_0] = ((/* implicit */short) var_8);
        }
        var_20 = ((/* implicit */unsigned long long int) arr_5 [i_0]);
    }
    /* LoopSeq 1 */
    for (unsigned int i_4 = 1; i_4 < 20; i_4 += 3) 
    {
        var_21 ^= ((((/* implicit */_Bool) 1497818611)) ? ((+(-1497818604))) : (((/* implicit */int) arr_19 [i_4] [i_4])));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                {
                    arr_25 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_18 [i_5] [i_6])), (arr_24 [i_4] [i_5] [i_5] [i_6]))), (((/* implicit */unsigned long long int) ((1497818592) >> (((5935832877184119845LL) - (5935832877184119837LL))))))))) ? (((/* implicit */int) var_7)) : ((~(1497818603)))));
                    arr_26 [i_6] [i_5] = ((/* implicit */unsigned short) var_11);
                    arr_27 [i_4 + 2] [i_5] [i_6] = ((/* implicit */_Bool) (unsigned char)0);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_7 = 1; i_7 < 21; i_7 += 4) 
                    {
                        arr_30 [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_21 [i_4] [i_4 + 1] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) << (((((/* implicit */int) arr_21 [i_7 + 1] [i_5] [i_4 - 1])) - (19)))));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_2))));
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_28 [i_4 - 1] [i_5]))));
                            arr_35 [i_4] [i_5] [i_6] [i_7 - 1] [i_8] = ((/* implicit */unsigned long long int) (!(arr_31 [i_4] [i_5] [i_5] [i_7] [i_7 - 1] [i_7] [i_7])));
                            arr_36 [i_4 + 2] [i_4 + 2] [i_6] [i_4] [10] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_4 + 1] [i_4 + 1])) ? (arr_32 [i_4 - 1] [i_5] [i_6] [i_7 + 1] [i_8]) : (((/* implicit */int) arr_28 [i_4 + 2] [5ULL]))));
                        }
                        var_24 = ((((/* implicit */_Bool) arr_29 [i_7 - 1] [i_7 + 1] [i_4 + 2] [i_4 + 2])) ? (1497818604) : (((/* implicit */int) ((signed char) var_9))));
                    }
                }
            } 
        } 
    }
}
