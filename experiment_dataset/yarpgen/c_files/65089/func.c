/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65089
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)1667)) ? (((/* implicit */int) (short)-1668)) : (arr_0 [i_0])));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_4 [i_2])) : (arr_7 [i_1 - 1] [i_1 - 1] [i_0])));
                        arr_13 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) var_13))));
                    }
                    for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [10] [i_0])) ? (((/* implicit */int) (short)1667)) : (((/* implicit */int) arr_10 [i_0] [i_1 - 1]))));
                        var_21 ^= ((/* implicit */long long int) ((((((/* implicit */int) (short)-1668)) < (((/* implicit */int) (signed char)86)))) ? (((((/* implicit */_Bool) 17422016093139063984ULL)) ? (((/* implicit */unsigned long long int) var_12)) : (15ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        arr_17 [i_4] = ((/* implicit */long long int) ((arr_9 [i_0] [i_1 - 1] [i_1 - 1] [i_2]) & (((/* implicit */int) (short)3211))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-2151997835635790974LL) * (0LL)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))) : (arr_0 [i_1 + 1])));
                    }
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-2147483635)))) ? (((/* implicit */int) ((unsigned char) arr_14 [i_1] [i_1]))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_7)) : (arr_14 [i_1] [i_1])))));
                }
            } 
        } 
        arr_19 [i_0] [i_0] = ((/* implicit */_Bool) (+(-4589647066823894332LL)));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                for (unsigned char i_8 = 1; i_8 < 23; i_8 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6042)) ? (0ULL) : (var_10)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)21362)) > (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */int) (short)4)) / (((/* implicit */int) (short)9027)))))))));
                        arr_30 [i_5] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_29 [i_5] [i_6] [i_6] [i_8 - 1]))));
                    }
                } 
            } 
        } 
        var_24 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (short)-1664)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49277))))));
        arr_31 [i_5] = ((/* implicit */signed char) (+(arr_8 [i_5] [i_5] [i_5] [i_5])));
        var_25 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)39652)) - (((/* implicit */int) (short)-1668))));
    }
    var_26 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (short)9027)) ^ (((/* implicit */int) var_17)))) << (((((/* implicit */int) var_4)) - (24)))))));
    var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)1603))));
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_5))))) : (((((/* implicit */long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) (unsigned short)11524))))) & (var_12)))));
}
