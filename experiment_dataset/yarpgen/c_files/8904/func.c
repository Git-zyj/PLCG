/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8904
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_4] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)4202), (((/* implicit */unsigned short) arr_1 [i_0 - 1]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_2 + 3])) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) arr_1 [i_0 - 1])) / (((/* implicit */int) arr_1 [i_0 - 1]))))));
                                var_10 &= ((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(((/* implicit */int) var_8)))) : ((+(var_0))));
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_5)))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (short i_6 = 4; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_12 += ((/* implicit */short) arr_6 [i_0] [i_1] [i_2 + 2] [i_1]);
                                var_13 = var_2;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 |= var_3;
    var_15 |= ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (unsigned char i_7 = 2; i_7 < 16; i_7 += 4) 
    {
        for (short i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) var_2);
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 15; i_10 += 2) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_40 [i_11] [i_11] [i_9] [i_11] [i_11] = ((/* implicit */long long int) var_5);
                                var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((arr_3 [i_7 + 2] [i_8] [i_7 + 2]) ? (((/* implicit */int) arr_3 [i_9] [i_10 + 1] [i_11 - 1])) : (((/* implicit */int) var_8))))) <= (((long long int) var_2))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_12 = 2; i_12 < 17; i_12 += 4) 
                    {
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-20216))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_16 [i_12] [i_12] [(short)15] [i_12 - 1] [i_12 + 1])) ? (var_0) : ((~(((/* implicit */int) var_6)))))))))));
                        var_19 &= ((/* implicit */short) ((max((((/* implicit */unsigned int) var_3)), (arr_37 [i_7 - 2] [17LL] [i_8] [i_8] [(signed char)2] [i_12 + 1] [i_12 - 1]))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_7 - 1] [i_7] [i_7])) ? (arr_4 [i_12 - 1] [14] [i_9] [i_12 + 1]) : (((/* implicit */int) var_8)))))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [17] [17] [i_9] [17] [1LL])) ? (((/* implicit */int) arr_30 [i_8] [i_8] [i_9])) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_30 [i_7] [i_7] [i_9])) ? (((/* implicit */int) var_1)) : (var_3))) : ((~(((/* implicit */int) var_1)))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_7 - 1] [i_8] [i_7 - 1])) ? (((/* implicit */int) arr_42 [i_7] [i_7] [i_7] [(_Bool)1] [i_7] [i_7])) : (((/* implicit */int) (_Bool)1))));
                        var_22 = ((/* implicit */short) var_0);
                        arr_46 [i_7] [i_7] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)15)) * (((/* implicit */int) arr_23 [i_7 - 1]))));
                        arr_47 [(unsigned short)9] [i_8] [2LL] [i_9] [i_9] [i_13] = ((/* implicit */unsigned long long int) ((unsigned int) var_9));
                    }
                }
            } 
        } 
    } 
}
