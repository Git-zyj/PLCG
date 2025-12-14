/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87175
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
    var_18 *= ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)61)) & (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) -5707555632400819465LL)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) var_16);
                arr_6 [i_1] = min((((var_5) ? (-582076562) : (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) (signed char)31)));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_2 = 4; i_2 < 15; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned int) var_9);
                    var_20 += (signed char)-32;
                    var_21 = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_2 - 3] [i_2 - 4] [i_2 - 4] [i_2 - 4])) & (((/* implicit */int) (unsigned char)189))));
                }
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_3]), (((/* implicit */unsigned char) var_17)))))) == ((~(max((-26728367696853218LL), (((/* implicit */long long int) 3916333829U))))))));
                        var_22 *= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-9))));
                    }
                    var_23 = ((/* implicit */long long int) (~(((1086442657U) << (((var_0) + (5978023757495298463LL)))))));
                }
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    var_24 *= ((/* implicit */short) 12148948871044483074ULL);
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        var_25 += ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                        var_26 += (~(((/* implicit */int) (signed char)-32)));
                        var_27 = min(((~(2147483647))), (((/* implicit */int) (_Bool)1)));
                    }
                    var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    var_29 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))));
                    arr_28 [i_0] [i_1] [i_7] = (!(var_1));
                    arr_29 [i_7] [i_1] [i_0] = ((/* implicit */long long int) (((+(6297795202665068526ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_1] [i_1] [i_0])) != (((/* implicit */int) var_3))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 15; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [15LL] [i_1] [i_9])) ^ (597679750)));
                                var_31 *= ((/* implicit */long long int) var_5);
                                var_32 = var_5;
                            }
                        } 
                    } 
                    var_33 *= (~(((var_16) * (((/* implicit */int) var_1)))));
                }
            }
        } 
    } 
    var_34 += ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))))), (var_12)));
    /* LoopNest 3 */
    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
                    {
                        var_35 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_42 [i_10] [i_11] [i_11] [i_13]))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_11] [i_12 + 1]))) / (3770698907U)))));
                        var_36 += ((/* implicit */unsigned char) (+(min((((8U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), (3916333831U)))));
                        var_37 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_10] [i_10]))))));
                        /* LoopSeq 2 */
                        for (short i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            var_38 *= ((/* implicit */unsigned short) var_16);
                            arr_45 [i_10] [i_11] [i_10] [i_13] [i_10] [i_13] = ((/* implicit */unsigned char) var_5);
                        }
                        /* vectorizable */
                        for (short i_15 = 0; i_15 < 20; i_15 += 2) 
                        {
                            var_39 *= ((/* implicit */unsigned long long int) (unsigned char)190);
                            var_40 += ((/* implicit */unsigned char) (~(var_0)));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 3) /* same iter space */
                    {
                        arr_53 [i_10] = (-(((/* implicit */int) arr_51 [i_10] [i_12 + 1] [i_12] [i_16])));
                        var_41 = ((/* implicit */unsigned short) (signed char)-41);
                        var_42 += ((/* implicit */unsigned char) 524287);
                        arr_54 [i_12] [i_10] [i_12 + 1] [i_16] = ((/* implicit */signed char) (_Bool)1);
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        var_43 = ((/* implicit */int) 3236652929302921980LL);
                        var_44 = ((/* implicit */unsigned char) var_1);
                        var_45 *= (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15))))));
                    }
                    for (unsigned short i_18 = 3; i_18 < 19; i_18 += 2) 
                    {
                        arr_59 [i_10] [i_10] = ((/* implicit */unsigned int) (-(min((((((/* implicit */int) var_2)) + (((/* implicit */int) var_6)))), (((/* implicit */int) arr_58 [i_10] [i_10] [i_12 + 1]))))));
                        var_46 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_13)) == (-213405997))))));
                    }
                    var_47 += ((/* implicit */unsigned short) var_1);
                }
            } 
        } 
    } 
}
