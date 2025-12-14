/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90916
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((var_8), (((/* implicit */int) var_9)))) >> (((max((var_11), (((/* implicit */unsigned int) var_14)))) - (2013358037U)))))) ? (((/* implicit */int) (unsigned short)384)) : (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_17 &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_6))))) << (((var_11) - (1670428653U)))));
        var_18 = ((/* implicit */int) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) var_5);
            arr_5 [i_1] [i_1 + 1] = ((/* implicit */unsigned int) var_8);
        }
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_20 = ((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_1))))) || (((/* implicit */_Bool) ((unsigned int) 9223372036854775800LL)))))), (arr_7 [i_2] [i_2])));
        arr_8 [i_2] = max((((/* implicit */long long int) ((unsigned short) var_2))), (((((var_15) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) 1695975920)))) - (1742183573048480468LL))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_3 = 4; i_3 < 12; i_3 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_7 [i_2] [i_4]))))))));
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) var_2))))))));
            }
            for (int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                var_23 -= ((/* implicit */unsigned char) ((((((((/* implicit */int) (short)-2865)) - (22))) + (2147483647))) << (((arr_17 [i_3] [i_3 - 3] [i_3] [i_3 - 1]) - (6190683944965792393LL)))));
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_11))));
                var_25 = ((/* implicit */unsigned char) (~(arr_18 [i_3 - 2] [i_3 - 4] [i_3 + 1])));
            }
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                arr_22 [i_6] [i_3] [i_2] [i_2] = ((/* implicit */short) ((long long int) arr_20 [i_3] [i_3] [i_3 + 3] [i_3 + 1]));
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))) : (arr_9 [i_6])));
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_2))));
                var_28 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) != (22)));
            }
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                arr_25 [i_3] [i_3] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7] [i_7])))))) : (arr_14 [i_3 + 3] [i_3 + 2] [i_3 + 1] [i_3 - 1])));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    for (unsigned short i_9 = 1; i_9 < 11; i_9 += 1) 
                    {
                        {
                            arr_30 [i_8] = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_2]))) + (arr_9 [i_3])))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_3 + 3] [i_8] [i_3 + 3] [i_8] [i_3 + 3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_27 [i_3 - 1] [i_7] [i_7] [i_8] [i_8]))));
                            var_30 += ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_9 + 4])) > ((+(2147483647)))));
                            var_31 += ((/* implicit */unsigned char) arr_16 [i_2] [i_3] [i_3 + 2]);
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        {
                            var_32 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_3 - 1] [i_3 + 1])) % (((/* implicit */int) var_7))));
                            arr_38 [i_10] [i_10] [i_10] [i_10] [i_10] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 3])) <= (((/* implicit */int) var_7))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_3 + 2] [i_3 + 3] [i_3 + 1])) ? (((/* implicit */unsigned int) var_14)) : (arr_18 [i_3 - 3] [i_3 - 4] [i_3 + 2])));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_2] [i_3])) + (2147483647))) >> (((288230376143323136LL) - (288230376143323132LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)251)) ? (-2147483647) : (((/* implicit */int) var_7))))) : (((long long int) var_13))));
        }
        /* vectorizable */
        for (long long int i_13 = 1; i_13 < 13; i_13 += 1) /* same iter space */
        {
            var_35 -= ((/* implicit */unsigned int) ((unsigned char) var_10));
            var_36 ^= ((/* implicit */unsigned int) ((4294967277U) != (((/* implicit */unsigned int) -1695975921))));
            var_37 = ((/* implicit */int) arr_20 [i_2] [i_2] [i_13] [i_13 - 1]);
        }
        for (long long int i_14 = 1; i_14 < 13; i_14 += 1) /* same iter space */
        {
            var_38 += ((/* implicit */unsigned char) ((arr_33 [i_14]) << (((var_11) - (1670428666U)))));
            var_39 *= ((/* implicit */unsigned char) max((max((((/* implicit */long long int) max((0), (((/* implicit */int) arr_23 [i_2]))))), (((var_12) << (((var_14) - (2013358060))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_16 [i_2] [i_14] [i_2]) : (arr_35 [i_2] [i_14 + 2] [i_2] [i_14 - 1] [i_2] [i_2])))) : (var_11))))));
            var_40 = ((/* implicit */int) var_5);
        }
    }
    var_41 ^= ((/* implicit */int) max((min((((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_15))), (var_12))), (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_5)))), (var_3)))));
}
