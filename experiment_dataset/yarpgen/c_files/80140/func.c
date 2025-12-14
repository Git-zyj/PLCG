/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80140
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_10 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
        var_11 += ((/* implicit */int) (+(var_4)));
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) (~((~(var_4)))));
        var_12 = ((/* implicit */int) ((_Bool) ((int) (signed char)22)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 23; i_2 += 4) 
        {
            for (signed char i_3 = 2; i_3 < 21; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (int i_5 = 3; i_5 < 22; i_5 += 3) 
                        {
                            {
                                arr_17 [i_1] [(short)17] = ((/* implicit */unsigned int) (+(((int) var_6))));
                                arr_18 [(short)20] [i_2] [i_3] [i_4] [(unsigned short)6] |= ((/* implicit */unsigned short) var_4);
                                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                                arr_19 [i_1] [i_3] [i_3] [i_2] [5] [i_2] [10U] = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_2] [i_2] |= ((/* implicit */int) ((unsigned int) var_5));
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((signed char) var_7));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */int) ((unsigned int) var_9));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_3)))) ? (var_7) : (var_3)));
                        }
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                        {
                            arr_28 [i_1] [i_1] [i_1] [i_6] [i_8] = ((/* implicit */signed char) var_4);
                            arr_29 [i_1 + 1] [i_1 + 1] [i_3 + 2] [(short)0] [i_1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (4066830231U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-42)))));
                            var_17 += ((/* implicit */long long int) ((short) var_0));
                            arr_30 [i_1] = (+(var_3));
                        }
                    }
                    for (unsigned int i_9 = 4; i_9 < 23; i_9 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) var_1)))));
                        var_19 = ((/* implicit */long long int) var_0);
                        arr_34 [i_2] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (var_8) : ((-(((/* implicit */int) var_0))))));
                    }
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_7) : (var_8)));
                    arr_35 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_1))));
                }
            } 
        } 
        var_21 *= ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
    }
    for (unsigned int i_10 = 3; i_10 < 10; i_10 += 4) 
    {
        var_22 += ((/* implicit */int) ((signed char) var_2));
        var_23 = ((/* implicit */int) (+((~(var_6)))));
    }
    for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
        {
            var_24 ^= ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) var_2)))));
            var_25 |= ((/* implicit */short) min((var_6), (((/* implicit */unsigned int) (+((~(((/* implicit */int) var_2)))))))));
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                for (short i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 17; i_15 += 3) 
                        {
                            arr_53 [i_15] [(unsigned short)9] [i_11] [i_11] [(unsigned short)9] [i_11] = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_4)))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_27 = ((signed char) (+(((/* implicit */int) min((((/* implicit */short) var_5)), (var_0))))));
                            arr_58 [i_11] [i_12] [i_13] [i_12] [i_16] = ((/* implicit */unsigned int) ((signed char) (~(var_8))));
                            arr_59 [i_11] [i_11] = ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) (unsigned short)2)))));
                        }
                        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(var_4))))));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) max((var_0), (((/* implicit */short) var_2)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) var_0))))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(var_8))), (((/* implicit */int) ((unsigned short) var_5)))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_5)))))));
            arr_60 [i_11] [i_11] [i_11] = ((/* implicit */short) ((unsigned short) min((((long long int) var_4)), (((/* implicit */long long int) var_3)))));
        }
        for (unsigned int i_17 = 0; i_17 < 17; i_17 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_18 = 1; i_18 < 15; i_18 += 4) 
            {
                for (int i_19 = 2; i_19 < 15; i_19 += 3) 
                {
                    {
                        var_31 = ((signed char) (~(((/* implicit */int) var_5))));
                        arr_70 [3LL] [i_11] [i_11] [i_19] [i_17] [i_17] = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) var_5)), (var_8)))))));
                        /* LoopSeq 1 */
                        for (short i_20 = 4; i_20 < 15; i_20 += 3) 
                        {
                            var_32 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (signed char)47)) ? (1123361755) : (1164032413))));
                            var_33 = ((/* implicit */signed char) ((short) (-(var_4))));
                        }
                        var_34 &= (-(((long long int) var_2)));
                    }
                } 
            } 
            var_35 = ((/* implicit */short) ((int) (+(6751906459285999278LL))));
            arr_73 [i_11] [i_11] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_6)))))))));
            arr_74 [i_11] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((unsigned int) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_7)) : (var_4)))));
            var_36 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_8)) ? (var_3) : (var_8)))));
        }
        var_37 |= ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((unsigned int) (+(((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) max(((signed char)18), (var_1)))))))));
        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (!(((/* implicit */_Bool) var_4)))))));
    }
    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_2)), (var_4)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((signed char) ((signed char) var_1))))));
}
