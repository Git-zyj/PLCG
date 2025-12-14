/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84478
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
    var_19 = (~(((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12708))) : (var_11))) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) -5177849174674431081LL)))));
        arr_2 [i_0] = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (2511500012U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))));
        arr_3 [i_0] = ((/* implicit */_Bool) 2511500003U);
        arr_4 [i_0] [i_0] &= ((/* implicit */short) ((arr_0 [i_0]) / (((/* implicit */int) var_10))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned char)18]))) - ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) arr_6 [16LL])))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) ((int) ((long long int) -5177849174674431059LL)));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                arr_13 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (signed char)-117);
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (long long int i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        {
                            arr_20 [i_5] [i_1] [i_3] [i_1] [(signed char)18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */unsigned long long int) arr_19 [i_5] [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_1])) : (arr_10 [i_1] [i_1] [i_3])));
                            var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) -5177849174674431086LL)) ? (arr_19 [i_1] [i_5 - 2] [i_5 - 2] [i_4] [i_5]) : (arr_19 [i_1] [i_5 - 2] [0ULL] [i_1] [i_1])));
                            var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [(signed char)4] [i_2] [i_2] [i_2]))) : (-5177849174674431106LL))) ^ (((/* implicit */long long int) ((arr_5 [i_1]) ^ (((/* implicit */int) var_13)))))));
                        }
                    } 
                } 
                arr_21 [i_1] [(unsigned short)8] [(unsigned short)8] &= ((/* implicit */_Bool) ((int) (short)12708));
            }
        }
        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_7 = 2; i_7 < 23; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    {
                        var_25 = ((/* implicit */long long int) arr_27 [i_6] [i_7 - 2] [i_7 + 1]);
                        var_26 = ((/* implicit */unsigned long long int) ((int) 14869902157180564819ULL));
                    }
                } 
            } 
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (arr_10 [(unsigned short)20] [i_6] [i_6]))))));
        }
        for (signed char i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_1 [i_9])) : (((/* implicit */int) arr_14 [i_1] [i_9]))))));
            var_29 = ((/* implicit */unsigned short) ((((var_9) + (((/* implicit */long long int) ((/* implicit */int) var_0))))) + ((-(9223372036854775805LL)))));
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                for (unsigned char i_11 = 2; i_11 < 22; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        {
                            var_30 &= (~(((/* implicit */int) arr_7 [i_11 - 2])));
                            arr_43 [i_1] [i_1] [i_1] [i_10] [i_11 - 2] [i_11 - 1] [i_12] = ((/* implicit */unsigned char) ((1567626579891490188LL) + (((/* implicit */long long int) ((/* implicit */int) (short)2553)))));
                        }
                    } 
                } 
            } 
        }
    }
}
