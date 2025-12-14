/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70095
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
    var_16 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 2]);
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_3))))) << (((((/* implicit */int) var_13)) - (41660))))) >= ((~((~(((/* implicit */int) var_11))))))));
            var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))) < ((+(((arr_4 [i_0 + 1] [i_0 + 2] [i_0 + 1]) - (arr_4 [i_0] [i_0] [i_0])))))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)70)) > (((/* implicit */int) (unsigned short)48844))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_15)) >> (((((/* implicit */int) var_4)) - (51504)))));
            arr_9 [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [(short)4]);
            var_21 = ((/* implicit */unsigned char) var_4);
        }
        for (short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 2])) && (((/* implicit */_Bool) ((16088300995116025723ULL) & (arr_5 [i_3] [i_0 + 2]))))));
            var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 2] [i_0]))) * ((~((+(arr_3 [i_0] [i_0])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_9))));
                var_25 = ((/* implicit */_Bool) arr_12 [i_3]);
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
            {
                arr_18 [i_0] [(short)3] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                arr_19 [i_0 + 1] [i_0 + 1] [8ULL] = ((/* implicit */long long int) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
            }
            for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */long long int) arr_14 [i_6] [i_0 - 1] [i_0 - 1] [i_6 - 3]);
                            var_27 = ((/* implicit */unsigned int) max((var_27), (arr_14 [i_8] [i_7] [i_3] [i_0])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    for (unsigned int i_10 = 3; i_10 < 9; i_10 += 1) 
                    {
                        {
                            var_28 = (-((+(arr_16 [i_0 - 1] [i_6 - 2]))));
                            var_29 = ((2358443078593525912ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                            arr_32 [i_9] [i_6] [i_6 + 1] [i_6] [(short)8] |= ((/* implicit */unsigned int) arr_0 [i_3]);
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (~(arr_3 [i_0 + 1] [i_0 + 2]))))));
                arr_33 [i_0 + 1] [i_0 + 1] [i_6 - 3] [i_0] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_5))))));
            }
            var_31 += ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
        }
        arr_34 [i_0] = ((/* implicit */unsigned long long int) var_14);
        var_32 *= ((/* implicit */unsigned int) arr_7 [i_0 + 1] [i_0 + 1]);
    }
    var_33 = ((/* implicit */unsigned short) var_9);
    var_34 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_15)))) == (((/* implicit */int) var_3))));
    var_35 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
}
