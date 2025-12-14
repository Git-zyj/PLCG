/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58110
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned long long int) max(((+(-4715051854601145581LL))), (((/* implicit */long long int) var_5))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), ((-(((/* implicit */int) var_6)))))))));
            var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (var_13)))), (var_8)));
        }
        arr_6 [5ULL] = ((/* implicit */unsigned char) max(((+(var_13))), ((~(((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_3)))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_1)), (var_2))), ((~(((/* implicit */int) var_12))))));
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                arr_14 [i_2] [i_3] [i_4] = ((/* implicit */signed char) var_2);
                var_20 *= ((/* implicit */unsigned int) var_9);
                var_21 += ((/* implicit */short) var_7);
            }
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    var_22 = ((/* implicit */short) min((var_22), (var_11)));
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~((~(((/* implicit */int) var_6)))))))));
                        var_24 = ((/* implicit */unsigned int) var_5);
                        arr_22 [i_2] [i_3] [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5)))))));
                    }
                }
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    var_25 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))), (var_8)));
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        arr_28 [13LL] [i_8] [13LL] [i_5] [i_2] [i_2] = ((/* implicit */short) var_12);
                        arr_29 [i_2] [i_3] [i_2] [i_3] [i_8] [i_9] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((var_13), (((/* implicit */int) var_11))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_12)), (var_0)))), (max((((/* implicit */unsigned long long int) (unsigned short)27270)), (6442450944ULL)))))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)27252)))))));
                        var_27 = ((/* implicit */long long int) (~((-(((/* implicit */int) var_11))))));
                    }
                    for (int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        arr_33 [i_10] [9] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) max((var_6), (var_6)));
                        var_28 = ((/* implicit */short) (+(((/* implicit */int) var_14))));
                        var_29 = ((/* implicit */unsigned short) var_11);
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_9)))))))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_11 = 3; i_11 < 17; i_11 += 2) 
                {
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_3))));
                    var_32 = ((/* implicit */short) (+(((/* implicit */int) var_11))));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        var_33 = ((/* implicit */signed char) (-(2147483631)));
                        var_34 = ((/* implicit */unsigned long long int) var_15);
                        arr_40 [i_12] [i_12] [i_12] [i_11 - 3] [2ULL] [i_12] [i_11 - 3] = ((/* implicit */long long int) (+(0U)));
                    }
                    var_35 -= ((/* implicit */short) (+((+(((/* implicit */int) var_1))))));
                    var_36 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
                {
                    arr_44 [i_2] [i_2] [i_2] [i_2] [i_5] [i_13] = ((/* implicit */short) (~(((/* implicit */int) var_14))));
                    arr_45 [i_2] [i_2] [i_2] [i_2] &= min((((/* implicit */unsigned long long int) var_6)), (min((max((((/* implicit */unsigned long long int) var_10)), (var_16))), (var_8))));
                    arr_46 [i_2] [i_2] [i_5] [i_13] = ((/* implicit */unsigned char) min((min((max((((/* implicit */int) var_4)), (var_5))), ((-(var_5))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_7))))));
                }
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
                {
                    arr_50 [i_2] = ((/* implicit */unsigned int) var_13);
                    var_37 = ((/* implicit */unsigned short) (-(min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), ((+(((/* implicit */int) var_6))))))));
                    var_38 = ((/* implicit */unsigned int) (-(var_13)));
                    var_39 = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) var_7))))))));
                    arr_51 [i_2] [i_2] [(short)3] [i_5] [i_14] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
                }
            }
            /* vectorizable */
            for (unsigned char i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
            {
                arr_54 [i_15] [i_3] [3U] &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
                /* LoopSeq 1 */
                for (unsigned short i_16 = 0; i_16 < 18; i_16 += 3) 
                {
                    var_40 = ((/* implicit */long long int) (~(var_5)));
                    arr_58 [i_2] [i_15] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_17 = 2; i_17 < 16; i_17 += 3) 
                {
                    var_41 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                    var_42 = ((/* implicit */unsigned long long int) min((var_42), (var_8)));
                }
                var_43 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
            }
            var_44 = ((/* implicit */unsigned int) (-(var_13)));
        }
        for (int i_18 = 0; i_18 < 18; i_18 += 2) 
        {
            var_45 = ((/* implicit */short) (~(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_11)))))));
            var_46 = ((/* implicit */unsigned char) var_4);
        }
        for (unsigned int i_19 = 0; i_19 < 18; i_19 += 4) 
        {
            arr_68 [i_19] &= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            var_47 = (!(((/* implicit */_Bool) 1098575276)));
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_20 = 0; i_20 < 18; i_20 += 1) 
            {
                var_48 = ((/* implicit */short) (~(((/* implicit */int) var_3))));
                var_49 = ((/* implicit */unsigned char) (+(var_13)));
                var_50 = ((/* implicit */signed char) (~(9095669704333994873ULL)));
            }
            /* vectorizable */
            for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 1) 
            {
                var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))));
                var_52 = (-(var_5));
                var_53 = ((/* implicit */int) var_11);
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 18; i_22 += 1) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 2) 
                    {
                        {
                            arr_77 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_14))));
                            var_54 = ((/* implicit */signed char) var_3);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 2) 
            {
                arr_80 [i_2] [2U] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_1), (var_0))))));
                /* LoopNest 2 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    for (unsigned long long int i_26 = 0; i_26 < 18; i_26 += 4) 
                    {
                        {
                            var_55 = var_14;
                            var_56 = ((/* implicit */long long int) (~((-(((/* implicit */int) var_0))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_27 = 0; i_27 < 18; i_27 += 3) 
            {
                var_57 &= var_2;
                arr_89 [i_19] = ((/* implicit */unsigned char) var_4);
            }
            var_58 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_3)))), ((+(((/* implicit */int) var_11))))));
        }
        var_59 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(var_2))))));
    }
    var_60 = ((/* implicit */short) var_16);
    var_61 = var_11;
    var_62 = ((/* implicit */unsigned char) var_2);
}
