/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93406
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
    var_11 = ((/* implicit */short) (unsigned short)255);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) (unsigned short)32768);
        arr_3 [10] |= ((/* implicit */short) -1843024362);
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_13 &= ((/* implicit */short) (unsigned short)49881);
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (unsigned short)253);
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 4; i_5 < 21; i_5 += 1) 
            {
                var_14 = ((/* implicit */unsigned short) (short)22582);
                var_15 = ((/* implicit */signed char) (unsigned char)255);
                var_16 = ((/* implicit */unsigned short) (unsigned char)105);
            }
            var_17 = (unsigned char)151;
            var_18 ^= ((/* implicit */unsigned short) (signed char)-27);
        }
        for (long long int i_6 = 3; i_6 < 23; i_6 += 1) 
        {
            arr_21 [i_3] [i_3] = ((/* implicit */unsigned long long int) (unsigned short)17785);
            arr_22 [i_3] [7ULL] [i_6] = ((/* implicit */signed char) (unsigned char)24);
            var_19 = ((/* implicit */_Bool) (short)7350);
        }
        var_20 = ((/* implicit */_Bool) (signed char)-113);
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_21 = ((/* implicit */short) -2037121710);
                        var_22 = ((/* implicit */unsigned char) (unsigned short)65273);
                        var_23 = ((/* implicit */signed char) (unsigned char)4);
                        var_24 = (unsigned short)65535;
                    }
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                    {
                        var_25 ^= (signed char)60;
                        var_26 = ((/* implicit */short) (unsigned char)255);
                        var_27 &= ((/* implicit */unsigned short) (unsigned char)91);
                        var_28 = ((/* implicit */unsigned long long int) (unsigned char)255);
                        var_29 = ((/* implicit */signed char) (unsigned char)1);
                    }
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                    {
                        arr_36 [i_7] [i_8] [i_3] = ((/* implicit */signed char) 28LL);
                        var_30 = ((/* implicit */long long int) 1989904954041314295ULL);
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 1; i_12 < 22; i_12 += 4) 
                        {
                            arr_40 [i_3] [i_7] [i_8] [i_11] [i_12] = ((/* implicit */unsigned short) (signed char)96);
                            var_31 &= ((/* implicit */long long int) -2098141852);
                        }
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (unsigned char)255))));
                        arr_41 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (-2147483647 - 1));
                    }
                    var_33 = ((/* implicit */unsigned long long int) (unsigned short)255);
                }
            } 
        } 
    }
    for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
    {
        var_34 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
        var_35 = ((/* implicit */short) 1910418289U);
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 14; i_14 += 3) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 2) 
            {
                {
                    var_36 = ((/* implicit */_Bool) 9223372036854775800LL);
                    var_37 = ((/* implicit */unsigned short) (short)27260);
                }
            } 
        } 
    }
}
