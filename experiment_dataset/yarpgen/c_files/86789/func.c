/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86789
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
    var_11 = ((/* implicit */unsigned long long int) ((unsigned short) var_6));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = max((min((((/* implicit */long long int) max(((short)25424), ((short)-25425)))), (8842769342471229933LL))), (((/* implicit */long long int) var_8)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            var_12 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) -3345611515164157156LL))) ? ((+(((/* implicit */int) (short)25430)))) : (((/* implicit */int) arr_6 [i_2] [i_2]))));
                            arr_13 [i_0] [i_1] [i_0] [i_0] [(signed char)7] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((4275240646494142079ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) : ((~(((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_3] [i_5]))))));
                            var_14 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_2]))));
                            arr_18 [i_5] [i_0] [i_2] [i_0] [i_0] = (+(((unsigned long long int) arr_5 [i_0] [i_1] [i_2] [3LL])));
                            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-29290))));
                            var_16 = ((/* implicit */short) min((var_16), ((short)-2469)));
                        }
                        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3] [(signed char)7] [i_0] [i_0] [i_0]))));
                    }
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) 7127665184145832175LL)))) ? (((long long int) (short)25424)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)37241)))))), (((/* implicit */long long int) ((signed char) ((unsigned long long int) arr_4 [2ULL] [i_0 + 2]))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 3; i_7 < 17; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)25424)))))))));
                            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)37647))));
                            var_21 = ((/* implicit */long long int) min((max((max((691745298845572830ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_2] [i_2] [(signed char)12])))), (((unsigned long long int) arr_12 [i_0 - 1] [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_7]))));
                            arr_24 [(unsigned short)16] [(unsigned short)16] [i_0] [(unsigned short)16] [i_7] = ((/* implicit */signed char) (unsigned short)511);
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 2) 
                        {
                            arr_28 [(unsigned short)4] [(unsigned short)4] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)16352))));
                            var_22 -= ((/* implicit */unsigned char) (short)2473);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 3; i_9 < 16; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                            arr_32 [i_0] [i_0] [i_2] [14LL] [i_9] = ((/* implicit */unsigned short) -1LL);
                            var_24 = ((/* implicit */unsigned short) -7127665184145832175LL);
                            var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) 1073741823LL)))) ? (((((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_6] [i_6] [i_9] [i_9] [i_9])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_26 [i_6]))))) : (arr_14 [i_1] [i_1] [i_2] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_31 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [i_6] [(short)11] [i_2] [i_9]), (((/* implicit */unsigned char) arr_0 [i_6]))))))));
                            arr_33 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (2097024ULL))), (((((/* implicit */_Bool) min((arr_20 [i_0] [i_0] [2ULL] [i_2]), (((/* implicit */long long int) arr_23 [i_9]))))) ? (((unsigned long long int) 2847107317902211596ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27910)))))));
                        }
                        var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))) * (((unsigned long long int) 0LL))))));
                    }
                }
            } 
        } 
    } 
    var_27 &= ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    for (long long int i_10 = 1; i_10 < 10; i_10 += 2) 
    {
        var_28 = ((/* implicit */unsigned long long int) min((min((arr_27 [i_10] [i_10 + 1] [i_10] [i_10] [i_10 - 1] [i_10] [i_10]), (arr_27 [i_10] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10] [i_10 - 1] [(unsigned short)10]))), (((arr_27 [i_10] [i_10 - 1] [i_10] [i_10] [i_10] [i_10] [i_10]) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        var_29 = ((/* implicit */long long int) (signed char)3);
        var_30 = ((/* implicit */long long int) max((max(((-(1286986248705032562ULL))), ((+(var_10))))), (((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) var_5))))));
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
    {
        arr_41 [i_11] [11LL] = ((/* implicit */long long int) arr_21 [i_11] [i_11]);
        /* LoopNest 2 */
        for (unsigned short i_12 = 1; i_12 < 11; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                {
                    var_31 = ((/* implicit */long long int) (unsigned short)3422);
                    arr_46 [i_11] [i_11] [i_13] [i_13] = ((/* implicit */short) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */int) (short)1024)) - (997)))));
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 14; i_14 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) ((unsigned long long int) arr_11 [i_11] [i_12] [i_12 - 1] [i_14] [i_13]));
                        var_33 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)37640))));
                        var_34 |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) var_8))));
                        var_35 &= ((/* implicit */short) (unsigned short)35914);
                    }
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 3) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)41531))))))));
                        arr_51 [i_11] [i_11] [i_11] [i_13] = ((/* implicit */unsigned short) (+(((0ULL) << (((((/* implicit */int) arr_17 [i_11] [i_12] [i_13] [i_11] [i_15])) - (50)))))));
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_1 [i_12] [i_13]))) ? ((+(((/* implicit */int) (unsigned short)16256)))) : (((/* implicit */int) arr_37 [i_12 + 1]))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 3) 
            {
                {
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65033))) ? (var_6) : (arr_47 [i_16] [i_16] [i_16] [i_16])));
                    var_39 = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_12 [i_11] [i_11] [(unsigned short)17] [i_11] [i_11] [i_11]) == (8935141660703064064LL))))));
                    var_40 = ((/* implicit */unsigned short) arr_39 [i_17] [i_17]);
                }
            } 
        } 
        arr_58 [i_11] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (unsigned short)16352)) || (((/* implicit */_Bool) 16ULL))))));
        var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (short)-26082))))))));
    }
}
