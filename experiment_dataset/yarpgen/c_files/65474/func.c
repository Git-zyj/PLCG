/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65474
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
    var_16 += ((/* implicit */short) (signed char)-71);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                var_18 = ((/* implicit */long long int) (unsigned char)120);
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (unsigned char)95))));
            }
            for (long long int i_3 = 3; i_3 < 23; i_3 += 2) 
            {
                var_20 += ((/* implicit */_Bool) arr_6 [24ULL]);
                var_21 = ((/* implicit */unsigned char) (signed char)71);
                var_22 = ((/* implicit */signed char) arr_0 [i_1]);
                arr_13 [(unsigned short)15] [14ULL] [i_0] = arr_0 [i_0];
                var_23 = ((/* implicit */signed char) -1LL);
            }
            for (int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                arr_18 [i_0] = ((/* implicit */long long int) (signed char)-118);
                var_24 *= ((/* implicit */short) 4095ULL);
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 3; i_6 < 24; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        {
                            arr_27 [i_0] [(signed char)6] [i_5] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) arr_7 [(signed char)1] [i_1]);
                            var_25 = ((/* implicit */_Bool) arr_21 [21U] [i_7] [(_Bool)1]);
                        }
                    } 
                } 
                arr_28 [i_0] [(short)24] [(short)16] [2U] &= ((/* implicit */signed char) arr_1 [i_1]);
            }
            var_26 = arr_14 [(unsigned short)3];
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_11 [12LL] [(short)12] [i_1] [i_1]))));
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                var_28 = ((/* implicit */long long int) arr_26 [i_0] [(signed char)2] [(unsigned short)18] [i_9] [i_9] [(unsigned short)1] [i_9]);
                var_29 = ((/* implicit */signed char) 1LL);
            }
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (signed char)(-127 - 1)))));
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) arr_10 [i_0] [i_0] [(unsigned char)7] [i_0]))));
            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) arr_20 [(unsigned char)17] [i_0] [i_8 - 1]))));
            var_33 = ((/* implicit */unsigned int) (signed char)63);
        }
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            arr_37 [(short)24] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_10] [i_10] [(unsigned char)24]);
            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (signed char)118))));
        }
        for (signed char i_11 = 2; i_11 < 22; i_11 += 4) 
        {
            var_35 = ((/* implicit */unsigned int) (signed char)-119);
            arr_41 [i_0] = ((/* implicit */unsigned char) (signed char)-71);
            var_36 = ((/* implicit */int) arr_20 [i_0] [(_Bool)1] [i_0]);
        }
        arr_42 [i_0] = ((/* implicit */int) arr_35 [21] [i_0]);
    }
    /* vectorizable */
    for (short i_12 = 1; i_12 < 14; i_12 += 4) 
    {
        arr_45 [(_Bool)1] = ((/* implicit */unsigned short) 2147483647);
        arr_46 [(signed char)0] = ((/* implicit */signed char) arr_31 [i_12 + 1] [i_12 + 1] [(unsigned char)10]);
        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) arr_14 [i_12 + 2]))));
    }
    var_38 = var_3;
    var_39 = ((/* implicit */long long int) var_5);
    var_40 = ((/* implicit */int) (signed char)71);
}
