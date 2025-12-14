/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82871
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_1])))) ? (arr_0 [i_1 + 2]) : (((/* implicit */unsigned long long int) -8246024336694204848LL))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) arr_2 [i_1 + 1] [i_1 + 2]);
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 2] [i_2])) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) 988455565U)) < (-8246024336694204848LL)));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))))));
                var_22 = ((/* implicit */_Bool) -8246024336694204858LL);
            }
            for (short i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                arr_9 [i_3] [i_3] [i_3] |= ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2]))));
                var_23 = ((/* implicit */int) arr_0 [i_3]);
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_3]);
            }
        }
        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) arr_14 [(_Bool)1]);
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 3; i_6 < 11; i_6 += 4) 
                {
                    var_24 ^= ((/* implicit */unsigned short) (+(arr_3 [i_6 + 1] [i_6 - 1] [i_6 + 1])));
                    var_25 = ((/* implicit */signed char) (~(((/* implicit */int) arr_19 [i_6 + 2] [i_6 + 2] [i_6] [i_6 - 1]))));
                }
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_4] [i_4])) >= (((/* implicit */int) ((((/* implicit */int) (unsigned char)49)) == (((/* implicit */int) (short)-2048))))))))));
                    arr_26 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */short) arr_4 [i_0] [i_4] [i_4] [i_7]);
                }
                for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    arr_30 [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_5])) && (((/* implicit */_Bool) arr_13 [i_0]))));
                    arr_31 [i_0] [i_0] [i_0] [i_0] [i_4] |= ((/* implicit */long long int) (~(((/* implicit */int) arr_29 [i_4] [i_4] [i_5] [i_8]))));
                }
            }
            arr_32 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_16 [i_0] [i_4] [i_4] [i_4]) != (arr_16 [i_0] [4ULL] [i_4] [i_4])));
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        }
        arr_33 [i_0] |= ((/* implicit */unsigned int) arr_12 [i_0] [i_0]);
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)-2048))) >= (((((/* implicit */_Bool) (unsigned char)207)) ? (-6476366156225737689LL) : (-6476366156225737689LL)))));
    }
    for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        var_29 = ((/* implicit */short) 7710908598965568043ULL);
        arr_36 [i_9] = ((/* implicit */short) (!((_Bool)1)));
    }
    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        var_30 &= ((/* implicit */long long int) ((min((max((((/* implicit */unsigned long long int) arr_24 [(short)1] [(short)1] [i_10])), (arr_14 [i_10]))), (((/* implicit */unsigned long long int) arr_20 [i_10] [i_10] [i_10] [i_10])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2436566745U)) != (max((((/* implicit */unsigned long long int) arr_27 [i_10] [i_10])), (arr_0 [i_10])))))))));
        /* LoopSeq 1 */
        for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            var_31 -= ((/* implicit */unsigned char) (~((~((~(-3593968116118386064LL)))))));
            var_32 = ((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_10] [5ULL])) ? (7611742438973149573LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_10] [i_10] [i_10]))))))))));
            arr_42 [i_11] [(short)1] = ((/* implicit */unsigned long long int) arr_1 [i_11]);
        }
    }
    var_33 |= ((/* implicit */signed char) 7710908598965568043ULL);
}
