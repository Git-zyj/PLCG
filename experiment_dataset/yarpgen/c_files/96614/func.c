/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96614
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_14 = ((/* implicit */int) var_3);
            var_15 = ((/* implicit */int) var_7);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                var_16 = ((/* implicit */unsigned long long int) var_11);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0]))));
                    var_18 = ((/* implicit */unsigned long long int) var_0);
                }
                var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
            }
            var_20 = ((/* implicit */unsigned int) arr_9 [i_0] [16] [9] [i_0]);
            arr_10 [i_0] [i_0] [(short)17] = ((/* implicit */_Bool) var_5);
        }
        var_21 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)56765))));
    }
    var_22 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        arr_13 [15] [i_4] = ((/* implicit */int) var_0);
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_2 [(unsigned char)4] [i_4] [(unsigned char)20]))));
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
        }
        for (signed char i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        {
                            var_25 ^= ((/* implicit */unsigned long long int) arr_8 [(signed char)18] [i_8] [(_Bool)1] [(signed char)18]);
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_6] [i_7] [i_6] [i_9])))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    var_27 = ((/* implicit */_Bool) (~((+((~(arr_0 [i_7] [i_10])))))));
                    var_28 *= ((/* implicit */unsigned char) (~(var_8)));
                    arr_30 [i_6] [19] [(unsigned short)21] = ((/* implicit */signed char) arr_23 [i_4] [i_4] [i_4] [i_4]);
                }
                arr_31 [i_4] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
            }
            for (int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (~(((/* implicit */int) var_1)))))));
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) var_10))));
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    var_31 = ((/* implicit */int) var_1);
                    arr_39 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) var_0);
                }
            }
            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        }
        for (signed char i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
        {
            arr_43 [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) var_10);
            /* LoopNest 3 */
            for (unsigned int i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                for (long long int i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        {
                            arr_50 [i_4] [i_4] [(unsigned short)16] [i_14] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [(unsigned short)16] [i_13]))));
                            var_33 = ((/* implicit */unsigned char) var_12);
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) var_2))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */long long int) var_7);
        }
        for (signed char i_17 = 0; i_17 < 23; i_17 += 4) /* same iter space */
        {
            var_36 |= var_4;
            /* LoopNest 2 */
            for (unsigned char i_18 = 0; i_18 < 23; i_18 += 3) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 4) 
                {
                    {
                        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [i_4] [i_17] [i_4] [i_18] [i_19])))))));
                        var_38 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_19] [i_17]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_20 = 0; i_20 < 23; i_20 += 3) 
            {
                var_39 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 23; i_21 += 4) 
                {
                    for (short i_22 = 0; i_22 < 23; i_22 += 3) 
                    {
                        {
                            var_40 = (!(((/* implicit */_Bool) var_12)));
                            var_41 = ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
            }
        }
    }
}
