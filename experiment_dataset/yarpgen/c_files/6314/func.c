/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6314
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) arr_6 [i_0]);
                    var_17 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]);
                }
            } 
        } 
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)0]))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_16 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) arr_9 [i_0]);
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_13 [i_0] [i_3] [i_4] [i_4 - 2]))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_4 - 1])))))));
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) arr_19 [i_0] [i_3] [i_0]);
                        arr_20 [i_4 - 2] [i_5] = ((/* implicit */unsigned long long int) (-(((((((/* implicit */int) arr_5 [i_0])) + (2147483647))) << (((arr_11 [i_5]) - (1958933870)))))));
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((((/* implicit */int) arr_5 [i_0])) + (50))) - (14)))));
                        var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_14 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_6] [i_6] = ((/* implicit */short) arr_11 [i_0]);
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_24 ^= ((/* implicit */_Bool) var_14);
                            arr_28 [i_7] [i_6] [i_6] [i_4] [i_6] [i_3] [i_0] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_13 [i_7] [i_4] [i_3] [i_0])))) ^ ((-(var_11)))));
                        }
                        var_25 = ((/* implicit */unsigned char) var_5);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */_Bool) var_1);
                        var_27 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_22 [(unsigned short)9] [i_3] [i_3] [i_3]))))));
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) ? (arr_27 [i_0] [i_3] [i_4] [i_8] [i_3] [i_3]) : (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) arr_5 [i_4 - 2]))));
                    }
                }
            } 
        } 
        arr_31 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)59214)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (signed char)32)))) % (((/* implicit */int) arr_26 [i_0] [(short)10]))));
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    {
                        var_29 = ((/* implicit */short) ((((((/* implicit */int) arr_30 [i_0] [i_11] [i_11] [i_9] [i_11])) + (((/* implicit */int) (unsigned char)170)))) - (((/* implicit */int) arr_22 [(unsigned char)1] [i_9] [i_10] [i_11]))));
                        var_30 = ((/* implicit */short) var_14);
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */short) max((var_11), (var_14)));
    var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-1))));
}
