/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85678
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
    var_11 = ((/* implicit */_Bool) (((+(((long long int) var_5)))) * (((/* implicit */long long int) ((/* implicit */int) ((((unsigned int) var_10)) < (((((/* implicit */_Bool) 3037103799U)) ? (3037103786U) : (var_6)))))))));
    var_12 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)250))))) ? (16LL) : (-20LL))));
        arr_4 [i_0] [10U] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            arr_9 [i_1 - 1] [i_2] [i_1 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_6 [i_1]) : (4144461538748182963LL)))) ? (arr_8 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) > (arr_5 [i_1]))))));
            arr_10 [i_1] [11] [11] = ((/* implicit */long long int) (((_Bool)1) ? (arr_8 [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_2])))));
        }
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            arr_13 [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (unsigned char)9))) <= (((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_1 - 1]))));
            arr_14 [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) var_3);
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 22; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_16 [i_3] [i_3] [i_4] [i_5])) : (var_3))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_11 [i_1 - 1]))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32713)))));
                            arr_24 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) arr_20 [i_3] [i_4 + 2] [i_3] [i_3]))));
                            arr_25 [i_3] [15LL] [i_3] [i_5] = ((arr_6 [i_1]) != (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3] [i_1 - 1]))));
                        }
                        var_15 *= ((/* implicit */signed char) (_Bool)1);
                        arr_26 [i_3] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_16 [i_8] [i_8] [i_8] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (arr_16 [i_8] [i_8] [i_8] [i_8]))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8] [i_8] [i_8]))) : (var_6)))));
                    arr_32 [i_8] [i_8] = ((/* implicit */long long int) (~(var_4)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_10])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)9))))) : (((arr_22 [i_1] [i_1] [(_Bool)1] [i_10] [i_10] [i_1]) >> (((((/* implicit */int) (signed char)-90)) + (91))))))))));
                    arr_38 [i_9] [i_1 - 1] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)6))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [(signed char)5] [i_9] [i_10])) ^ (var_4)))) : (arr_8 [i_1 - 1] [i_9])));
                }
            } 
        } 
    }
    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            arr_47 [i_11] [(unsigned short)3] [(unsigned short)3] = min((min((((/* implicit */unsigned long long int) ((long long int) (short)-16511))), (((arr_8 [i_12] [i_11]) | (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_11])) || (((/* implicit */_Bool) var_3)))))));
            /* LoopNest 3 */
            for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    for (short i_15 = 1; i_15 < 16; i_15 += 1) 
                    {
                        {
                            arr_56 [i_11] [i_12] [(_Bool)1] [i_14] [i_12] = ((/* implicit */unsigned char) var_3);
                            arr_57 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_23 [i_15 - 1]), (arr_23 [i_15 - 1])))) ? ((-(arr_46 [i_15] [i_13] [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_11] [(unsigned char)8])))));
                        }
                    } 
                } 
            } 
        }
        arr_58 [i_11] [i_11] = ((/* implicit */_Bool) max((((((_Bool) (signed char)34)) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_11] [i_11] [i_11]))))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)50)), (var_10))))));
    }
    var_18 = ((var_8) > (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)64548)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (144115188075855871ULL))))));
}
