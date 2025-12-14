/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73022
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_10 -= ((/* implicit */signed char) (-(min((9362189500766718717ULL), (((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                                arr_13 [i_2] [(short)13] = ((/* implicit */int) arr_10 [i_4] [i_3 - 1] [i_2] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [16ULL]))))), (411136181677562568ULL))), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_9 [i_2])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    {
                        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) arr_7 [(short)9] [i_6] [i_7] [(unsigned char)1]))));
                        var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (0ULL) : (16964814354035120576ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        var_14 = var_2;
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) <= (((((/* implicit */int) arr_3 [i_5])) << (((var_8) - (8475756831776800358ULL)))))));
        var_16 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) (unsigned short)4125)))))) & (((unsigned long long int) var_0))));
    }
    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_9] [i_9])) ? (((unsigned long long int) var_4)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9] [i_9]))) : (var_5)))))) ? (((/* implicit */int) ((((15983296639639411611ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9] [i_9] [i_9] [i_9] [i_9])))))) : (((/* implicit */int) var_9))));
        arr_28 [i_9] [i_9] = ((/* implicit */int) var_4);
        arr_29 [i_9] = ((/* implicit */unsigned int) 2463447434070140005ULL);
    }
    for (int i_10 = 0; i_10 < 14; i_10 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_26 [i_10])), ((~(var_8)))))) ? (((/* implicit */int) arr_8 [i_10] [i_10] [i_10] [i_10])) : (((((/* implicit */_Bool) max((15983296639639411611ULL), (arr_1 [i_10] [i_10])))) ? (((((/* implicit */_Bool) arr_11 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_16 [(_Bool)1])) : (arr_9 [i_10]))) : (((/* implicit */int) arr_3 [i_10]))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((((/* implicit */_Bool) 15983296639639411591ULL)) ? (((/* implicit */int) var_0)) : (arr_19 [i_10] [i_10]))) : (max((((/* implicit */int) var_4)), (-1928172723)))))) ? (((/* implicit */int) arr_23 [(signed char)2] [i_10])) : (((/* implicit */int) arr_26 [i_10]))));
        var_20 += ((/* implicit */_Bool) var_5);
    }
}
