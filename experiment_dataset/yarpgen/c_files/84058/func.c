/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84058
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
    var_19 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_20 = (unsigned char)0;
        var_21 = ((/* implicit */int) (unsigned short)42824);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned long long int) (unsigned short)42803);
            var_23 = ((/* implicit */short) 630531158356216621LL);
            arr_4 [i_0] = ((/* implicit */_Bool) (unsigned char)120);
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned short)22699);
        }
        var_24 = (unsigned char)123;
        arr_6 [i_0] [i_0] = (unsigned short)22732;
    }
    for (unsigned char i_2 = 1; i_2 < 23; i_2 += 3) 
    {
        var_25 *= ((/* implicit */unsigned char) -343018961);
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            var_26 ^= ((/* implicit */unsigned char) (unsigned short)60688);
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned short) (_Bool)1);
                            arr_24 [i_3] [i_6] [i_5] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (short)1359);
                            arr_25 [i_3] = ((/* implicit */unsigned char) (unsigned short)58082);
                            var_28 = ((/* implicit */long long int) (unsigned short)22712);
                        }
                        /* vectorizable */
                        for (signed char i_7 = 4; i_7 < 22; i_7 += 1) 
                        {
                            var_29 = ((/* implicit */long long int) (-2147483647 - 1));
                            var_30 = ((/* implicit */_Bool) (unsigned short)42803);
                            var_31 *= ((/* implicit */signed char) 1517777249U);
                            var_32 = ((/* implicit */long long int) -1157169695);
                        }
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (unsigned short)42824))));
                    }
                } 
            } 
            var_34 = ((/* implicit */short) (unsigned short)42803);
        }
    }
    for (unsigned short i_8 = 3; i_8 < 9; i_8 += 2) 
    {
        arr_30 [i_8] [i_8] = ((/* implicit */signed char) 2147483646);
        var_35 = ((/* implicit */int) (short)-1360);
        var_36 = ((/* implicit */short) 18306641141594574989ULL);
        var_37 = ((/* implicit */int) max((var_37), (2147483647)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                arr_35 [6LL] [6LL] [6LL] = ((/* implicit */signed char) (short)8192);
                var_38 = ((/* implicit */short) (unsigned char)135);
                var_39 = -2147483647;
                var_40 += ((/* implicit */signed char) 2004923697267558950ULL);
            }
            for (int i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    var_41 = ((/* implicit */_Bool) (unsigned char)120);
                    arr_42 [i_9] [i_11] [i_9] |= ((/* implicit */unsigned long long int) (signed char)26);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    for (long long int i_14 = 3; i_14 < 11; i_14 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (-2147483647 - 1)))));
                            var_43 = ((/* implicit */unsigned char) -3498229191082895133LL);
                            var_44 &= ((/* implicit */unsigned char) 402653184);
                        }
                    } 
                } 
            }
            var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) (short)15360))));
        }
    }
    var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) var_17))));
    var_47 = ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_15 = 0; i_15 < 13; i_15 += 2) 
    {
        var_48 = ((/* implicit */signed char) (unsigned char)222);
        var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) (signed char)31))));
        arr_49 [(short)10] = ((/* implicit */unsigned char) (signed char)-73);
    }
}
