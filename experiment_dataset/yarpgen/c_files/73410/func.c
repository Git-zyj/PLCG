/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73410
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
    var_11 = ((/* implicit */long long int) var_0);
    var_12 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 *= ((/* implicit */unsigned char) var_1);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_14 = var_6;
                            var_15 = ((/* implicit */short) var_1);
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) var_6);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned char) var_8);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 1) 
        {
            var_17 = ((/* implicit */long long int) var_5);
            var_18 = var_2;
            var_19 = ((/* implicit */int) var_6);
            var_20 = ((/* implicit */short) var_1);
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 20; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_3))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_8))));
                            var_23 = ((/* implicit */short) var_2);
                            var_24 = ((/* implicit */long long int) var_8);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_25 = var_5;
                    var_26 = ((/* implicit */unsigned long long int) var_9);
                    var_27 = ((/* implicit */long long int) var_7);
                    var_28 = var_4;
                }
                arr_33 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) var_3);
            }
            for (unsigned long long int i_10 = 3; i_10 < 20; i_10 += 3) 
            {
                var_29 = ((/* implicit */long long int) var_0);
                var_30 -= ((/* implicit */long long int) var_9);
            }
        }
        /* LoopNest 3 */
        for (short i_11 = 0; i_11 < 21; i_11 += 1) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_43 [i_13] [i_13] [i_11] [i_11] [i_4] [i_4] = var_7;
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) var_9))));
                        var_32 = ((/* implicit */unsigned long long int) var_6);
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */unsigned short) var_7);
        var_34 = ((/* implicit */unsigned char) var_9);
    }
}
