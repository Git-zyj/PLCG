/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67620
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0] [i_1 - 2] [i_2]));
                    var_17 -= ((/* implicit */signed char) arr_5 [i_0 - 1] [i_1 - 1] [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        arr_10 [i_3] = var_6;
        arr_11 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) || (arr_7 [i_3]))) ? (((/* implicit */int) arr_7 [i_3])) : (arr_9 [i_3])))) : (((((/* implicit */_Bool) min((arr_8 [i_3]), (((/* implicit */long long int) 2097151))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_7 [i_3]))))) || ((!(((/* implicit */_Bool) -7774013647011518673LL))))));
    }
    for (short i_4 = 1; i_4 < 16; i_4 += 4) 
    {
        arr_15 [12] [12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_1))) : (min((((/* implicit */unsigned long long int) var_5)), (var_0)))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)192))))) ? (var_14) : (((/* implicit */int) (unsigned char)63))))) ? (var_1) : (max((((/* implicit */unsigned long long int) var_8)), (arr_13 [6] [i_4 + 2])))));
    }
}
