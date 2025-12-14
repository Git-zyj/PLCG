/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82189
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
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(((int) (~(((/* implicit */int) var_7))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        var_19 = (-9223372036854775807LL - 1LL);
                        arr_11 [i_2] [i_2] [i_2] &= ((/* implicit */unsigned long long int) ((3709967618998027610LL) / (((/* implicit */long long int) ((641704824U) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                        var_20 = ((/* implicit */unsigned int) min((arr_9 [i_1] [i_1] [i_1] [i_1] [i_2]), (max((((3322897246724012947ULL) / (((/* implicit */unsigned long long int) arr_8 [i_3 - 2])))), (((/* implicit */unsigned long long int) var_0))))));
                    }
                    for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        arr_16 [i_4] = ((unsigned short) arr_3 [i_2] [(_Bool)1] [i_2]);
                        arr_17 [i_4] [i_4] [i_2] [i_2] [i_0] [i_0] &= arr_12 [14] [(unsigned short)11] [12LL] [i_4];
                    }
                    for (unsigned int i_5 = 1; i_5 < 14; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            var_21 = ((arr_4 [i_2]) & (arr_21 [(signed char)3] [(signed char)3] [i_2] [i_2] [i_2] [i_2]));
                            var_22 = (-(arr_15 [i_0] [i_0] [i_0]));
                        }
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_21 [i_5 + 2] [i_7] [i_7] [i_7] [7LL] [i_7])))) ? (((((/* implicit */_Bool) var_12)) ? (arr_21 [i_5 - 1] [i_5] [i_7] [i_7] [i_7] [i_7]) : (arr_21 [i_5 - 1] [i_7] [i_7] [i_7] [i_7] [i_7]))) : ((+(arr_21 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_7] [i_7])))));
                            arr_25 [15U] [i_1] [i_5] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((var_15) * (((((/* implicit */_Bool) -3709967618998027610LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (1444608029U))))));
                            var_24 = ((/* implicit */unsigned int) (+(var_16)));
                            arr_26 [i_0] [i_0] [i_0 + 1] [i_0] [i_5] = arr_5 [i_5] [i_1] [i_1];
                        }
                        arr_27 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0 - 1] [i_5 + 2])), (520192)))) ? (((/* implicit */int) ((((int) arr_7 [i_2] [i_2] [i_2])) == (((/* implicit */int) arr_23 [i_5] [i_5 - 1]))))) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_31 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1444608029U)))) : ((-(var_10)))));
                        arr_32 [0] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                        arr_33 [(signed char)9] [i_1] = ((/* implicit */unsigned int) ((signed char) var_6));
                    }
                    arr_34 [3] |= ((/* implicit */_Bool) (-2147483647 - 1));
                    arr_35 [i_0] [i_0] [i_2] = ((/* implicit */signed char) arr_19 [i_0] [i_1] [i_0 - 1] [i_1] [i_1]);
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) (-(arr_30 [i_0] [i_1] [i_1] [i_0] [i_0] [i_9])));
                        var_26 -= ((/* implicit */signed char) ((max((((int) arr_20 [i_1])), (((/* implicit */int) arr_0 [i_0 + 2] [i_9])))) >= (-262144)));
                        arr_39 [5] [5] |= ((/* implicit */_Bool) ((short) ((unsigned char) arr_15 [i_0 - 1] [i_1] [i_2])));
                        var_27 = ((/* implicit */unsigned char) arr_1 [12]);
                    }
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */int) var_6);
                        arr_44 [i_0] [(short)13] [(short)13] [i_10] |= ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) 2705564373U)) ? (arr_7 [i_0] [i_0] [i_0 + 1]) : (arr_7 [4ULL] [(signed char)1] [i_10])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 4; i_11 < 15; i_11 += 2) 
                        {
                            arr_48 [i_0] [i_1] [i_2] [i_2] [i_11] = (+(((((/* implicit */_Bool) -8628069034337288856LL)) ? (min((4294967289U), (((/* implicit */unsigned int) var_7)))) : (((((/* implicit */_Bool) -3240207548997980140LL)) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                            var_29 = ((/* implicit */signed char) var_14);
                        }
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 4) 
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                {
                    var_31 += ((/* implicit */unsigned int) min((5029429401533154729LL), (((/* implicit */long long int) var_9))));
                    var_32 = ((/* implicit */int) var_13);
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned int) var_12);
        var_34 = ((/* implicit */int) ((unsigned int) ((unsigned char) var_7)));
        arr_57 [2U] &= ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned int) var_9))));
    }
}
