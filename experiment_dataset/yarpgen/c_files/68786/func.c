/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68786
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) / (7426001528151711324LL)))) ? (7426001528151711324LL) : (((/* implicit */long long int) (-(var_0)))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        arr_10 [i_1] [i_3] = ((/* implicit */unsigned char) arr_8 [3U] [3U] [17U] [7U]);
                        var_15 = ((/* implicit */unsigned int) var_13);
                        var_16 ^= (-((~(((/* implicit */int) min((var_13), (arr_5 [11U])))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        arr_14 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_10)), (var_11))) + (((/* implicit */unsigned long long int) ((-4832110684598892115LL) & (((/* implicit */long long int) var_8)))))))) ? (min((((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [5U]))))), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_0 [14U] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                        var_17 ^= var_1;
                    }
                    arr_15 [i_2] [i_2] [i_0] |= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (((/* implicit */int) arr_9 [(unsigned short)17] [(unsigned short)17] [i_2])) : (((/* implicit */int) var_2)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [12] [i_2]))))))) - ((+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_12 [i_0] [15U] [i_2] [i_0])))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (_Bool)1);
    var_19 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) arr_17 [i_5]);
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_5])) - (((/* implicit */int) arr_17 [i_5]))));
        var_20 = ((/* implicit */int) var_4);
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) -7426001528151711313LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5]))) : (var_7)));
        arr_20 [i_5] = ((/* implicit */unsigned short) (+((-2147483647 - 1))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6] [i_6])) ? (arr_8 [16] [i_6] [i_6] [i_6]) : (arr_8 [i_6] [i_6] [i_6] [i_6])));
        var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((((/* implicit */_Bool) arr_21 [i_6] [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((var_6) < (((/* implicit */unsigned long long int) arr_2 [0U] [i_6])))))));
        var_23 = ((/* implicit */unsigned int) 7426001528151711313LL);
        var_24 = ((/* implicit */unsigned char) ((var_6) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [9] [9] [i_6] [i_6])) ? (var_8) : (((/* implicit */int) arr_5 [i_6])))))));
        var_25 = var_10;
    }
}
