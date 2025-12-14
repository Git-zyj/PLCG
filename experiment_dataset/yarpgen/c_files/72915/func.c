/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72915
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((unsigned int) var_11)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) var_12);
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_1] [i_0])) ? (((/* implicit */int) ((var_1) > (var_1)))) : (arr_10 [i_2 - 1])));
                        var_16 &= var_12;
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) ((unsigned long long int) var_6));
                        var_18 = ((/* implicit */unsigned int) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                        var_19 &= ((/* implicit */_Bool) var_11);
                        var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4]))))) : ((-(((/* implicit */int) var_2))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) arr_10 [6U]);
                        var_22 = ((/* implicit */int) var_2);
                        var_23 = ((/* implicit */long long int) arr_2 [i_1 + 2]);
                    }
                    var_24 ^= ((/* implicit */unsigned char) ((long long int) (unsigned short)65535));
                    var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)21654))));
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) (+(arr_12 [i_0 - 1])));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        var_27 = ((/* implicit */short) (+(arr_17 [i_6] [i_6] [i_6] [i_6] [i_6])));
        var_28 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)1))));
        var_29 = ((/* implicit */signed char) ((unsigned long long int) arr_12 [i_6]));
    }
}
