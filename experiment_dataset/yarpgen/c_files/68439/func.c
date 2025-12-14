/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68439
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
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned char) var_10);
                            arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((int) var_8))) && (((/* implicit */_Bool) arr_3 [i_0 + 4] [i_1] [i_2 + 3])))) ? (((/* implicit */int) ((unsigned char) (signed char)104))) : (max((((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_2] [i_3])))), (((/* implicit */int) arr_1 [i_0 + 1]))))));
                            arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) ((arr_9 [i_2 - 1]) + (arr_9 [i_2 + 2]))));
                            var_17 = ((/* implicit */signed char) (short)-7095);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_4 = 1; i_4 < 24; i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((int) arr_4 [i_4 + 1] [i_4] [i_0 + 3]));
                    var_18 += (-(((/* implicit */int) var_2)));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0 + 4] [i_0 - 1])))))));
                    arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_4 - 1] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4 + 1] [i_4 - 1]))) : (3430459995U)));
                }
                /* vectorizable */
                for (signed char i_5 = 1; i_5 < 24; i_5 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        arr_24 [(unsigned char)15] [i_6] [i_6] [(unsigned char)15] = ((/* implicit */unsigned short) (signed char)-50);
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-50)) ? ((~(((/* implicit */int) (signed char)50)))) : (arr_8 [i_0] [i_0] [i_5] [i_5 + 1] [i_6] [i_6]))))));
                    }
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0 + 4] [i_5 + 1]))))))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_7 = 1; i_7 < 22; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        arr_30 [i_8] [i_0] [i_7] [i_8] = ((/* implicit */unsigned int) ((signed char) 1550594598U));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) 14747459125649205174ULL))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_9 = 3; i_9 < 23; i_9 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_33 [i_0 - 1])))))));
                            arr_35 [i_0] [i_8] [i_1] [i_8] [i_8] [i_7] [i_7] = ((/* implicit */short) var_5);
                        }
                        /* vectorizable */
                        for (signed char i_10 = 3; i_10 < 23; i_10 += 4) /* same iter space */
                        {
                            arr_39 [i_0 + 2] [i_0] [(short)23] [i_0 + 4] [i_8] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_23 [i_0 + 3] [i_1] [i_8] [i_10 + 2] [i_1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)85))))));
                            var_24 ^= ((/* implicit */_Bool) 72056494526300160LL);
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_27 [i_8] [i_8] [i_7] [i_1] [i_8]) : (3923186684082827347LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)54235))))) : (1584079759U)));
                        }
                    }
                    for (unsigned short i_11 = 1; i_11 < 24; i_11 += 3) 
                    {
                        var_26 += ((/* implicit */long long int) arr_40 [i_0] [i_1] [i_0] [i_0] [i_1]);
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_9 [i_11 - 1]))))))));
                    }
                    var_28 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0 - 1] [12] [i_1] [i_7 - 1] [i_7])) ^ (((/* implicit */int) var_14))))))) ? (((/* implicit */int) arr_26 [i_0 + 4] [i_0] [i_7 + 2])) : (((/* implicit */int) ((signed char) var_10)))));
                    arr_42 [i_0] = min((min((var_1), (arr_23 [i_0] [i_7 + 3] [i_1] [i_0 + 4] [i_7]))), (((/* implicit */unsigned int) var_6)));
                }
                var_29 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) (signed char)122);
}
