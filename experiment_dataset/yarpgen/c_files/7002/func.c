/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7002
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned short) max((max((arr_0 [i_0 + 2]), (((/* implicit */long long int) var_14)))), (arr_0 [i_0 + 2])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_2 [i_0 + 3] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_11))))))));
            var_22 ^= ((/* implicit */short) var_12);
            var_23 = ((/* implicit */unsigned short) (-(arr_0 [i_0 + 3])));
            var_24 = ((/* implicit */unsigned char) ((unsigned int) arr_4 [i_0] [i_0 + 3] [i_1 - 1]));
        }
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_25 &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((unsigned long long int) var_10)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
        /* LoopNest 2 */
        for (signed char i_3 = 3; i_3 < 11; i_3 += 2) 
        {
            for (int i_4 = 2; i_4 < 10; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        for (long long int i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_20 [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (arr_12 [i_3] [i_3] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27681))))))), (min((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_19 [i_2] [i_2] [i_2] [i_2] [i_5] [i_2]))), (((/* implicit */unsigned long long int) max((arr_2 [(unsigned char)7] [(short)12]), (((/* implicit */long long int) var_11)))))))));
                                var_26 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)27688)))) ? (((/* implicit */int) ((short) min((((/* implicit */short) var_10)), (var_2))))) : (((/* implicit */int) (!((_Bool)1))))));
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */_Bool) (unsigned short)37838)) ? (((/* implicit */int) (unsigned short)27688)) : (((/* implicit */int) (short)-4996)))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37854))))))));
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_5 [i_4]))));
                }
            } 
        } 
        var_28 = ((/* implicit */signed char) ((-9223372036854775789LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)20)))));
    }
    for (unsigned short i_7 = 1; i_7 < 15; i_7 += 2) 
    {
        arr_24 [i_7] = ((/* implicit */_Bool) arr_4 [i_7] [i_7] [i_7]);
        arr_25 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 3657309911366502938ULL))))) * (((/* implicit */int) var_18))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        arr_29 [i_8] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-22177))));
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)27693))))) ? (((/* implicit */int) arr_22 [i_8] [9])) : (((/* implicit */int) ((unsigned short) var_5)))));
        /* LoopSeq 2 */
        for (short i_9 = 1; i_9 < 8; i_9 += 1) 
        {
            arr_34 [i_9] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 12777933133260735821ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)32)))));
            var_30 = ((/* implicit */unsigned int) (signed char)-120);
            var_31 = ((/* implicit */unsigned short) ((signed char) arr_19 [i_8] [i_8] [i_9 + 1] [i_9] [(signed char)3] [i_8]));
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-5507)) : (((/* implicit */int) ((unsigned short) var_1))))))));
        }
        for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_11 = 2; i_11 < 8; i_11 += 3) 
            {
                for (unsigned int i_12 = 3; i_12 < 9; i_12 += 4) 
                {
                    {
                        var_33 -= ((/* implicit */unsigned short) ((int) arr_23 [i_10] [i_10]));
                        var_34 = ((((/* implicit */_Bool) 8762847999249372450LL)) ? (arr_38 [i_12 - 1] [i_10] [i_10] [i_12 - 2]) : (((/* implicit */long long int) (+(((/* implicit */int) (short)5507))))));
                        var_35 &= ((/* implicit */unsigned int) ((arr_19 [i_12 - 3] [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11 - 2]) << (((arr_19 [i_12 + 1] [7] [i_12] [i_12] [i_12] [i_11 - 1]) - (3631576288922124609ULL)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_13 = 2; i_13 < 9; i_13 += 1) 
            {
                for (short i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    for (long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        {
                            arr_51 [i_14] = ((/* implicit */unsigned long long int) ((arr_28 [(_Bool)1]) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            var_36 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_18)) ? (var_1) : (arr_12 [i_8] [i_10] [i_10] [i_8]))) + (9223372036854775807LL))) << ((((((~(((/* implicit */int) (signed char)18)))) + (40))) - (21)))));
                            arr_52 [i_8] [i_8] [0LL] [i_14] [i_8] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                        }
                    } 
                } 
            } 
        }
        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)27706))) % (-8762847999249372450LL))))));
    }
    var_38 &= ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)39))));
    var_39 ^= ((/* implicit */long long int) (~(var_5)));
}
