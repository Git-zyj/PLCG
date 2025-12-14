/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78505
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
    var_11 = ((/* implicit */signed char) ((5399441857870228051LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38353)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))) : (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1])))))))) ? ((((!(((/* implicit */_Bool) arr_1 [i_0 - 1])))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [13ULL]))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)7))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) + (315831419U)))));
        arr_2 [i_0] [(unsigned char)1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)8)) ^ (((/* implicit */int) (_Bool)0))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    arr_12 [i_1] [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_1]))));
                    arr_13 [i_1] = ((/* implicit */signed char) var_6);
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)23))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((var_7) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1 - 1] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_1 [i_4]))));
                                arr_22 [i_1] [(short)11] [(signed char)17] [i_3] [(signed char)18] [i_1] = ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (unsigned char)240)))));
                                arr_23 [i_5] [i_1] [(unsigned char)18] [i_4] [i_5] [(short)15] = ((/* implicit */unsigned long long int) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_24 [i_1] = ((unsigned int) (_Bool)1);
    }
    var_16 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_3)))) ? (((/* implicit */unsigned long long int) var_1)) : (((var_3) | (((/* implicit */unsigned long long int) var_5)))))));
}
