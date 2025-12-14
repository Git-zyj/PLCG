/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68199
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
    var_14 |= ((unsigned char) var_0);
    var_15 = ((/* implicit */unsigned short) (-(((((_Bool) var_4)) ? (((/* implicit */int) (unsigned short)14104)) : (((/* implicit */int) (!(var_5))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_16 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [0] [i_0]))))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (unsigned short)45253))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_12 [(unsigned char)6] [i_2] [i_1] [(short)15] [2LL] = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_10))))));
                        arr_13 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) (unsigned short)14098);
                        arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_0] [(unsigned char)10] [i_1] [i_1 + 1])) : ((-(var_6)))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_1 - 1])) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_1 - 1]))));
                            arr_17 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1] [i_1 - 1])) ? (arr_8 [i_1 + 1] [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) var_6))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_1 + 2] [i_2] [i_3] [(_Bool)1])) <= (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 3; i_5 < 9; i_5 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(209350284460793493LL)))) ? ((-(arr_3 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 167511708U)) != (17807561333585361268ULL)))))));
        arr_22 [i_5 - 2] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)54927))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) (unsigned short)35246)) : (((/* implicit */int) (unsigned char)198))));
        arr_23 [i_5] = ((/* implicit */long long int) 14729953466411406427ULL);
        var_21 = ((/* implicit */long long int) var_4);
    }
    var_22 += var_7;
}
