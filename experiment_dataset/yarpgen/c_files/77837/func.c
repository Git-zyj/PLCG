/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77837
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)93);
        var_18 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)28052)), (var_14)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)105)) != (((/* implicit */int) (signed char)72))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)103)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (unsigned short)65530))));
                        arr_11 [i_3] [i_3 - 1] [i_2] [i_3 - 1] = var_1;
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 1; i_4 < 6; i_4 += 4) 
    {
        var_19 = ((/* implicit */long long int) var_10);
        arr_14 [i_4] = min((((/* implicit */long long int) (-(215390101)))), (-7462906328062958617LL));
    }
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))) : (0U))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-13257)) > (((/* implicit */int) (signed char)44)))))));
        var_21 = ((/* implicit */int) max((var_21), (((((((/* implicit */int) (unsigned short)16383)) << (((((/* implicit */int) (signed char)63)) - (56))))) + (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_5]))))) > (((1774300126U) << (((var_1) - (4195473641U))))))))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        arr_20 [9LL] = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6] [i_6] [i_6]))) : (arr_3 [i_6] [i_6])));
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned int) ((signed char) arr_9 [i_6] [(short)20] [(short)20] [i_6]));
        var_22 |= ((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (4046493700U) : (((/* implicit */unsigned int) var_3))))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_1)) : (var_14))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 1) 
    {
        arr_24 [i_7 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
        arr_25 [i_7] [10] = ((/* implicit */unsigned char) min((min((arr_3 [i_7] [i_7 - 1]), (arr_3 [i_7] [i_7 - 2]))), (((((/* implicit */_Bool) arr_3 [i_7 - 1] [i_7 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_3 [i_7 - 2] [i_7 + 1])))));
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            arr_29 [i_8] = ((/* implicit */unsigned int) max(((short)5756), (((/* implicit */short) (_Bool)1))));
            arr_30 [i_8] [i_7] = ((/* implicit */short) ((((7844285821928371256ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26658))))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [4] [i_8] [i_8] [i_7 - 1])))))));
        }
        /* vectorizable */
        for (signed char i_9 = 1; i_9 < 19; i_9 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_10 = 1; i_10 < 17; i_10 += 3) 
            {
                var_24 |= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) -2LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) -2147483622)) == (var_1))))) : ((+(var_2)))));
                arr_35 [i_10] [i_9] [19LL] [i_10 + 2] = ((/* implicit */signed char) (+((+(arr_34 [i_9])))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    for (signed char i_12 = 2; i_12 < 20; i_12 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */short) ((arr_31 [i_9 - 1] [i_7 - 2]) ^ (arr_31 [i_9 - 1] [i_7 - 2])));
                            var_27 = ((((/* implicit */_Bool) (signed char)29)) ? (arr_31 [i_7 + 1] [i_10 + 3]) : (((/* implicit */int) arr_39 [i_12 - 1] [(short)3] [i_10] [i_9 - 1] [i_9 - 1] [i_7 + 1] [i_7 - 1])));
                            arr_42 [i_12] [i_11] [i_9] [i_9] [i_7 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_12 - 2])) : (((/* implicit */int) arr_1 [i_12 - 2]))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)13257)) / (((/* implicit */int) (signed char)29))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                arr_45 [i_13] [i_9] [i_9] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_13] [i_9 + 1] [i_7 - 1]))));
                var_29 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_9 [10] [i_9] [i_9] [i_7 + 1])) > (((/* implicit */int) (unsigned char)163)))))) > (((((/* implicit */_Bool) 413219124U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_7] [i_9 + 1] [i_7] [i_13] [i_9] [i_9] [i_7 - 1]))) : (arr_3 [i_7] [i_7 - 1]))));
                var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-13247)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (signed char)-41))));
            }
            var_31 = ((/* implicit */unsigned char) 2505987561U);
            var_32 |= ((((/* implicit */_Bool) 1702399337U)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (unsigned char)210)));
        }
        var_33 = ((/* implicit */unsigned char) (signed char)85);
    }
}
