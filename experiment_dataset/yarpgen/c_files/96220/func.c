/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96220
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
    var_14 ^= ((/* implicit */long long int) (short)-21466);
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_4 [i_0 - 3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) (short)24503)) : (((/* implicit */int) arr_4 [i_0 + 1])))))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))))));
                    var_17 = ((/* implicit */_Bool) var_8);
                }
            } 
        } 
        var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_2 [i_0 - 3] [i_0 + 2] [i_0 + 2])), (var_7)))) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) arr_2 [i_0] [i_0 - 2] [i_0])))))))));
    }
    /* LoopSeq 4 */
    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
    {
        var_19 = ((/* implicit */signed char) (-(max((((/* implicit */int) (signed char)-1)), (1268818815)))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    {
                        var_20 &= ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
                        var_21 = arr_11 [i_3] [(unsigned char)7] [i_5] [i_6];
                        var_22 = ((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3] [i_6]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_7 = 2; i_7 < 9; i_7 += 3) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (unsigned char)209))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_7 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_1 [i_7 + 1]))))));
        var_25 ^= ((/* implicit */signed char) arr_3 [i_7]);
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_7 - 1] [i_7] [i_7] [i_7 + 1] [i_7 - 2]))))))))));
    }
    for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_12 [4LL] [12U] [12U] [i_8]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_9 = 1; i_9 < 19; i_9 += 3) 
        {
            var_28 = ((/* implicit */signed char) arr_9 [i_8] [i_9 - 1]);
            var_29 = ((/* implicit */unsigned short) (short)-24003);
            var_30 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [(unsigned char)4] [i_9 - 1] [0U] [i_8]))));
        }
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (short)19001)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_8])) ? (((/* implicit */int) arr_21 [i_8])) : (((/* implicit */int) var_10))))) : (4294967293U)));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_10] [i_10] [(unsigned char)5])) ? (((/* implicit */int) arr_13 [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_13 [i_10] [i_10] [i_10]))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                {
                    var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_18 [i_10]))));
                    var_34 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_11] [i_11] [i_11]))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        for (unsigned int i_14 = 2; i_14 < 9; i_14 += 3) 
                        {
                            {
                                arr_35 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) var_12);
                                var_35 = ((/* implicit */signed char) arr_5 [i_10] [i_12] [i_10]);
                                var_36 = ((/* implicit */int) min((var_36), (((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) (short)-21466)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_10] [2] [i_10] [i_10] [i_14])))))))));
                                var_37 = ((/* implicit */unsigned int) (short)-21466);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_10])) ? (arr_22 [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_10] [(unsigned char)12]))))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [19ULL])))))));
    }
}
