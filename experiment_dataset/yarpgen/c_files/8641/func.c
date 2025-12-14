/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8641
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_2] [i_1] [i_2] &= arr_1 [i_0 - 1];
                    var_11 *= ((/* implicit */short) (~(var_2)));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_8))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)30))))))))));
        var_14 |= ((/* implicit */unsigned int) (unsigned short)25446);
        var_15 = ((/* implicit */signed char) arr_10 [i_3] [i_3]);
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                {
                    arr_16 [i_3] [i_4] [i_5] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    var_16 = ((/* implicit */int) ((((/* implicit */int) arr_10 [i_5] [i_4])) != (((/* implicit */int) var_7))));
                    var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_5] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_15 [i_3] [i_4])));
                }
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        var_18 = ((/* implicit */int) min((((/* implicit */long long int) ((arr_14 [i_6]) ? (((((/* implicit */_Bool) arr_13 [i_6] [i_6])) ? (((/* implicit */unsigned int) var_2)) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_10 [i_6] [i_6]))))))))), (((long long int) arr_14 [i_6]))));
        arr_20 [i_6] = ((/* implicit */unsigned short) ((short) var_3));
    }
    for (short i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((min((((var_9) >> (((arr_12 [i_7] [i_7] [i_7]) - (1834426482247731747LL))))), (arr_15 [i_7] [i_7]))) | (((/* implicit */unsigned long long int) -1LL))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (-(((((/* implicit */_Bool) (-(arr_21 [i_7])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (var_4)))) : (((((/* implicit */_Bool) 2147483647)) ? (arr_15 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))))));
        var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)32767)), (arr_13 [i_7] [i_7])))) || (((/* implicit */_Bool) arr_10 [i_7] [i_7]))));
    }
    for (short i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
    {
        var_22 = (!(((/* implicit */_Bool) max((max((((/* implicit */int) var_1)), (var_10))), (((/* implicit */int) var_0))))));
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            for (signed char i_10 = 1; i_10 < 18; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    {
                        arr_35 [i_10] [i_9] [i_9] [i_9] = ((/* implicit */long long int) (~(min(((+(arr_11 [i_11]))), (((/* implicit */unsigned long long int) var_2))))));
                        arr_36 [i_10] = ((/* implicit */short) ((((/* implicit */long long int) var_4)) != (max((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_29 [i_11] [i_9] [i_8])), (arr_26 [i_8])))), (var_6)))));
                        var_23 = ((/* implicit */int) var_0);
                    }
                } 
            } 
        } 
    }
    var_24 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | ((~(((/* implicit */int) (short)2040))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_0)) ? (((((var_6) + (9223372036854775807LL))) >> (((var_2) - (2049962855))))) : (((/* implicit */long long int) ((var_2) ^ (((/* implicit */int) var_1))))))));
}
