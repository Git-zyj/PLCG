/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64296
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_8)))));
        arr_3 [i_0] = ((long long int) max((((/* implicit */int) arr_1 [i_0] [i_0])), ((+(var_6)))));
        var_10 |= ((/* implicit */short) var_9);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_2);
        var_11 = ((/* implicit */unsigned char) (-(arr_0 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_5 [i_1]), (((/* implicit */unsigned long long int) (short)15872))))) ? (arr_0 [i_1]) : (((unsigned int) arr_1 [i_1] [i_1]))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9927))) - (arr_5 [i_1])))));
        var_13 = ((/* implicit */unsigned char) ((arr_6 [i_1]) * (arr_6 [i_1])));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) arr_10 [i_2]);
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                {
                    arr_16 [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_2] [i_4]))));
                    arr_17 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_3]))) : (arr_14 [i_2] [i_2] [i_3] [i_4])));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (arr_14 [i_2] [i_2] [i_2] [i_2]) : (arr_14 [i_2] [i_2] [i_2] [i_2])));
        /* LoopSeq 3 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)23324)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) arr_8 [i_5] [i_2]))));
            var_17 = ((/* implicit */unsigned long long int) arr_13 [i_5] [i_2]);
            arr_21 [i_2] |= ((/* implicit */unsigned short) ((arr_8 [i_2] [i_5]) ? (((/* implicit */int) arr_8 [i_2] [i_5])) : (((/* implicit */int) arr_8 [i_5] [i_5]))));
        }
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 21; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) (~(5658392216153862165LL)));
                        var_19 = ((/* implicit */unsigned short) arr_20 [i_2] [i_7] [i_7 - 1]);
                    }
                } 
            } 
            arr_31 [i_2] [(unsigned char)10] [i_2] = ((/* implicit */short) ((arr_23 [i_2]) >= (arr_23 [i_6])));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (~(((/* implicit */int) var_3)))))));
        }
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) (-(arr_27 [i_9] [i_2] [i_2])));
            arr_35 [(short)11] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_9])) ? (((/* implicit */unsigned long long int) 260046848U)) : (var_9)));
            var_22 = ((/* implicit */signed char) (-(var_7)));
        }
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_2] [i_2] [i_2]))) <= (((((/* implicit */_Bool) var_5)) ? (arr_18 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_2])))))));
    }
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (var_2)))))) : (var_1)));
}
