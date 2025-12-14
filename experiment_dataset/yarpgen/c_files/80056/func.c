/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80056
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_11))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2 - 1] [i_1])) ? (var_7) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2 - 1] [11]))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2 - 1] [i_1] [i_4] = ((/* implicit */short) ((((arr_4 [i_2] [i_3]) == (((/* implicit */long long int) ((/* implicit */int) var_8))))) ? (((int) var_0)) : (((/* implicit */int) (unsigned char)75))));
                                arr_15 [i_4] [i_2 - 1] [i_3] [i_4] = ((/* implicit */unsigned short) (unsigned char)83);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 16894767830342462670ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181)))));
        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) << (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (short i_5 = 1; i_5 < 16; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_5 - 1] [i_6] [i_7] [i_8]))));
                        var_20 |= ((/* implicit */long long int) var_3);
                        var_21 = arr_10 [i_8] [i_5] [i_5];
                        arr_27 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5 - 1])) ? (((/* implicit */int) arr_7 [i_5 + 1])) : (((/* implicit */int) arr_7 [i_5 - 1]))));
                    }
                } 
            } 
        } 
        var_22 = (-(((long long int) var_7)));
    }
    var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) var_6)) ? (max((var_0), (((/* implicit */unsigned long long int) var_14)))) : (var_6)))));
    var_24 += ((/* implicit */_Bool) var_9);
    var_25 = ((/* implicit */short) var_11);
}
