/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8880
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 1) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned short) (((-(((/* implicit */int) ((var_11) <= (((/* implicit */int) var_0))))))) % (((/* implicit */int) var_10))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = (+(var_8));
            arr_6 [9] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((signed char) var_11))))) + (var_8)));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) var_12);
                            var_20 = ((/* implicit */_Bool) ((unsigned short) var_10));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned int i_5 = 1; i_5 < 8; i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    {
                        arr_27 [i_5] [i_5] [i_5] [i_5 + 3] |= ((/* implicit */unsigned long long int) ((((long long int) (-(((/* implicit */int) var_10))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_7))))))));
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            arr_31 [i_9] [i_9] &= ((/* implicit */unsigned long long int) var_1);
                            var_21 -= ((/* implicit */unsigned char) var_1);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                {
                    var_22 -= ((/* implicit */long long int) ((unsigned int) var_17));
                    /* LoopNest 2 */
                    for (signed char i_12 = 1; i_12 < 10; i_12 += 4) 
                    {
                        for (short i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            {
                                var_23 -= ((/* implicit */short) var_8);
                                arr_43 [(short)5] [i_10] [i_12] [(short)5] [i_5] = ((/* implicit */_Bool) ((long long int) var_11));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 12; i_15 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */short) ((var_14) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))));
                                var_25 &= ((/* implicit */short) var_10);
                                var_26 *= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((long long int) var_2))) - ((-(var_14))))) | (((/* implicit */unsigned long long int) ((long long int) var_3)))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)103)) == (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_16 = 0; i_16 < 12; i_16 += 4) 
        {
            var_28 = ((/* implicit */unsigned int) var_9);
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                for (long long int i_18 = 4; i_18 < 10; i_18 += 1) 
                {
                    {
                        var_29 = ((/* implicit */long long int) var_15);
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (+(var_12))))));
                    }
                } 
            } 
            arr_55 [i_5] [i_5] = (-(((var_11) ^ (((/* implicit */int) var_5)))));
        }
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) var_3))));
        /* LoopNest 2 */
        for (short i_19 = 1; i_19 < 8; i_19 += 4) 
        {
            for (int i_20 = 0; i_20 < 12; i_20 += 3) 
            {
                {
                    arr_64 [2LL] [i_19] [i_19] [i_20] &= (-(((/* implicit */int) var_13)));
                    var_32 = ((/* implicit */unsigned short) ((int) var_6));
                }
            } 
        } 
    }
    var_33 -= ((int) var_5);
    var_34 = ((/* implicit */long long int) var_14);
}
