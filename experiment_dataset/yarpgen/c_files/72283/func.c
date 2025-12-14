/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72283
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
    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_11))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_1);
        arr_4 [i_0] [i_0] = ((/* implicit */short) (unsigned short)15872);
        var_13 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [(short)8])) / (((/* implicit */int) arr_1 [10LL]))));
        var_14 = ((/* implicit */long long int) arr_0 [i_0]);
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        arr_8 [i_1] [i_1 - 1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(short)2]))))))) ? ((((-(((/* implicit */int) arr_5 [i_1])))) / ((+(((/* implicit */int) arr_2 [(short)8])))))) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1]))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (~(var_1))))));
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((-1054534171) + (2147483647))) >> (((((/* implicit */int) ((short) arr_5 [i_1]))) + (16432)))));
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)15860))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) arr_2 [6LL])) ^ (((/* implicit */int) arr_2 [(signed char)0])))))));
        arr_14 [i_2 - 1] = ((/* implicit */short) ((arr_13 [i_2 - 1]) + (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)136)))))));
        arr_15 [i_2] = ((/* implicit */unsigned char) arr_0 [i_2 - 1]);
        arr_16 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2 - 1])) ? (((/* implicit */int) arr_11 [i_2 - 1])) : (((/* implicit */int) (unsigned char)119))));
    }
    var_19 |= ((/* implicit */short) var_6);
    var_20 = ((/* implicit */long long int) var_0);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)49664)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : ((+(((/* implicit */int) (signed char)102))))));
        arr_21 [i_3] = ((/* implicit */unsigned long long int) -1054534171);
        var_22 = ((/* implicit */short) var_5);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((signed char) var_10)))));
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                arr_30 [i_4] [(short)10] [i_4] = ((/* implicit */short) (~(arr_19 [i_4] [i_5])));
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    var_24 = ((/* implicit */int) (((!(((/* implicit */_Bool) (short)0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (1375465205) : (((/* implicit */int) var_9)))))));
                    arr_34 [i_6] [i_6] [i_4] [i_4] = ((int) var_10);
                }
                arr_35 [i_6] [i_5] [i_6] &= ((/* implicit */int) arr_33 [i_4] [(short)18] [i_6] [i_6]);
            }
            for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                var_25 |= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_32 [i_4] [i_4] [i_5] [i_4] [(unsigned short)15])) <= (((/* implicit */int) arr_31 [i_4] [15U])))) ? (((/* implicit */int) arr_33 [i_4] [i_4] [i_8] [i_8])) : (((/* implicit */int) var_10))));
                arr_39 [i_4] [i_4] [i_4] [i_4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_22 [i_4])));
                var_26 ^= 0ULL;
                arr_40 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [0U] [i_8]))) <= (arr_27 [i_8] [13U]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_11))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_4] [i_5] [i_4] [i_4])) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) arr_28 [i_4] [i_4] [i_4])))))));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_8] [i_4] [i_5] [i_4] [i_4])) ? (((/* implicit */int) arr_32 [i_4] [i_5] [i_5] [i_4] [i_8])) : (((/* implicit */int) var_2))));
            }
            for (short i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                arr_43 [i_4] [i_4] [6U] = arr_22 [i_4];
                arr_44 [i_4] [i_4] = var_10;
            }
            arr_45 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_26 [i_4]))))));
            var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)3)) >= (((/* implicit */int) arr_37 [i_5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_4] [i_4] [i_4] [i_5] [i_5])) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)139)))))));
        }
        for (int i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) + (((((/* implicit */_Bool) 8646911284551352320ULL)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (6159904374409784062ULL)))));
            var_30 -= ((/* implicit */signed char) ((long long int) (-(var_11))));
        }
        var_31 = ((/* implicit */int) (-(arr_27 [i_4] [i_4])));
        var_32 = ((/* implicit */short) (~((-9223372036854775807LL - 1LL))));
    }
    /* vectorizable */
    for (unsigned short i_11 = 4; i_11 < 8; i_11 += 2) 
    {
        var_33 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)47)) : ((-(((/* implicit */int) (unsigned char)16))))));
        var_34 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)63380)) != (((/* implicit */int) arr_11 [i_11])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_41 [(unsigned short)9] [i_11 - 4] [i_11 - 3] [i_11 - 1]))));
        var_35 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (2912735676902369364LL) : (-9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_10 [i_11 + 1])));
    }
    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
    {
        var_36 = ((((/* implicit */long long int) ((int) (unsigned char)128))) + (min((((/* implicit */long long int) (short)-25052)), (7705155602910437223LL))));
        arr_54 [i_12] = ((/* implicit */int) (~((~((~(0U)))))));
        arr_55 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? ((-(min((1122061566281729488ULL), (((/* implicit */unsigned long long int) var_10)))))) : (((((/* implicit */_Bool) max((-2912735676902369367LL), (((/* implicit */long long int) var_10))))) ? (arr_25 [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_31 [20LL] [i_12]))))))))));
    }
}
