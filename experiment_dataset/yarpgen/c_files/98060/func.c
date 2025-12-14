/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98060
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
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_12))) || (((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 2] [i_0 - 1]))));
                        var_20 = ((/* implicit */long long int) arr_8 [i_0]);
                    }
                    var_21 = ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_4)) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) << (((var_16) - (1429065049U)))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_3))))));
                    arr_9 [i_1] [i_0] [(unsigned short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(var_16))) >> (((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_1] [i_0 + 3])) ? (var_4) : (((/* implicit */long long int) 1282874733U)))) - (5876815865927963297LL)))))) && (((((/* implicit */long long int) ((/* implicit */int) var_7))) >= ((~(var_14)))))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_1);
    var_24 = ((/* implicit */signed char) (+((~(((/* implicit */int) var_7))))));
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) (-(arr_11 [i_4] [i_4])));
        var_26 -= ((long long int) min((((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_2)))), (((/* implicit */int) max((var_6), (var_2))))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 1282874733U)) ? (492582029U) : (1282874750U)));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) arr_11 [i_4] [i_5 - 1]))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (-((+(var_16)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (var_17))))));
}
