/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89728
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
    var_12 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 4; i_2 < 8; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_2 + 3] [i_0 - 2] [i_0 - 2] [i_0 - 1]))));
                        var_14 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)6640)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [3U] [i_3])) : (((/* implicit */int) var_1))))));
                    }
                } 
            } 
            var_15 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) arr_6 [i_0])) * (var_6))) | (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_1] [i_4] [i_0 + 1])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)152)))))))));
                        var_17 -= ((/* implicit */short) (+(((((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 2] [i_1] [6ULL])) >> (((((/* implicit */int) arr_5 [i_5] [i_0] [i_0] [i_0])) + (99)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_0 - 1] [i_0 + 1] [(short)9])) * (((/* implicit */int) var_0))));
                        arr_22 [i_7] [i_0] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_18 [i_0 - 2])) || (((/* implicit */_Bool) 69860063U)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -2246540418429668492LL)) >= (var_3))))));
                        arr_23 [i_0] [i_0] [i_6] [i_6] [i_7] [(unsigned short)1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)50420)) ? (arr_8 [i_0] [i_1] [i_6]) : (((/* implicit */long long int) -2116203041))))));
                        arr_24 [i_7] [i_7] [i_7] [i_0 - 2] = ((/* implicit */short) (unsigned short)15116);
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_8 = 2; i_8 < 10; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 2) 
            {
                {
                    arr_29 [i_9] [i_8] [(unsigned char)3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (arr_19 [i_0] [i_9] [i_9 - 1] [(_Bool)1])));
                    var_19 = ((/* implicit */unsigned char) arr_14 [i_9] [i_0] [i_8] [i_8] [i_9]);
                    var_20 = ((/* implicit */short) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)480)))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0 + 2])) + (((/* implicit */int) arr_13 [i_0 + 1] [i_0] [i_0] [i_0 - 1]))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) var_4);
    }
    var_23 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)15097)) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))))), (((/* implicit */unsigned long long int) var_4))));
    var_24 = ((/* implicit */int) ((_Bool) (!((!(((/* implicit */_Bool) 4225107232U)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 2) 
    {
        for (unsigned int i_11 = 1; i_11 < 21; i_11 += 3) 
        {
            {
                var_25 = ((/* implicit */signed char) ((unsigned long long int) var_6));
                var_26 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_33 [i_11])), (var_6)));
            }
        } 
    } 
}
