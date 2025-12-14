/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78629
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) var_7))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (((_Bool)1) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) - (var_3))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */_Bool) arr_1 [4ULL] [4ULL]);
        arr_6 [i_0] = ((/* implicit */int) min((((((_Bool) var_7)) ? (962058361U) : (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (3332908917U)))) > (18357876060215437836ULL))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_11 = var_5;
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_0);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_14 [i_0] = var_9;
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((arr_12 [i_2]) / (962058375U))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0])) / (((/* implicit */int) (unsigned short)4717))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        arr_22 [(signed char)2] [i_2] [i_3] [4U] [i_4] &= ((/* implicit */_Bool) ((unsigned short) ((((arr_13 [i_3]) | (1153412151))) | (((/* implicit */int) arr_2 [i_0])))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                {
                    arr_29 [i_0] [i_6] |= ((/* implicit */long long int) (!(arr_15 [i_6] [i_5] [i_5])));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        arr_32 [i_0] [i_6] [(short)10] [i_0] = ((/* implicit */signed char) arr_17 [i_7] [i_6] [i_0]);
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_20 [5ULL] [i_5] [i_5] [i_6] [i_0])) - (((unsigned long long int) (signed char)32))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_35 [i_0] [i_0] [(unsigned short)8] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)26276)) <= (((/* implicit */int) var_4))))), ((-(((((/* implicit */_Bool) arr_18 [i_0] [i_5] [(_Bool)1])) ? (3332908915U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 4; i_9 < 9; i_9 += 2) 
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_9 - 4] [i_0])) ? (((/* implicit */int) arr_3 [i_9 + 2] [i_0])) : (((/* implicit */int) arr_3 [i_9 + 1] [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (((unsigned int) arr_36 [i_0] [i_5] [i_6] [i_8] [i_9 - 3]))))));
                            var_15 = ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (((unsigned int) arr_20 [i_0] [i_8] [(signed char)1] [(signed char)1] [i_0])))));
                        }
                        arr_38 [i_0] = ((((((/* implicit */int) (short)-12816)) + (2147483647))) << (((1153412151) - (1153412151))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_6]))) + (((-2438102604868351850LL) % (((/* implicit */long long int) ((/* implicit */int) arr_33 [5U] [5U]))))))))));
                        arr_41 [i_0] = ((/* implicit */long long int) arr_10 [i_5] [i_0]);
                    }
                    arr_42 [i_0] [i_6] [i_6] [i_0] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3332908917U))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (short)83)) << (((((/* implicit */int) var_8)) - (49))))))) * (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned int) var_9)))))));
    var_18 = ((((/* implicit */int) ((((/* implicit */int) (short)68)) >= ((-(((/* implicit */int) (signed char)96))))))) != (((/* implicit */int) ((_Bool) -828322360))));
}
