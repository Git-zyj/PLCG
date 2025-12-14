/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70132
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
    var_10 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_1);
            var_11 = ((/* implicit */unsigned short) var_7);
        }
        /* vectorizable */
        for (short i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            var_12 = ((/* implicit */short) var_2);
            var_13 ^= ((/* implicit */signed char) var_0);
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                arr_13 [i_0 + 1] = ((/* implicit */signed char) var_4);
                var_14 = ((/* implicit */signed char) var_1);
            }
            for (unsigned short i_4 = 2; i_4 < 15; i_4 += 2) 
            {
                var_15 = var_1;
                var_16 = ((/* implicit */signed char) var_0);
                var_17 = ((/* implicit */unsigned short) var_9);
                var_18 = ((/* implicit */unsigned int) var_4);
            }
        }
        for (unsigned short i_5 = 4; i_5 < 14; i_5 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) var_9);
            /* LoopNest 3 */
            for (unsigned short i_6 = 2; i_6 < 14; i_6 += 2) 
            {
                for (unsigned short i_7 = 1; i_7 < 15; i_7 += 2) 
                {
                    for (short i_8 = 2; i_8 < 14; i_8 += 2) 
                    {
                        {
                            var_20 = var_4;
                            arr_27 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) var_4);
                            var_21 = var_0;
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_7))));
            var_23 += ((/* implicit */signed char) var_0);
            var_24 = ((/* implicit */unsigned short) var_3);
        }
        var_25 |= ((/* implicit */unsigned short) var_1);
    }
    for (signed char i_9 = 4; i_9 < 9; i_9 += 2) 
    {
        var_26 ^= ((/* implicit */short) var_2);
        arr_31 [i_9 - 2] [i_9 - 3] |= ((/* implicit */signed char) var_2);
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) var_3))));
    }
    for (short i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_11 = 3; i_11 < 15; i_11 += 2) 
        {
            for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) var_6);
                        var_29 = ((/* implicit */short) var_3);
                        arr_43 [i_11] [i_11] [i_11] [i_11] [i_11] = var_2;
                        var_30 = ((/* implicit */unsigned short) var_9);
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */signed char) var_2);
    }
    /* vectorizable */
    for (short i_14 = 3; i_14 < 15; i_14 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_15 = 3; i_15 < 17; i_15 += 2) 
        {
            for (signed char i_16 = 0; i_16 < 18; i_16 += 2) 
            {
                {
                    arr_52 [i_14] [i_15] [i_16] [i_16] = var_7;
                    var_32 = var_0;
                }
            } 
        } 
        arr_53 [2U] &= ((/* implicit */unsigned short) var_5);
        /* LoopSeq 1 */
        for (signed char i_17 = 0; i_17 < 18; i_17 += 2) 
        {
            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) var_3))));
            var_34 = var_4;
        }
    }
    /* LoopSeq 2 */
    for (short i_18 = 0; i_18 < 19; i_18 += 2) /* same iter space */
    {
        arr_59 [i_18] = ((/* implicit */short) var_8);
        arr_60 [i_18] [i_18] = ((/* implicit */unsigned int) var_6);
        /* LoopNest 3 */
        for (short i_19 = 0; i_19 < 19; i_19 += 2) 
        {
            for (short i_20 = 0; i_20 < 19; i_20 += 2) 
            {
                for (unsigned int i_21 = 3; i_21 < 18; i_21 += 2) 
                {
                    {
                        var_35 = ((/* implicit */short) var_5);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_22 = 0; i_22 < 19; i_22 += 2) 
                        {
                            var_36 = ((/* implicit */unsigned int) var_1);
                            arr_71 [i_18] [i_18] [i_20] [i_21 - 2] [i_22] [i_20] = ((/* implicit */short) var_4);
                            var_37 = ((/* implicit */short) var_2);
                            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) var_7))));
                        }
                        /* vectorizable */
                        for (unsigned short i_23 = 1; i_23 < 17; i_23 += 2) 
                        {
                            var_39 = ((/* implicit */unsigned short) var_5);
                            arr_75 [i_23] [i_19] [i_20] [i_23] [i_23] [18U] = ((/* implicit */unsigned short) var_3);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_24 = 0; i_24 < 19; i_24 += 2) /* same iter space */
    {
        var_40 = ((/* implicit */short) var_9);
        var_41 ^= ((/* implicit */unsigned short) var_1);
        arr_78 [i_24] = var_5;
        var_42 &= ((/* implicit */unsigned short) var_7);
        var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) var_7))));
    }
    /* LoopNest 3 */
    for (unsigned short i_25 = 1; i_25 < 15; i_25 += 2) 
    {
        for (unsigned short i_26 = 0; i_26 < 16; i_26 += 2) 
        {
            for (unsigned short i_27 = 0; i_27 < 16; i_27 += 2) 
            {
                {
                    arr_87 [i_26] [8U] |= ((/* implicit */unsigned short) var_5);
                    /* LoopNest 2 */
                    for (short i_28 = 1; i_28 < 13; i_28 += 2) 
                    {
                        for (short i_29 = 0; i_29 < 16; i_29 += 2) 
                        {
                            {
                                arr_93 [i_25] [i_25] [i_27] [i_25] [i_28 + 3] [i_25] = var_7;
                                arr_94 [i_25] [i_25] [i_25] [i_28] [9U] = var_7;
                                var_44 = ((/* implicit */unsigned short) var_9);
                                var_45 = ((/* implicit */short) var_5);
                            }
                        } 
                    } 
                    var_46 = ((/* implicit */unsigned short) min((var_46), (var_0)));
                    var_47 = ((/* implicit */short) var_0);
                }
            } 
        } 
    } 
    var_48 ^= var_4;
}
