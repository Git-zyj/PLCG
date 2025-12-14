/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67916
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_3)), (var_12))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) - (var_1))))))) ? ((~(((/* implicit */int) var_11)))) : (min((((/* implicit */int) min((var_8), (((/* implicit */short) var_9))))), ((-(((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] &= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_3)))))))));
                var_17 = ((/* implicit */long long int) (~(1244938425U)));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 &= ((/* implicit */int) (!(arr_2 [i_2])));
        arr_8 [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [i_2])))) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) ((417471401) < (((/* implicit */int) (unsigned char)142)))))));
        var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_2]))));
        var_20 = ((/* implicit */short) arr_7 [i_2]);
        var_21 = ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) arr_6 [i_2] [i_2])))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_3 = 3; i_3 < 14; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (signed char)78))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                {
                    var_22 = arr_17 [i_4 - 1] [i_5] [i_3 + 2];
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_3 + 2])) ? (arr_1 [i_4 + 2]) : (arr_1 [i_3 - 1])));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4294967295U)))) ? (((((/* implicit */int) var_11)) + (21))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((/* implicit */int) (unsigned char)113))))));
        var_25 = ((((/* implicit */_Bool) arr_3 [i_3 + 2] [i_3 - 3])) && (((/* implicit */_Bool) 3053611527512978078LL)));
        /* LoopNest 3 */
        for (signed char i_6 = 1; i_6 < 14; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                for (unsigned short i_8 = 2; i_8 < 13; i_8 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_20 [i_8 - 1] [i_7] [i_6] [i_3])) | (((/* implicit */int) (unsigned char)159))))));
                        arr_25 [i_3 + 1] [i_8 + 3] [i_7] [(short)15] = ((/* implicit */short) arr_15 [i_3] [i_8] [i_7] [i_8]);
                    }
                } 
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
    {
        var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (~((+(((/* implicit */int) var_13)))))))));
        arr_29 [i_9] |= ((/* implicit */unsigned short) min(((+(arr_26 [i_9] [i_9]))), (((/* implicit */unsigned int) arr_27 [i_9]))));
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
    {
        arr_32 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)89)) ? (arr_27 [i_10]) : (((/* implicit */int) ((unsigned short) arr_28 [(signed char)5] [(signed char)5])))));
        arr_33 [i_10] = ((/* implicit */signed char) (~(arr_27 [i_10])));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_10])) ? (((/* implicit */int) ((_Bool) (unsigned char)92))) : (((/* implicit */int) arr_28 [i_10] [i_10]))));
    }
}
