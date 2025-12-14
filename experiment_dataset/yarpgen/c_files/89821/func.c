/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89821
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_17 = ((/* implicit */long long int) min((var_17), ((~(arr_2 [i_0])))));
            var_18 = ((/* implicit */long long int) arr_4 [i_0] [i_1]);
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) 127);
        }
        var_19 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_2 [i_0 - 2]), (var_6))))));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_6 [i_2]))) % ((+(((/* implicit */int) (signed char)118)))))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                for (signed char i_5 = 4; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_3 - 2] [i_3 - 2] [i_5])))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 1] [i_5])) | (-1834901740)));
                            arr_18 [i_2] [i_2] [i_4] [i_5 - 4] [i_6] = ((/* implicit */signed char) arr_14 [i_4] [i_2] [i_3] [i_3 + 3] [i_2] [i_2 + 2]);
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */signed char) var_2);
        }
        var_24 ^= ((/* implicit */long long int) arr_16 [i_2] [i_2] [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 2]);
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */long long int) -1715089425)), (max((var_15), (((/* implicit */long long int) (unsigned short)3972)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            arr_33 [i_11] [i_11] [i_10] [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (arr_26 [i_8] [i_9] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44925)))))) : (((var_10) - (((/* implicit */long long int) var_4)))))), (((/* implicit */long long int) 1188440370))));
                            arr_34 [i_10] [(short)6] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)32256)) ? (10LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32240)))));
                            var_26 = ((/* implicit */long long int) var_3);
                            var_27 = ((/* implicit */unsigned int) var_7);
                        }
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_13))));
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 2; i_12 < 22; i_12 += 3) 
        {
            var_29 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max(((unsigned short)33280), ((unsigned short)32256)))), (((((unsigned long long int) arr_26 [i_12] [i_12] [(short)15])) ^ (((/* implicit */unsigned long long int) ((int) var_5)))))));
            var_30 -= ((/* implicit */int) var_15);
        }
    }
    var_31 = ((/* implicit */long long int) var_2);
}
