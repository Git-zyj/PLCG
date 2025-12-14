/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61688
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
    var_11 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) var_6)) : (var_10)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */int) var_3);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_10 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2 + 3] [i_2 + 1] [i_2 - 1])) ? (arr_9 [i_2 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_2] [(_Bool)1])) < (((/* implicit */int) var_8))))))));
                        arr_11 [i_2 - 1] [i_2 - 1] [21LL] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 3])) ? (((/* implicit */int) (unsigned short)58270)) : (((/* implicit */int) (unsigned short)7287))));
                        var_13 = ((/* implicit */_Bool) 26388279066624ULL);
                        arr_12 [i_0] [i_0] [i_1] [i_0] [i_3] &= ((/* implicit */short) (!((_Bool)1)));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 2; i_4 < 22; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */short) ((int) arr_14 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_4 + 1]));
                        arr_15 [i_0] [i_0] [i_0] [12U] [i_0] [i_0] = ((/* implicit */long long int) var_4);
                        var_15 ^= ((/* implicit */unsigned short) arr_1 [(short)23]);
                        var_16 = ((/* implicit */long long int) ((_Bool) var_10));
                    }
                    arr_16 [6LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 2] [i_2 + 1]))));
                    var_17 = ((/* implicit */long long int) arr_1 [i_0]);
                }
            } 
        } 
    } 
    var_18 = var_1;
}
