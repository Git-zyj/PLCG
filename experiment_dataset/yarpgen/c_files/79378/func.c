/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79378
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_6 [i_1] [i_0] = ((/* implicit */int) var_2);
            /* LoopSeq 4 */
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                arr_9 [i_2 + 1] [i_1] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_3)) : (var_9)));
                var_10 = ((/* implicit */unsigned long long int) min((var_10), (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
            }
            for (short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */short) ((((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_8))));
                            var_12 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                        }
                    } 
                } 
                arr_17 [i_0] |= ((/* implicit */short) (+(((/* implicit */int) var_6))));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    arr_20 [4LL] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2)))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_5))))));
                    var_13 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_0)))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) var_1))));
                }
                var_14 -= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_0)) : (var_2));
            }
            for (short i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                var_15 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_4)))) ? ((-(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
                var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (var_0)));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                arr_26 [i_1] [i_0] [i_0] [i_1] &= ((/* implicit */short) (((-(var_2))) ^ (((/* implicit */unsigned long long int) var_0))));
                var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
            }
        }
        for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            var_20 |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (var_0))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                var_21 = ((/* implicit */long long int) (+(var_3)));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                /* LoopSeq 1 */
                for (long long int i_11 = 2; i_11 < 8; i_11 += 3) 
                {
                    arr_36 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2)));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), ((~((+(var_2)))))));
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_0)) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((~(var_0)))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))));
                        var_26 -= var_5;
                    }
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        var_27 *= ((/* implicit */signed char) var_1);
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) var_6))));
                    }
                }
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (var_3)));
                arr_43 [i_9] [i_9] = (-(var_2));
                arr_44 [i_0] [i_9] [i_0] [(short)10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */int) var_6))));
            }
        }
        for (short i_15 = 0; i_15 < 11; i_15 += 4) 
        {
            var_31 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (var_3)));
            arr_48 [i_0] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? ((-(var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (+(((/* implicit */int) var_7)))))));
            var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0)));
        }
        for (long long int i_16 = 0; i_16 < 11; i_16 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned int i_18 = 0; i_18 < 11; i_18 += 3) 
                {
                    for (unsigned short i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        {
                            arr_59 [i_19] [i_18] [(signed char)2] [i_18] [i_0] = ((/* implicit */unsigned char) var_7);
                            var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        }
                    } 
                } 
            } 
            arr_60 [i_0] [i_16] [i_16] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))));
            arr_61 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_3)))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))));
        }
        arr_62 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))));
        var_35 ^= ((/* implicit */signed char) var_0);
        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_7)))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_20 = 0; i_20 < 23; i_20 += 3) 
    {
        arr_66 [i_20] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_4))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9)))));
        /* LoopNest 2 */
        for (short i_21 = 0; i_21 < 23; i_21 += 3) 
        {
            for (unsigned int i_22 = 0; i_22 < 23; i_22 += 3) 
            {
                {
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */short) var_7)), (var_1)))) ? (var_9) : (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))), (((/* implicit */long long int) var_0)))))));
                    arr_73 [i_20] [i_21] [i_21] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_3)) : (min((var_0), (((/* implicit */unsigned int) var_5)))))))));
                    var_38 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) var_4))));
                    arr_74 [i_22] [i_20] [i_21] [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_3)) * (var_0)))) & (min((var_2), (((/* implicit */unsigned long long int) var_4))))))) ? ((+(max((((/* implicit */unsigned long long int) var_8)), (var_2))))) : (max((((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))))))));
                    var_39 = ((/* implicit */int) var_6);
                }
            } 
        } 
        arr_75 [i_20] [i_20] &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_7))))) ? (var_2) : (min((var_2), (((/* implicit */unsigned long long int) var_3))))))));
        /* LoopSeq 1 */
        for (unsigned short i_23 = 0; i_23 < 23; i_23 += 3) 
        {
            var_40 = ((/* implicit */unsigned short) var_2);
            var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) var_3))));
            /* LoopSeq 3 */
            for (unsigned int i_24 = 0; i_24 < 23; i_24 += 1) 
            {
                var_42 -= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_2))))))));
                /* LoopSeq 3 */
                for (short i_25 = 1; i_25 < 22; i_25 += 2) 
                {
                    var_43 = ((/* implicit */unsigned long long int) var_8);
                    var_44 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? ((-(var_9))) : (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))))));
                    var_45 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_8)), (var_1))))));
                    var_46 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_0))))) ? ((~(var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_3)) : (var_2)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))))))));
                    arr_85 [i_23] [i_23] [i_23] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) var_1)))))));
                }
                /* vectorizable */
                for (short i_26 = 0; i_26 < 23; i_26 += 1) 
                {
                    var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? ((-(var_3))) : (((/* implicit */int) var_6))));
                    arr_89 [i_20] [(unsigned char)22] |= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_6)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    arr_90 [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) var_4)) - (23994))))) : ((-(((/* implicit */int) var_4))))));
                    var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_0)));
                }
                for (signed char i_27 = 0; i_27 < 23; i_27 += 3) 
                {
                    var_49 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_7))))));
                    arr_95 [i_23] [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((((/* implicit */_Bool) ((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (min((var_9), (((/* implicit */long long int) var_0))))))));
                }
            }
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                var_50 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))), (min((var_0), (((/* implicit */unsigned int) var_1)))))))));
                var_51 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_1)) ? (var_9) : (var_9)))));
                var_52 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_0)) : (max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9))))))));
            }
            for (unsigned int i_29 = 4; i_29 < 22; i_29 += 3) 
            {
                var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), ((+(var_9)))))) ? (var_3) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))));
                arr_100 [i_20] [i_23] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))) & (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (var_3))), (((/* implicit */int) var_5)))))));
                var_54 = (((!(((/* implicit */_Bool) var_8)))) ? (min(((-(var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (var_3)))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))));
            }
        }
    }
    /* vectorizable */
    for (unsigned char i_30 = 0; i_30 < 16; i_30 += 3) 
    {
        var_55 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (var_3)));
        var_56 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3))));
        var_57 = var_1;
        arr_103 [i_30] = ((/* implicit */_Bool) ((((/* implicit */int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ^ (((/* implicit */int) var_8))));
    }
    /* LoopSeq 1 */
    for (short i_31 = 0; i_31 < 14; i_31 += 4) 
    {
        var_58 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) : (max((((/* implicit */unsigned int) var_3)), (var_0)))))));
        var_59 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) max((var_1), (((/* implicit */short) var_7))))) : (((/* implicit */int) var_1))))));
    }
    var_60 = ((/* implicit */short) var_8);
}
