/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56902
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) (+(((0U) ^ (arr_2 [i_2 + 1])))));
                            var_15 = ((/* implicit */unsigned long long int) var_2);
                            arr_12 [(unsigned short)1] [i_2] [10] [(_Bool)1] = ((/* implicit */unsigned short) var_13);
                        }
                    } 
                } 
                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_3) : (4294967295U)));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            /* LoopSeq 4 */
            for (int i_6 = 1; i_6 < 8; i_6 += 4) /* same iter space */
            {
                var_17 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */long long int) arr_18 [i_4] [i_4]))))));
                var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) arr_10 [i_4] [i_5] [i_4] [i_4] [i_5] [i_4])) : (((/* implicit */int) var_5)))))));
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
            }
            for (int i_7 = 1; i_7 < 8; i_7 += 4) /* same iter space */
            {
                arr_23 [i_4] [i_5] = ((/* implicit */short) var_11);
                arr_24 [i_4] [i_5] [i_7] = ((/* implicit */signed char) var_13);
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_7]))));
            }
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_21 = ((/* implicit */short) (-(var_9)));
                var_22 = var_12;
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    var_23 = ((/* implicit */unsigned short) ((arr_21 [(short)9] [i_4] [i_4]) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_6)))))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_22 [i_4] [i_4] [i_8 - 1])) : (((/* implicit */int) arr_22 [i_4] [i_5] [i_8 - 1]))));
                    arr_31 [i_4] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_8 - 1] [i_8] [i_9] [8] [8] [i_9])) ? (((/* implicit */int) arr_10 [i_8 - 1] [i_8 - 1] [i_8] [i_9] [i_8] [i_9])) : (((/* implicit */int) arr_10 [i_8 - 1] [i_8 - 1] [(unsigned short)3] [i_8] [i_8 - 1] [i_8]))));
                    var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_8 - 1]))));
                }
            }
            for (int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                var_26 = ((/* implicit */_Bool) var_0);
                arr_35 [(unsigned short)6] [i_4] [i_4] [i_10] = ((/* implicit */_Bool) var_7);
            }
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                for (unsigned short i_12 = 1; i_12 < 11; i_12 += 2) 
                {
                    {
                        var_27 = ((/* implicit */short) arr_30 [i_5] [i_11] [i_12 + 1] [i_12 + 1] [i_12] [i_12 - 1]);
                        arr_40 [i_12] [i_12] [(unsigned char)2] [9] [i_4] [9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) : (arr_0 [i_4] [i_5])));
                        arr_41 [i_4] [11U] [i_4] = ((/* implicit */signed char) var_3);
                    }
                } 
            } 
        }
        for (long long int i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_37 [i_4] [i_13] [i_4]))));
            var_29 = ((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_4]);
            var_30 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
            var_31 = ((/* implicit */short) arr_22 [i_4] [i_4] [i_4]);
        }
        for (long long int i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_16 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_16 [i_4] [i_14] [i_4]))));
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                for (unsigned short i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (arr_21 [i_4] [i_4] [i_4])));
                        /* LoopSeq 1 */
                        for (short i_17 = 0; i_17 < 12; i_17 += 2) 
                        {
                            var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_17]))) > (var_4)));
                            var_35 ^= ((((/* implicit */_Bool) arr_25 [i_4] [i_17] [i_17])) ? (((/* implicit */int) arr_48 [i_17])) : (((/* implicit */int) var_5)));
                            var_36 = ((/* implicit */int) 6950874084538710696LL);
                        }
                        var_37 = ((/* implicit */unsigned short) (+(var_1)));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (long long int i_18 = 0; i_18 < 12; i_18 += 2) 
        {
            for (int i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                for (unsigned char i_20 = 3; i_20 < 8; i_20 += 4) 
                {
                    {
                        arr_64 [i_4] [i_4] [i_19] [i_4] = ((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_4] [i_4] [i_20] [i_20 + 2])))));
                        /* LoopSeq 2 */
                        for (short i_21 = 0; i_21 < 12; i_21 += 4) 
                        {
                            arr_67 [i_4] [i_4] [i_18] [i_19] [i_4] [i_21] = ((/* implicit */int) ((((/* implicit */long long int) 31)) >= (arr_62 [i_20] [(_Bool)1] [i_20] [i_20 + 2] [i_20 + 2])));
                            var_38 = ((((/* implicit */int) arr_49 [i_4] [i_20 + 2] [i_20] [i_21])) == (((/* implicit */int) arr_49 [i_4] [i_20 - 1] [i_20] [i_20])));
                        }
                        for (long long int i_22 = 0; i_22 < 12; i_22 += 3) 
                        {
                            var_39 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_20 - 1] [i_20] [i_20 - 1] [i_20 + 3] [i_20 + 4] [i_20])) ? (((/* implicit */int) arr_9 [i_20 - 2] [i_20] [i_20 - 1] [i_20 + 3] [i_20 - 1] [i_22])) : (((/* implicit */int) arr_9 [i_20 + 1] [i_20 - 3] [i_20 - 2] [i_20 - 1] [i_20 + 2] [(unsigned char)2]))));
                            arr_71 [(unsigned char)3] [i_18] [i_19] [i_4] [i_22] = ((/* implicit */short) ((arr_18 [i_4] [i_4]) != (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                            arr_72 [i_4] [i_20 + 1] [i_4] [i_4] [(signed char)1] = ((/* implicit */unsigned short) var_6);
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_23 = 0; i_23 < 12; i_23 += 4) /* same iter space */
    {
        var_40 = ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
        arr_75 [i_23] = ((/* implicit */int) arr_32 [i_23]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_24 = 0; i_24 < 12; i_24 += 1) 
        {
            arr_80 [i_24] = ((/* implicit */short) ((((/* implicit */int) (signed char)12)) | (((/* implicit */int) ((unsigned char) var_1)))));
            var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_46 [i_23] [i_24] [i_24]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_25 = 0; i_25 < 12; i_25 += 4) 
            {
                var_42 -= ((long long int) arr_36 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [i_25]);
                var_43 = ((/* implicit */unsigned int) ((unsigned long long int) var_10));
                arr_84 [i_24] [i_24] [i_25] = ((/* implicit */int) 2910959456U);
            }
        }
        var_44 *= ((/* implicit */unsigned long long int) (+(var_12)));
    }
    for (unsigned char i_26 = 0; i_26 < 12; i_26 += 4) /* same iter space */
    {
        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_27 = 4; i_27 < 11; i_27 += 1) 
        {
            var_46 = ((/* implicit */short) (unsigned char)70);
            var_47 = max((((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_51 [i_26])))))))), (((short) (~(-17)))));
            var_48 = ((/* implicit */signed char) arr_29 [i_26] [i_27] [i_27] [i_26] [i_26] [(unsigned char)3]);
        }
    }
}
