/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96453
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
    var_17 = ((/* implicit */unsigned int) var_15);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                    arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) var_1);
                }
            } 
        } 
        arr_11 [(unsigned short)1] = ((/* implicit */short) var_10);
        /* LoopSeq 3 */
        for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            /* LoopSeq 4 */
            for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                arr_16 [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (var_12)))), ((~(var_8)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) var_8);
                        var_19 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_16)))) + (2147483647))) >> (((((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) - (20479U)))));
                        arr_23 [(_Bool)1] = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
                    }
                    var_20 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_15))));
                    var_21 = ((/* implicit */signed char) (~((-(var_6)))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_15)) & (((/* implicit */int) (!(var_16))))))))))));
                    var_23 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((var_14) - (3549815656554487698LL)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
                    var_24 = ((/* implicit */short) (((+(var_10))) <= (((/* implicit */long long int) max((41366471U), (41366474U))))));
                }
            }
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_37 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_14)))) || (((/* implicit */_Bool) (+(var_12)))))))));
                            arr_38 [i_9 - 1] = ((/* implicit */_Bool) (((-(((/* implicit */int) var_7)))) ^ ((~(((/* implicit */int) var_2))))));
                            var_25 = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
                            arr_39 [i_0] [i_3 - 1] [(short)12] [(short)12] [i_10] = ((/* implicit */short) var_15);
                            arr_40 [i_0] [i_0] [i_0] [i_9 - 1] [i_10] = ((/* implicit */int) (+(12897647529553243878ULL)));
                        }
                    } 
                } 
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_3))));
                var_27 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_2))))));
                /* LoopSeq 4 */
                for (short i_11 = 2; i_11 < 20; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_12 = 1; i_12 < 19; i_12 += 4) /* same iter space */
                    {
                        arr_49 [i_0] [i_3 - 2] [i_3 - 2] [i_11 - 2] [i_12] = ((/* implicit */unsigned short) var_1);
                        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_14) ^ (var_6))))));
                        arr_50 [i_3] [i_12] [i_11] [i_12] = ((/* implicit */_Bool) ((max((((/* implicit */int) var_1)), (var_0))) & (((/* implicit */int) var_4))));
                    }
                    for (short i_13 = 1; i_13 < 19; i_13 += 4) /* same iter space */
                    {
                        arr_53 [i_0] [i_0] [20U] [20U] [i_0] = ((/* implicit */_Bool) (+(((var_0) ^ (var_0)))));
                        var_29 = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) var_2))) & (var_6)))));
                        arr_54 [0] [i_3] [i_8] [(_Bool)1] [i_8] = ((/* implicit */_Bool) max((2592342491658443248LL), (((/* implicit */long long int) (unsigned short)7524))));
                        var_30 = ((/* implicit */unsigned short) (+((~((+(((/* implicit */int) var_4))))))));
                        arr_55 [i_0] [i_3] [i_0] [(_Bool)1] [1U] [(_Bool)1] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)44241))));
                    }
                    arr_56 [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21295))) > (var_8)));
                }
                for (short i_14 = 2; i_14 < 20; i_14 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */signed char) max((max(((-(4253600827U))), (max((((/* implicit */unsigned int) var_4)), (var_5))))), (((/* implicit */unsigned int) max((var_0), (max((((/* implicit */int) var_13)), (var_0))))))));
                    arr_59 [i_0] [i_3] [i_8] [i_14] = ((/* implicit */unsigned long long int) var_16);
                    var_32 = ((/* implicit */short) var_2);
                }
                /* vectorizable */
                for (short i_15 = 2; i_15 < 20; i_15 += 4) /* same iter space */
                {
                    var_33 -= ((/* implicit */signed char) var_16);
                    var_34 = ((/* implicit */_Bool) (-(var_6)));
                    var_35 = ((/* implicit */short) var_15);
                    var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)21295))));
                }
                /* vectorizable */
                for (unsigned int i_16 = 2; i_16 < 19; i_16 += 1) 
                {
                    arr_64 [(short)3] [21] [21] [10ULL] [18U] = ((/* implicit */unsigned int) var_11);
                    arr_65 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_16);
                }
                var_37 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -1146211006)), (125936729U)));
            }
            /* vectorizable */
            for (unsigned int i_17 = 0; i_17 < 22; i_17 += 1) /* same iter space */
            {
                arr_68 [i_0] [i_17] = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                /* LoopSeq 3 */
                for (short i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    arr_72 [i_0] [(_Bool)1] [i_17] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                    arr_73 [(_Bool)1] [i_17] = ((/* implicit */_Bool) (+(((/* implicit */int) var_15))));
                }
                for (unsigned short i_19 = 0; i_19 < 22; i_19 += 4) 
                {
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_1))));
                    arr_77 [i_17] [i_17] = ((/* implicit */short) var_5);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_20 = 3; i_20 < 21; i_20 += 1) 
                    {
                        arr_81 [(signed char)0] [i_0] [i_3] [i_17] [(_Bool)1] [(unsigned short)19] [1LL] = ((/* implicit */unsigned short) (-(var_3)));
                        arr_82 [i_17] [i_17] = ((/* implicit */long long int) (+(var_8)));
                        arr_83 [i_19] [(unsigned char)20] [(unsigned char)20] |= ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                    }
                    for (short i_21 = 0; i_21 < 22; i_21 += 1) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
                        var_40 = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
                        arr_87 [i_0] [i_3] [i_17] [i_19] [i_17] = ((/* implicit */short) var_11);
                        arr_88 [i_3] [i_17] [21] [i_3 - 2] [15U] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_16))));
                    }
                    for (short i_22 = 0; i_22 < 22; i_22 += 1) /* same iter space */
                    {
                        arr_92 [i_0] [(unsigned short)17] [i_17] [(short)7] [i_17] [i_19] [i_22] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (var_8))))) <= (var_8)));
                        arr_93 [i_17] [i_3] [i_3] [i_3 + 1] [(short)2] = ((((/* implicit */int) (unsigned short)44240)) ^ (((/* implicit */int) var_11)));
                    }
                    var_41 = ((/* implicit */unsigned int) min((var_41), (var_5)));
                }
                for (unsigned char i_23 = 2; i_23 < 21; i_23 += 2) 
                {
                    var_42 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) var_0)) <= (var_10)));
                    arr_98 [i_17] [i_17] [6ULL] [i_23] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)21295))));
                }
            }
            for (unsigned int i_24 = 0; i_24 < 22; i_24 += 1) /* same iter space */
            {
                var_43 = ((/* implicit */unsigned char) var_12);
                var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (-(((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
            }
            arr_101 [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)21287))));
        }
        for (int i_25 = 0; i_25 < 22; i_25 += 3) 
        {
            var_45 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-16564))));
            arr_105 [i_0] [i_25] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)13340))));
            /* LoopSeq 1 */
            for (unsigned char i_26 = 0; i_26 < 22; i_26 += 2) 
            {
                var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) min((4253600825U), ((~(4253600827U))))))));
                var_47 *= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) min((var_4), (((/* implicit */unsigned char) var_2))))))))));
            }
            arr_110 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(var_10)));
        }
        /* vectorizable */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            var_48 = ((/* implicit */signed char) (-(var_14)));
            arr_115 [i_27] [i_0] [i_27] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
        }
        /* LoopSeq 1 */
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            var_49 = ((/* implicit */short) max((max((var_14), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))));
            /* LoopNest 3 */
            for (unsigned short i_29 = 0; i_29 < 22; i_29 += 1) 
            {
                for (signed char i_30 = 0; i_30 < 22; i_30 += 1) 
                {
                    for (unsigned short i_31 = 1; i_31 < 18; i_31 += 2) 
                    {
                        {
                            arr_125 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) <= ((~(41366489U)))));
                            var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) (!(((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_14)))))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_51 = ((/* implicit */unsigned short) (-(var_12)));
}
