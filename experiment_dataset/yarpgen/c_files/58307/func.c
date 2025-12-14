/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58307
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
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_2 [i_0 + 2])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 2])) / (((/* implicit */int) arr_0 [i_0 + 2]))))) : (arr_1 [i_0 + 2] [i_0])));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */long long int) 4294967295U)) - ((+(-6187130715340441626LL))))) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (max((2567131896U), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) >= (var_0))))))));
        var_17 = ((/* implicit */unsigned char) arr_5 [i_1]);
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] [i_2] |= ((/* implicit */_Bool) max(((-(max((((/* implicit */unsigned int) arr_8 [i_2])), (393888156U))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2])) >> (((((/* implicit */int) max((arr_7 [i_2]), (arr_7 [i_2])))) - (186))))))));
        var_18 += ((/* implicit */int) max((arr_7 [(unsigned short)22]), (((/* implicit */unsigned char) arr_8 [i_2]))));
        var_19 *= ((/* implicit */unsigned char) arr_8 [i_2]);
        var_20 ^= ((/* implicit */int) ((signed char) (+((+(((/* implicit */int) arr_8 [i_2])))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [11U]))))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2])) & (((/* implicit */int) arr_7 [i_2]))))) < (4194303U))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_3]))));
        var_22 = ((/* implicit */int) var_5);
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            {
                var_23 ^= ((/* implicit */unsigned char) 5U);
                arr_18 [i_5] [i_4] [i_4] = ((/* implicit */unsigned char) max((min((1838640849), (((/* implicit */int) arr_14 [i_4] [i_5])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (arr_11 [i_4] [21ULL]) : (((/* implicit */long long int) arr_4 [i_5]))))))))));
                arr_19 [i_4] [i_5] = ((/* implicit */unsigned long long int) ((var_14) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_4] [i_5])) != (((/* implicit */int) arr_14 [i_5] [i_5]))))))));
                var_24 = ((/* implicit */long long int) var_7);
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) var_12);
    var_26 = ((/* implicit */int) var_14);
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_12))));
}
