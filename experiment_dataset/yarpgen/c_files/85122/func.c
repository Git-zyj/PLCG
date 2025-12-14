/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85122
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
    var_16 = ((/* implicit */short) ((unsigned char) var_4));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
            arr_6 [i_1] = ((/* implicit */unsigned short) arr_4 [i_1]);
            /* LoopNest 3 */
            for (short i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_17 [i_1] = ((/* implicit */short) var_15);
                            arr_18 [i_0] [i_0] [i_1] [i_0] [i_0] [(unsigned short)16] [i_0] = var_15;
                            var_17 = ((/* implicit */short) var_8);
                            arr_19 [i_2 - 2] [i_2 + 2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (((var_14) & (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])))))))) < (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_3 [i_1]))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2 - 2] [i_1])))))));
                        }
                    } 
                } 
            } 
            arr_20 [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [(short)9]))));
        }
        var_18 = ((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_6 = 3; i_6 < 17; i_6 += 4) 
        {
            arr_27 [i_6] = arr_23 [i_5] [i_6] [i_5];
            var_19 = ((/* implicit */long long int) var_10);
            var_20 = ((/* implicit */unsigned char) var_10);
        }
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_7] [(short)8])) ? (arr_11 [(unsigned char)20] [i_5] [i_7] [i_7]) : (arr_11 [0ULL] [i_7] [i_7] [i_7])));
            arr_31 [i_5] = ((/* implicit */unsigned int) arr_8 [i_5] [i_7] [i_5]);
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                for (signed char i_9 = 4; i_9 < 17; i_9 += 1) 
                {
                    for (signed char i_10 = 2; i_10 < 17; i_10 += 3) 
                    {
                        {
                            var_22 = (!(arr_33 [i_9 - 3] [i_9 - 3] [i_10] [i_10 - 2]));
                            arr_41 [i_10] [i_10] [i_10] [(unsigned short)7] [i_10] [(unsigned short)7] = ((/* implicit */short) var_5);
                        }
                    } 
                } 
            } 
            arr_42 [i_5] [i_7] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [(short)6] [i_5] [i_5] [i_5])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        }
        arr_43 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
    }
    var_23 = ((/* implicit */_Bool) var_4);
    var_24 = ((/* implicit */_Bool) ((unsigned short) var_14));
    var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (((unsigned long long int) var_15)))))));
}
