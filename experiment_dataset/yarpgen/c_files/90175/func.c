/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90175
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) arr_0 [i_0]);
        var_18 = ((signed char) var_14);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-109))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (((unsigned int) (signed char)114))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (long long int i_3 = 3; i_3 < 10; i_3 += 3) 
            {
                {
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_1] [(_Bool)0])) * (((/* implicit */int) (signed char)-112))));
                    var_20 += ((/* implicit */_Bool) arr_2 [i_2] [(signed char)7]);
                }
            } 
        } 
        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)30624)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-117))));
    }
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(var_7))))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_24 [i_8] [(short)23] [i_5] [8U] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)117)))));
                                var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3971937935403347403LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_4] [(signed char)15] [i_4]))))) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                }
                for (signed char i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    var_24 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) arr_25 [i_9]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)124), (((/* implicit */signed char) var_13)))))) : (min((((/* implicit */unsigned long long int) var_10)), (16697547759880575283ULL))))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (short)-30293)) + (((/* implicit */int) arr_22 [(signed char)18] [i_4] [24LL] [13ULL] [i_5] [(signed char)1] [24LL]))))))));
                    var_25 = ((/* implicit */short) (!((!(((((/* implicit */_Bool) arr_19 [i_4] [(short)24] [i_4] [i_4] [i_4] [(short)24])) && (((/* implicit */_Bool) 4294967276U))))))));
                }
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_12))));
                arr_27 [i_4] [i_5] [i_5] = ((/* implicit */_Bool) (((_Bool)0) ? (((long long int) max((arr_19 [i_4] [i_4] [i_5] [i_5] [i_4] [i_5]), (((/* implicit */unsigned char) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4] [i_4] [6ULL] [i_4])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    var_27 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_3))))));
                    arr_30 [i_4] [i_4] [i_4] [(_Bool)1] = ((/* implicit */unsigned char) var_11);
                    var_28 = ((/* implicit */_Bool) var_3);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        arr_34 [i_4] [i_5] [(signed char)19] [18LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551597ULL))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_28 [i_5] [i_4]))));
                        var_29 -= ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_11])) != (((/* implicit */int) var_14))));
                    }
                }
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) ((var_14) ? (((((/* implicit */long long int) ((var_13) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) var_10))))) + (max((var_11), (((/* implicit */long long int) (signed char)-43)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) ((var_15) < (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (var_15)))))))));
}
