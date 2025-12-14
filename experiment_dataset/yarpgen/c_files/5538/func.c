/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5538
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) min((min(((-(((/* implicit */int) (unsigned char)218)))), ((+(((/* implicit */int) var_9)))))), (((/* implicit */int) var_5))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (unsigned char)194))));
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
    }
    for (short i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_16 = ((/* implicit */_Bool) var_1);
        arr_6 [i_1] [i_1] = max((((/* implicit */short) (!(((/* implicit */_Bool) min(((unsigned short)21649), (((/* implicit */unsigned short) var_1)))))))), (arr_2 [i_1] [(unsigned char)6]));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            arr_11 [i_2] = var_12;
            var_17 = ((/* implicit */long long int) max(((+(((/* implicit */int) (signed char)19)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2])))))));
            arr_12 [i_2] [i_2] [i_1 + 2] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_7))), (((/* implicit */unsigned long long int) max((max(((unsigned char)234), ((unsigned char)1))), (((/* implicit */unsigned char) min((var_5), (var_8)))))))));
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (unsigned char)13))));
        }
        for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 2; i_4 < 10; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            var_19 ^= max((((/* implicit */unsigned long long int) (unsigned char)187)), (arr_18 [i_6] [i_1] [i_1] [i_1]));
                            arr_21 [i_1] [i_3] [i_4] [i_5] [i_6] &= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)234))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_13 [i_5]))));
                            arr_22 [i_1] [i_3] [i_3] = ((/* implicit */short) arr_19 [i_1 + 2] [i_3] [i_4] [i_3] [i_4] [i_6]);
                        }
                    } 
                } 
            } 
            var_21 = (~(((/* implicit */int) arr_13 [i_3])));
            arr_23 [i_3] = ((/* implicit */long long int) arr_13 [i_3]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                arr_28 [(unsigned short)10] [i_3] [i_3] [(unsigned short)10] = ((/* implicit */unsigned long long int) (unsigned char)170);
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (short)24084))));
                arr_29 [i_3] = ((/* implicit */unsigned long long int) arr_2 [i_1 + 1] [i_1 + 1]);
            }
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    arr_37 [i_3] [i_3] [i_8] [i_8] [i_9] [(signed char)4] = ((/* implicit */unsigned short) min((var_7), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)23771)))))));
                    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)85))));
                }
                var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-24066))));
            }
        }
        arr_38 [i_1] = ((/* implicit */long long int) max((max((6798188109130091327ULL), (((/* implicit */unsigned long long int) (~(-1320310652)))))), (((/* implicit */unsigned long long int) (unsigned char)112))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
    {
        arr_41 [(short)12] = ((/* implicit */unsigned char) arr_39 [i_10] [i_10]);
        arr_42 [i_10] = ((/* implicit */int) var_3);
        /* LoopSeq 4 */
        for (short i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            arr_47 [i_11] [i_11] [i_10] = ((/* implicit */short) arr_40 [i_10] [i_11]);
            arr_48 [i_10] [i_10] [i_11] = ((/* implicit */signed char) var_8);
            arr_49 [i_10] = ((/* implicit */signed char) (+(330610690)));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_25 = ((/* implicit */long long int) 330610690);
            arr_52 [i_10] [i_10] [i_10] = ((/* implicit */signed char) arr_51 [i_10] [i_12]);
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) arr_44 [i_12]))));
        }
        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_64 [i_16] [(_Bool)1] [i_14] [i_13] [i_10])))))))));
                            arr_65 [i_16] [i_15] [i_14] [i_13] [i_10] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (_Bool)1))));
            }
            for (int i_17 = 0; i_17 < 16; i_17 += 2) 
            {
                var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)10616))));
                arr_70 [i_10] [i_13] [i_10] [i_10] = ((/* implicit */short) var_2);
                arr_71 [i_10] [i_13] [i_17] [i_17] &= ((/* implicit */unsigned short) (-((-(((/* implicit */int) (_Bool)1))))));
            }
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
            var_31 = ((/* implicit */int) var_8);
        }
        for (long long int i_18 = 4; i_18 < 12; i_18 += 3) 
        {
            /* LoopNest 3 */
            for (short i_19 = 0; i_19 < 16; i_19 += 1) 
            {
                for (unsigned short i_20 = 1; i_20 < 15; i_20 += 4) 
                {
                    for (long long int i_21 = 1; i_21 < 14; i_21 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) var_1);
                            var_33 = ((/* implicit */unsigned long long int) -3950669619000737519LL);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_22 = 0; i_22 < 16; i_22 += 4) 
            {
                arr_88 [(short)9] [(unsigned short)3] [(signed char)1] [i_18 + 2] = ((/* implicit */signed char) var_0);
                var_34 = ((/* implicit */unsigned char) var_6);
            }
            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (~(arr_40 [i_10] [i_18 - 1]))))));
        }
        arr_89 [(short)13] = ((/* implicit */unsigned short) arr_39 [(unsigned char)14] [i_10]);
    }
    for (long long int i_23 = 1; i_23 < 21; i_23 += 2) 
    {
        var_36 += ((/* implicit */short) min(((-(-330610670))), (((/* implicit */int) max((((/* implicit */short) (!((_Bool)0)))), (max(((short)28071), (((/* implicit */short) var_6)))))))));
        /* LoopNest 2 */
        for (unsigned char i_24 = 1; i_24 < 20; i_24 += 3) 
        {
            for (signed char i_25 = 3; i_25 < 20; i_25 += 1) 
            {
                {
                    arr_97 [i_23] [i_24] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((min((arr_93 [(_Bool)1]), (((/* implicit */short) arr_96 [i_23] [i_23] [i_25 - 3] [(signed char)0])))), (((/* implicit */short) var_10)))))));
                    var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) var_5))));
                }
            } 
        } 
        arr_98 [i_23] = ((/* implicit */long long int) (+(((/* implicit */int) arr_92 [i_23 + 1]))));
    }
}
