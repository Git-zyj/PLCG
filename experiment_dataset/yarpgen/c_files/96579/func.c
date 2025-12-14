/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96579
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (signed char)(-127 - 1));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) 2372352261U);
                    arr_8 [i_0] [i_1] [(unsigned char)5] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (signed char)-127))))));
                    var_21 = ((/* implicit */long long int) (short)-1);
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_17 [(short)11] [i_1 - 1] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) ^ (10316219395691499018ULL)))));
                                var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)(-127 - 1)))));
                                arr_18 [i_0] [12LL] [i_4] = arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) (signed char)127);
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */short) (-((-(0LL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        var_24 = ((/* implicit */_Bool) (signed char)(-127 - 1));
        var_25 = ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_5] [i_5]))) & (16LL)))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            for (signed char i_7 = 2; i_7 < 7; i_7 += 1) 
            {
                {
                    var_26 = ((/* implicit */signed char) 3394662328U);
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        for (short i_9 = 1; i_9 < 10; i_9 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned long long int) (unsigned short)53700);
                                var_28 -= ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_20 [i_5]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 2; i_10 < 9; i_10 += 1) 
                    {
                        arr_36 [9ULL] [i_7] = ((/* implicit */long long int) 3366923496U);
                        arr_37 [i_5] [i_6] [(unsigned char)5] [i_10] = ((/* implicit */short) arr_27 [(unsigned short)6] [(unsigned short)6]);
                        var_29 ^= ((/* implicit */unsigned int) arr_28 [6ULL] [i_6] [i_7] [i_10]);
                        var_30 += ((/* implicit */signed char) arr_1 [i_5]);
                    }
                }
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned short) 3366923496U);
}
