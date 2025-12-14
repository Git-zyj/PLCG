/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77468
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) 1994435491360996798LL);
                var_18 = ((/* implicit */unsigned char) 2884565426U);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) 15LL);
                                var_20 += ((/* implicit */unsigned int) -730876892);
                                var_21 = ((/* implicit */signed char) 730876883);
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */int) (signed char)-20);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_5 = 3; i_5 < 10; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_23 *= ((/* implicit */unsigned char) (signed char)-105);
                    var_24 = (signed char)43;
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (_Bool)1))));
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
        var_27 *= ((/* implicit */short) (unsigned short)57855);
        arr_23 [i_8] = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) -805594191);
                    var_29 = ((/* implicit */signed char) (unsigned short)0);
                    var_30 = ((/* implicit */unsigned short) 4294967295U);
                    arr_28 [i_8] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (unsigned short)31073);
                }
            } 
        } 
    }
    var_31 = ((/* implicit */long long int) (signed char)-32);
    /* LoopNest 2 */
    for (short i_11 = 1; i_11 < 9; i_11 += 1) 
    {
        for (unsigned int i_12 = 2; i_12 < 7; i_12 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 1; i_14 < 8; i_14 += 1) 
                    {
                        for (int i_15 = 1; i_15 < 10; i_15 += 4) 
                        {
                            {
                                var_32 *= ((/* implicit */short) (signed char)-78);
                                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_16 = 0; i_16 < 11; i_16 += 3) 
                {
                    arr_46 [i_11] [i_12 - 2] [i_11] = ((/* implicit */int) 2048657817012325887ULL);
                    var_34 = ((/* implicit */int) (short)-16581);
                    var_35 = 3713640766U;
                }
            }
        } 
    } 
}
