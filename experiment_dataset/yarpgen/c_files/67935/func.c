/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67935
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
    var_12 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_0] [i_2] [i_1 + 3] [i_0] [i_0] &= ((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) << (((/* implicit */int) ((_Bool) (signed char)97))));
                                arr_16 [i_0] [i_2] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_11 [i_1] [i_1] [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) arr_12 [i_1])))), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                arr_17 [i_0] [i_1 + 1] [i_2] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(max((1264310798U), (((/* implicit */unsigned int) arr_4 [i_1]))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (var_9))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)2420))))))))));
                                arr_18 [i_0 + 1] [i_1] [i_2] [13ULL] [i_4] = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)-2421))) * (arr_11 [i_1] [i_2 - 3] [i_3 - 1]))), (((/* implicit */unsigned int) var_2))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 24; i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_5] [i_0] [6ULL] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_13 [i_0] [i_0] [i_0] [i_2] [i_5])))));
                        arr_22 [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((unsigned long long int) (_Bool)1));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 1; i_6 < 24; i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_25 [i_0 - 1] [i_1] [i_2 - 2] [i_0])) % ((+(arr_0 [i_2 + 2] [i_6 - 1])))));
                        arr_27 [i_0] [15ULL] [i_0] [i_1] [i_6] [i_6 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) (!(var_0))))));
                        arr_28 [i_6 - 1] [i_0] [i_0] [i_0] = ((/* implicit */short) var_2);
                        arr_29 [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) ((arr_3 [i_1 + 2] [i_1] [i_1 - 1]) > (arr_3 [i_1 + 1] [18U] [i_1 + 3])));
                    }
                    arr_30 [i_0] [16ULL] [i_1] = ((/* implicit */short) ((min((((/* implicit */unsigned int) var_10)), (arr_14 [i_2 + 2] [i_1] [10LL] [i_1] [i_0 + 1]))) < ((+(var_1)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 2; i_7 < 15; i_7 += 4) 
    {
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            {
                arr_35 [i_7] [i_7] [i_8] = var_8;
                arr_36 [i_7 - 1] = ((/* implicit */short) (_Bool)0);
                arr_37 [i_7 - 2] [i_7 - 2] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) + (arr_3 [i_8] [i_8] [i_7])))) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)42464))) : ((-(arr_13 [i_7 + 1] [i_7] [i_8] [i_8 - 1] [i_7]))))))));
            }
        } 
    } 
}
