/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9788
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) (((((-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) (signed char)-108))))))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (~((-((+(((/* implicit */int) arr_1 [i_0])))))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned long long int) (-((~((-(((/* implicit */int) arr_1 [i_0]))))))));
                    var_15 = ((/* implicit */int) (((((+(137438953471LL))) - (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))) - (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) != (-1LL)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_2 [i_0] [i_1])))) / (((((-1975763900) + (2147483647))) << (((((/* implicit */int) var_5)) - (50)))))));
                            var_17 = ((/* implicit */short) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)93)))))))));
                            var_18 = ((/* implicit */short) (~((~(var_8)))));
                            arr_14 [i_0] [i_0] [i_0] [(_Bool)1] [2] [i_0] = (+(-9LL));
                        }
                        arr_15 [i_0] = ((/* implicit */long long int) (((+((-2147483647 - 1)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3])))))));
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [2] [i_0] [(_Bool)1] [i_0] [2] [i_0]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))))) % ((+((~(arr_11 [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 19; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_16 [i_5 + 3]))))));
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    {
                        arr_24 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-24))));
                        var_21 &= ((/* implicit */short) ((arr_20 [i_5 + 3]) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)56))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_9 = 2; i_9 < 22; i_9 += 4) 
            {
                for (unsigned short i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    {
                        var_22 += ((/* implicit */short) (~(((/* implicit */int) (signed char)-38))));
                        arr_29 [(_Bool)0] [3U] [i_5] [i_5] [i_5] = (~((+(9LL))));
                        arr_30 [i_5] [i_5] [i_5] [i_5 - 1] |= (!(((((/* implicit */_Bool) 9LL)) || (((/* implicit */_Bool) 1833694069)))));
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_5])))))));
        }
        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_2))))));
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            arr_33 [i_5 + 3] [i_5] = (~(((/* implicit */int) arr_17 [i_5 + 4])));
        }
        arr_34 [i_5] = (-(2LL));
        arr_35 [i_5] = ((/* implicit */_Bool) (-(((var_6) / (((/* implicit */int) (unsigned short)16376))))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 1; i_12 < 8; i_12 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            var_26 *= ((/* implicit */signed char) (-(((arr_32 [9] [9]) / (((/* implicit */int) var_5))))));
            var_27 = ((/* implicit */_Bool) (+(2103934162)));
        }
        /* LoopNest 3 */
        for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
        {
            for (int i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                for (short i_16 = 1; i_16 < 8; i_16 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_17 = 3; i_17 < 9; i_17 += 2) 
                        {
                            arr_53 [i_12] [i_14] [i_14] [(unsigned short)8] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 33552384))))) - ((~(((/* implicit */int) arr_23 [i_12]))))));
                            var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                        }
                        for (short i_18 = 0; i_18 < 11; i_18 += 4) 
                        {
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (+(((/* implicit */int) (short)32740)))))));
                            var_30 |= (~(((((/* implicit */int) (unsigned char)65)) * (((/* implicit */int) arr_45 [i_16] [i_18])))));
                            var_31 = ((/* implicit */int) ((arr_9 [i_12 + 1] [i_14] [i_12 + 1]) * (((/* implicit */unsigned int) (-(0))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_19 = 0; i_19 < 11; i_19 += 2) 
                        {
                            arr_60 [i_19] [8] [i_19] [i_19] [i_12] [i_19] [i_12] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (_Bool)1))))));
                            arr_61 [i_12] [i_12] [i_12] [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_32 [i_12 + 1] [i_12 + 3]))));
                        }
                        arr_62 [i_12] [i_12] [i_12 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_12 + 2])) && (((/* implicit */_Bool) (unsigned char)1))));
                        var_32 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_10 [i_12] [i_14] [i_15] [i_14] [i_12] [i_14] [(signed char)1])))) | (((/* implicit */int) var_3))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1]))) * (var_7)));
    }
    var_34 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)47)))) >> ((((((+(8LL))) + (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)238))))))) - (217LL)))));
    var_35 = ((/* implicit */short) (+((+((-(((/* implicit */int) var_3))))))));
}
