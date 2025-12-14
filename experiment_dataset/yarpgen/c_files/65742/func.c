/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65742
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
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 7; i_3 += 4) 
                {
                    {
                        arr_16 [2] [2] [i_2] [i_0] = ((/* implicit */short) ((((int) arr_0 [i_0 - 1] [i_3 + 1])) << (((((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28753))))) - (320779467772213LL)))));
                        arr_17 [i_0] [i_1] [i_2] [i_0] = ((((/* implicit */_Bool) ((arr_8 [i_3 + 2] [i_3] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61495)))))) ? (min((6207620134846197009LL), (875597642488945959LL))) : (-6207620134846197010LL));
                    }
                } 
            } 
        } 
        arr_18 [i_0] = arr_7 [6ULL] [i_0];
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_5 = 2; i_5 < 8; i_5 += 1) 
        {
            arr_25 [i_4] [i_5] [i_4] = ((/* implicit */_Bool) (short)-29548);
            /* LoopSeq 1 */
            for (long long int i_6 = 2; i_6 < 11; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    arr_31 [7ULL] [7ULL] [7ULL] [i_4] [i_7] [6ULL] = ((/* implicit */long long int) var_10);
                    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (!(((/* implicit */_Bool) 262080)))))));
                    var_13 = ((unsigned long long int) var_4);
                }
                arr_32 [i_4] [i_4] = ((/* implicit */unsigned short) ((-6207620134846197010LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17598)))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
            {
                var_14 = ((/* implicit */long long int) arr_33 [(short)4] [i_5] [1ULL] [i_4]);
                arr_36 [i_4] [i_4] [(_Bool)0] [i_8] = ((/* implicit */short) (+(-6207620134846196993LL)));
            }
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
            {
                arr_41 [i_4] [2ULL] [i_4] [i_4] = ((/* implicit */unsigned char) ((short) arr_30 [4ULL]));
                var_15 = ((/* implicit */unsigned long long int) -9223372036854775807LL);
            }
        }
        for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            arr_44 [i_4] [(signed char)9] = ((/* implicit */unsigned short) ((arr_20 [i_4 - 1] [i_4 - 1]) - (var_9)));
            arr_45 [i_4] [i_4] = ((/* implicit */unsigned char) 9223372036854775807LL);
            arr_46 [i_4] = ((/* implicit */signed char) 6207620134846197009LL);
            var_16 = ((/* implicit */int) max((var_16), ((~(var_5)))));
        }
        arr_47 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_30 [i_4]);
        var_17 = var_5;
        var_18 = ((/* implicit */short) (-(((/* implicit */int) var_6))));
    }
    var_19 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 2 */
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) (unsigned short)17598);
        var_21 += 3060183069U;
        var_22 *= ((/* implicit */short) 2020963903199898614LL);
        var_23 = ((/* implicit */unsigned char) (-((+(1522483827)))));
    }
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 2; i_13 < 17; i_13 += 3) 
        {
            for (short i_14 = 3; i_14 < 18; i_14 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_50 [i_13 + 1])))))));
                    arr_58 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_13]))) != (((unsigned long long int) (unsigned char)5))));
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) arr_53 [i_12]);
    }
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-19658)) | (var_5)));
    var_27 = ((((829169482U) >= (((/* implicit */unsigned int) var_5)))) ? (((/* implicit */int) min((var_4), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)17592)))))))) : (((/* implicit */int) (signed char)-83)));
}
