/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69413
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
    var_18 = ((/* implicit */unsigned short) var_6);
    var_19 = (unsigned char)255;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_13 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) arr_11 [i_0] [i_1] [i_0]))))) < (((/* implicit */int) (unsigned char)7))));
                        arr_14 [(unsigned short)13] [i_3] [i_2] [10LL] [i_1] = ((/* implicit */signed char) (short)-27927);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_2] = ((/* implicit */long long int) arr_8 [i_1] [i_4] [i_5]);
                                arr_22 [i_5] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (unsigned char)0);
                                arr_23 [(_Bool)1] [i_4] [i_1] [i_2] [i_1] [i_1] [(short)6] = arr_6 [i_2];
                            }
                        } 
                    } 
                    arr_24 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) 14644634481277234176ULL);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        for (long long int i_7 = 2; i_7 < 15; i_7 += 4) 
                        {
                            {
                                arr_30 [i_0] [i_1] [i_0] [i_6] [i_7] &= ((/* implicit */unsigned long long int) (unsigned char)0);
                                arr_31 [i_1] = ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = (unsigned char)248;
    /* LoopNest 2 */
    for (unsigned short i_8 = 3; i_8 < 20; i_8 += 4) 
    {
        for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            {
                arr_37 [i_8] [i_8] [6ULL] = arr_34 [i_8];
                /* LoopSeq 1 */
                for (unsigned char i_10 = 1; i_10 < 19; i_10 += 4) 
                {
                    arr_41 [i_8] [i_8] = ((/* implicit */_Bool) arr_38 [i_8 - 3]);
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        arr_44 [i_8] [(unsigned short)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2039221649U)) || ((_Bool)1)));
                        arr_45 [i_8] [i_11] = ((/* implicit */short) (unsigned char)0);
                        arr_46 [i_8] [i_8] = ((/* implicit */unsigned short) arr_32 [i_8]);
                    }
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_51 [i_8] [(unsigned short)11] [(short)7] [(short)5] [i_8] = ((/* implicit */long long int) arr_33 [(short)19] [i_10]);
                                arr_52 [i_8] [(unsigned short)1] [i_10] [i_12] [i_8] = ((/* implicit */long long int) ((3802109592432317440ULL) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65181))) / (4515992126012637668ULL)))));
                                arr_53 [i_13] [i_8] [(unsigned short)17] [i_8] [i_8] = ((/* implicit */_Bool) (short)-15777);
                            }
                        } 
                    } 
                    arr_54 [i_8] = ((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)47))));
                }
                arr_55 [i_9] [i_9] [i_8] = (unsigned char)255;
            }
        } 
    } 
}
