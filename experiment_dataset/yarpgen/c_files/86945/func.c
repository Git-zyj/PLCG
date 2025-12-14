/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86945
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_16 = var_3;
                            var_17 = ((/* implicit */int) ((unsigned char) ((unsigned short) ((unsigned char) 3304595179178917738ULL))));
                            arr_11 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) 2147483647))));
                arr_12 [i_0] = ((/* implicit */unsigned long long int) 2147483619);
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 2) 
            {
                var_19 *= ((/* implicit */unsigned char) var_10);
                var_20 = ((/* implicit */unsigned long long int) (-(2147483619)));
            }
            arr_16 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) (short)-19103)))));
            var_21 = ((/* implicit */unsigned int) (short)19116);
            var_22 *= ((/* implicit */unsigned char) ((unsigned short) (~((~(296564292U))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    {
                        var_23 ^= ((int) (~(((/* implicit */int) (_Bool)1))));
                        var_24 = ((long long int) ((long long int) var_10));
                        /* LoopSeq 3 */
                        for (int i_9 = 3; i_9 < 12; i_9 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) (_Bool)0);
                            arr_26 [i_6] [i_6] [i_7] [12] [i_0] = 8076756568215893845ULL;
                        }
                        for (int i_10 = 3; i_10 < 12; i_10 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1587232991)))))));
                            arr_29 [i_0] [i_6] = ((long long int) (-((~(((/* implicit */int) (_Bool)0))))));
                            var_27 -= ((/* implicit */unsigned char) (-(1717760757)));
                            var_28 = ((/* implicit */int) (~(4034752285U)));
                            var_29 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)77)))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            arr_32 [i_0] [(unsigned char)5] [i_11] [i_0] [i_11] = ((/* implicit */short) -1315672222);
                            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3998403004U))));
                            arr_33 [i_0] = ((/* implicit */unsigned int) (~(-4567126618670449249LL)));
                            var_31 = ((unsigned long long int) (!(((/* implicit */_Bool) -8))));
                        }
                    }
                } 
            } 
            var_32 = 36028797018963967ULL;
            var_33 ^= ((/* implicit */unsigned short) (unsigned char)250);
        }
        arr_34 [i_0] [i_0] = ((/* implicit */unsigned int) 8675791152315477716LL);
    }
    var_34 = ((/* implicit */int) (unsigned char)255);
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 20; i_12 += 3) 
    {
        for (unsigned char i_13 = 1; i_13 < 19; i_13 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_14 = 2; i_14 < 19; i_14 += 4) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned char) (~((+(-92939891)))));
                                var_36 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)235))));
                                var_37 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_13))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 20; i_19 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */int) (unsigned char)20);
                                arr_56 [i_13] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (unsigned short)42413)))));
                            }
                        } 
                    } 
                } 
                var_39 = ((/* implicit */short) (unsigned char)203);
                var_40 = ((/* implicit */unsigned char) var_3);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_20 = 0; i_20 < 12; i_20 += 1) 
    {
        for (unsigned short i_21 = 0; i_21 < 12; i_21 += 4) 
        {
            for (int i_22 = 2; i_22 < 11; i_22 += 3) 
            {
                {
                    var_41 = ((/* implicit */unsigned int) (unsigned char)175);
                    var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65535))));
                    /* LoopNest 2 */
                    for (unsigned char i_23 = 1; i_23 < 9; i_23 += 4) 
                    {
                        for (unsigned char i_24 = 0; i_24 < 12; i_24 += 4) 
                        {
                            {
                                var_43 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_1))))));
                                arr_69 [i_20] [i_21] [i_22] [i_23] [i_24] = ((/* implicit */short) 9175977321324292256ULL);
                                var_44 ^= ((/* implicit */unsigned char) ((unsigned long long int) 5301979257202458300LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_45 = ((/* implicit */unsigned long long int) (unsigned char)212);
}
