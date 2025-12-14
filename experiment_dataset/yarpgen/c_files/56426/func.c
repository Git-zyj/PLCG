/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56426
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        var_19 += ((/* implicit */unsigned int) var_11);
                        arr_10 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)28999)) << (((783854549) - (783854546)))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_7 [i_3] [i_2] [(_Bool)1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_5 [(unsigned char)13])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))));
                        arr_12 [i_3] [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_15))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (var_3)));
                    }
                    for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */long long int) (+(arr_3 [i_2 - 1] [i_2 + 2] [i_2 - 1])));
                        var_22 = ((/* implicit */signed char) min((((((var_10) != (((/* implicit */int) arr_8 [(unsigned char)3] [i_2] [i_2] [i_1] [i_1] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_4] [(_Bool)1]) <= (((/* implicit */long long int) var_15)))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_2]))));
                    }
                    var_23 -= ((/* implicit */unsigned long long int) arr_3 [i_0 + 3] [i_0] [i_2 + 1]);
                    var_24 += ((/* implicit */short) (+(arr_9 [i_2] [i_0 + 3])));
                    var_25 *= ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0] [i_2 + 3] [i_0])) * (((max((-839088400), (((/* implicit */int) var_4)))) * (((/* implicit */int) var_8))))));
                }
            } 
        } 
    } 
    var_26 &= ((/* implicit */signed char) (short)28999);
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((min((arr_19 [i_5] [i_6] [i_5]), (((/* implicit */int) arr_20 [i_5] [i_5 + 2] [i_5 - 1])))) == (((/* implicit */int) arr_22 [i_6 - 1] [i_7])))))));
                    var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_24 [i_5] [i_6 - 1] [i_7] [i_5 - 1])), (arr_23 [i_6 - 1] [i_6 - 1] [i_7] [i_5 - 1])))) + (((1152921504606846975ULL) * (((/* implicit */unsigned long long int) arr_23 [i_5] [i_6 - 1] [i_6 - 1] [i_5 + 1]))))));
                    arr_25 [i_5] [i_7] = ((/* implicit */signed char) 977721750);
                }
            } 
        } 
    } 
}
