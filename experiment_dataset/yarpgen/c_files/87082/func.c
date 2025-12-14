/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87082
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) && ((_Bool)1))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (arr_3 [i_0 - 1] [i_1]))))))) ? (min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (((18446744073709551611ULL) & (16ULL))))) : ((~(9997669926196760877ULL)))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_7)) * (((((/* implicit */int) var_10)) % (((/* implicit */int) var_6))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)32764))))) / (((8388608U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0])))))));
                        var_12 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                        arr_11 [i_0 + 3] [i_1] [i_0 - 2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 1] [2] [2] [i_3])))))) % (((var_5) ? (arr_8 [i_2] [i_1] [7U] [i_3]) : (arr_8 [i_0 + 2] [i_1] [i_1] [i_3])))));
                    }
                    for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            arr_18 [i_0 + 3] [i_0 + 3] = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                            var_13 = ((/* implicit */signed char) -302424868);
                            arr_19 [3U] [i_0 + 3] [i_0] [0ULL] [i_5] = ((/* implicit */long long int) var_0);
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_22 [i_6] [i_1] [i_6] [i_1] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                            var_14 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                        }
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))))) : (((((/* implicit */int) (unsigned short)49152)) << (((/* implicit */int) arr_12 [i_0 + 3] [i_1]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 2) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)17)) == (((/* implicit */int) var_7))))) <= (((/* implicit */int) arr_29 [i_7] [i_9] [i_8]))));
                        /* LoopSeq 1 */
                        for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_23 [(unsigned char)9])) ? (302424873) : (((/* implicit */int) arr_30 [i_7] [i_8] [i_9 - 1] [(unsigned char)3])))) / (((/* implicit */int) arr_25 [i_7]))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (_Bool)1))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_31 [i_7] [i_8] [i_9] [i_11])) + (2147483647))) << (((var_1) - (13079953354525367259ULL)))))) ? (((/* implicit */int) arr_30 [(unsigned char)7] [(_Bool)1] [i_9 - 1] [i_10 + 2])) : (((var_5) ? (((/* implicit */int) arr_33 [i_7] [i_9] [i_7])) : (((/* implicit */int) arr_34 [i_9] [i_8] [i_9]))))));
                        }
                        var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_37 [(short)4] [i_8] [i_8] [i_10] [i_8]))))) || (((/* implicit */_Bool) (unsigned short)8))));
                    }
                } 
            } 
        } 
        arr_38 [i_7] [i_7] = ((/* implicit */short) arr_26 [i_7] [i_7] [i_7]);
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_42 [i_12] = ((/* implicit */unsigned long long int) var_4);
        var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_35 [i_12] [i_12])), (((((/* implicit */int) (!(arr_33 [i_12] [i_12] [i_12])))) - (((((/* implicit */int) arr_41 [(short)7])) >> (((((/* implicit */int) (unsigned short)65522)) - (65519)))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        for (unsigned char i_14 = 3; i_14 < 18; i_14 += 3) 
        {
            {
                arr_48 [i_14] [i_14 - 1] = ((/* implicit */long long int) (-((+(((((/* implicit */_Bool) 302424854)) ? (((/* implicit */int) (short)124)) : (((/* implicit */int) arr_33 [i_13] [i_14] [i_14 - 3]))))))));
                arr_49 [i_14] [i_13] = ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
}
