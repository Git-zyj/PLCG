/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96178
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) var_3);
                        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_13))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        arr_12 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-44))));
                        arr_13 [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) var_5);
                    }
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) var_7);
                        arr_16 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */int) var_10);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                        {
                            arr_20 [i_0] [i_1] [i_2] [8ULL] [i_6] [i_5] = ((/* implicit */int) var_12);
                            arr_21 [i_6] [i_5] [i_2] [i_2] [i_5] [i_0] = ((/* implicit */short) var_9);
                            arr_22 [i_0] [i_1] [i_2] [i_5] [i_0] [i_0] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-105)) == (((/* implicit */int) (_Bool)0))))), ((+(var_6)))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */int) var_11))));
                            var_24 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_0))))));
                            arr_25 [i_0] [i_5] [i_2 - 2] [i_5] [i_7] = ((/* implicit */signed char) min((((/* implicit */short) var_0)), (var_1)));
                            arr_26 [i_5] [i_1] = ((/* implicit */_Bool) ((var_5) * (var_5)));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                        {
                            arr_29 [i_5] = ((/* implicit */unsigned int) var_12);
                            arr_30 [i_5] [(unsigned short)9] [(unsigned short)9] [i_5] [i_5] [i_8] [i_8] = ((/* implicit */long long int) ((var_2) / (var_2)));
                        }
                        var_25 = ((/* implicit */int) max((((/* implicit */unsigned int) ((var_15) ^ (var_2)))), (var_16)));
                        arr_31 [i_0] [i_1] [i_2] [i_2 + 1] [i_2 - 3] [i_5] = ((/* implicit */signed char) var_1);
                    }
                    arr_32 [i_2] [i_2 - 2] [i_2] = ((/* implicit */unsigned short) max((var_5), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) < (var_19))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_9 = 1; i_9 < 8; i_9 += 4) /* same iter space */
    {
        arr_35 [i_9] = ((/* implicit */unsigned short) var_7);
        var_26 = ((/* implicit */signed char) var_15);
        var_27 = ((/* implicit */long long int) (~(((/* implicit */int) var_14))));
    }
    for (int i_10 = 1; i_10 < 8; i_10 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_11 = 3; i_11 < 7; i_11 += 3) 
        {
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                {
                    arr_45 [i_11] [i_11] = ((/* implicit */unsigned char) var_16);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned int) var_6);
                        var_29 = ((/* implicit */long long int) (+(((/* implicit */int) var_13))));
                    }
                    for (short i_14 = 2; i_14 < 10; i_14 += 3) 
                    {
                        var_30 = var_13;
                        var_31 = ((/* implicit */_Bool) min((min((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)106)))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_32 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (var_19)));
                        arr_57 [i_10] [6LL] [i_11] [i_12] [(unsigned short)8] [i_15] = ((/* implicit */_Bool) var_15);
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
                    {
                        var_33 = var_17;
                        var_34 = ((/* implicit */unsigned long long int) (+(min((var_2), (((/* implicit */int) min((var_0), (var_11))))))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
                    {
                        arr_66 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) var_10);
                        var_35 = ((/* implicit */long long int) min((7458661450010204610ULL), (((/* implicit */unsigned long long int) 0U))));
                        var_36 = ((/* implicit */long long int) var_12);
                        var_37 = ((/* implicit */_Bool) min((var_9), (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (var_9)))))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
                    {
                        arr_70 [i_10] [i_11] [i_10] [i_10] [5U] = ((/* implicit */unsigned short) (+(var_10)));
                        arr_71 [i_11] [i_11] [i_12] [i_18] [i_10] [(signed char)9] = ((/* implicit */signed char) var_3);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 1) 
                        {
                            arr_75 [4U] [i_11] [6U] [(short)1] [i_11] [i_11 + 2] = ((/* implicit */int) var_13);
                            arr_76 [i_11] [i_11] [i_12] [i_11] [i_19] = min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) == (var_4)))), (var_6));
                            arr_77 [5] [i_10 + 3] [i_11] [i_10 + 1] [i_10 + 1] = ((/* implicit */unsigned short) var_16);
                        }
                        arr_78 [i_18] [i_18] [i_18] [i_18] [i_18] [i_11] = ((/* implicit */long long int) (-((+(min((((/* implicit */unsigned long long int) var_11)), (var_10)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_20 = 3; i_20 < 10; i_20 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_21 = 0; i_21 < 11; i_21 += 4) 
                        {
                            var_38 = var_17;
                            arr_86 [i_11] [i_11] = ((/* implicit */_Bool) var_1);
                            var_39 = ((/* implicit */unsigned long long int) var_0);
                            var_40 = ((/* implicit */long long int) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((var_15) + (1434822651))) - (18)))));
                        }
                        arr_87 [i_11] [(signed char)3] [i_11 + 2] [i_11] = ((/* implicit */short) var_17);
                        arr_88 [(signed char)4] [i_12] [i_11] = ((/* implicit */unsigned int) var_3);
                        arr_89 [i_20] [i_11] [i_11] [i_10] = (~(((/* implicit */int) var_14)));
                        var_41 = ((/* implicit */signed char) (~(((/* implicit */int) var_18))));
                    }
                    arr_90 [i_12] [i_11] [i_11] [i_10] = ((/* implicit */unsigned char) var_8);
                }
            } 
        } 
        var_42 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))), ((-(var_4)))));
    }
    var_43 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))), (var_5)));
}
