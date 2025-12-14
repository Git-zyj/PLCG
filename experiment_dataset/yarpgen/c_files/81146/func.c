/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81146
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */unsigned int) max(((+(0))), (-1)));
        var_18 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_1] = max((((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (((/* implicit */int) (unsigned short)32009)) : (((/* implicit */int) arr_5 [i_0 - 1])))), (((((/* implicit */int) arr_5 [i_0 + 1])) & (0))));
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_7)) / (var_3)));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 0LL)) ? (0) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 1])))), ((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1]))))));
    }
    for (long long int i_4 = 3; i_4 < 18; i_4 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) -1);
        var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) (+(1769775522U)))) ? (((int) (+(1769775532U)))) : (((/* implicit */int) var_4))))));
    }
    for (int i_5 = 2; i_5 < 11; i_5 += 4) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5 - 1] [i_5 - 2] [i_5 + 1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5 + 2] [i_5 - 1] [i_5 - 2])))))) ? (max((((/* implicit */long long int) arr_4 [i_5 - 1] [i_5 - 1])), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_4 [i_5 - 2] [i_5 + 1])) : (((/* implicit */int) arr_7 [i_5 + 2] [i_5 + 1] [i_5 + 1]))))))))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_23 [i_6] [i_6] [4] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 1769775530U)) || (((/* implicit */_Bool) ((unsigned char) arr_5 [i_6]))))))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5] [i_6 + 1] [i_5 + 1] [i_5]))))), (((((/* implicit */_Bool) arr_20 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_5])) ? (arr_22 [i_7] [i_6 + 1] [i_5 - 1] [i_5]) : (((/* implicit */int) (unsigned char)240)))))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_5 [i_5]))) && (((((/* implicit */_Bool) ((unsigned char) 9223372036854775807LL))) && (((/* implicit */_Bool) 2525191763U))))));
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            arr_26 [i_9] [i_5 - 2] &= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */long long int) 1969644421U)) : (9223372036854775807LL))));
            arr_27 [i_5 - 2] [i_9] = ((/* implicit */long long int) arr_18 [i_5]);
            arr_28 [i_5] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_9])))))));
            /* LoopSeq 2 */
            for (int i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) 0)), (2325322875U)))))) ? ((~(1769775517U))) : (((/* implicit */unsigned int) -13))));
                var_26 = ((/* implicit */_Bool) max((var_26), (var_6)));
            }
            for (int i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                arr_34 [i_5] [i_5] [i_5] [i_11] = min(((+(-2086566773))), (((int) var_12)));
                arr_35 [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) arr_9 [i_5] [i_5] [10] [i_9] [i_9] [9U]);
                arr_36 [i_5] [i_9] [i_11] = ((/* implicit */signed char) max((858660505), (((((/* implicit */int) arr_21 [i_5 + 2] [i_5 + 2])) - (((/* implicit */int) arr_21 [i_5 - 1] [i_5 + 1]))))));
                arr_37 [i_5 + 1] [i_9] [i_5 + 1] = ((/* implicit */signed char) ((int) arr_2 [i_5 + 2]));
            }
        }
        var_27 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_31 [i_5 - 1] [i_5 + 2] [i_5 - 2]))))));
    }
    var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) var_15))))));
}
