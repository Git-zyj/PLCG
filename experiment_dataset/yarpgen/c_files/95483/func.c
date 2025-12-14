/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95483
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2])) ? (arr_3 [i_1 - 2] [i_1 - 1] [i_1 - 2]) : (var_1)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_20 = ((/* implicit */short) (-(12429654246947062490ULL)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) arr_9 [i_4] [i_4 - 2] [i_4] [i_4 - 2] [i_4 + 1]);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(arr_11 [11] [i_0] [i_2] [12LL])));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) / (arr_1 [i_2])))) ? (((/* implicit */long long int) arr_4 [i_0] [i_1 - 1] [i_2])) : (arr_5 [i_0] [i_1 + 1])));
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    var_23 = ((/* implicit */short) (+(arr_5 [i_1 + 1] [i_1 + 1])));
                    var_24 ^= ((/* implicit */unsigned char) 6017089826762489120ULL);
                    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 2] [i_5] [i_0])) ? (arr_15 [i_0] [i_0] [i_1] [i_5]) : (arr_13 [i_0] [i_0] [i_0] [i_0])))) ? (var_11) : ((+(18446744073709551615ULL))));
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 152670538U)) ? (-6154765883032763431LL) : (7130765407645922694LL)));
                    arr_18 [i_6] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_11) ^ (arr_16 [i_6] [i_0] [i_0])))) ? (((/* implicit */unsigned int) (-(arr_3 [i_0] [i_1] [5U])))) : (arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1])));
                }
                var_27 = ((/* implicit */unsigned int) arr_14 [i_0] [i_0]);
                var_28 = ((/* implicit */short) arr_4 [i_1 - 2] [i_0] [i_0]);
            }
        } 
    } 
    var_29 ^= var_15;
    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_8)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_7 = 2; i_7 < 19; i_7 += 3) /* same iter space */
    {
        var_31 -= ((/* implicit */short) ((((((/* implicit */int) arr_2 [6U] [6U])) + (2147483647))) >> (((arr_15 [12U] [i_7] [i_7] [12U]) - (6430845173209531735LL)))));
        var_32 += ((/* implicit */unsigned char) ((unsigned long long int) arr_1 [i_7 - 1]));
        var_33 = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) var_3)))));
        var_34 += ((/* implicit */unsigned int) (unsigned char)50);
        arr_22 [i_7] = ((/* implicit */long long int) arr_2 [i_7] [(short)8]);
    }
    /* vectorizable */
    for (unsigned char i_8 = 2; i_8 < 19; i_8 += 3) /* same iter space */
    {
        var_35 = ((/* implicit */long long int) (((~(18446744073709551615ULL))) << (((5977297382383190684LL) - (5977297382383190675LL)))));
        var_36 = ((/* implicit */unsigned int) ((unsigned long long int) var_5));
    }
    var_37 += ((/* implicit */unsigned int) var_5);
}
