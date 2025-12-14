/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79564
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_18 += ((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_16)), (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) ((int) (+(((var_7) - (var_6))))));
        var_20 = ((/* implicit */_Bool) ((arr_3 [(_Bool)1]) ? (((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) var_0);
                    var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)192))))) ? ((~(min((((/* implicit */int) arr_4 [i_1])), (arr_8 [(unsigned char)2]))))) : (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_2])) && (((/* implicit */_Bool) (short)8160))))), (arr_5 [i_1] [i_1]))))));
                    var_23 &= ((unsigned char) ((((/* implicit */int) ((var_10) > (((/* implicit */int) arr_6 [i_3] [i_2] [i_1]))))) / ((~(((/* implicit */int) var_16))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_4 [i_1])))));
                                arr_13 [i_1] [i_3] [(unsigned char)13] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(signed char)0] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                                arr_14 [i_3] [i_2] [i_3 + 1] [i_4] [i_5] [i_5] [i_3] = ((/* implicit */unsigned short) arr_9 [i_1] [i_1] [i_2] [i_4] [i_5] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 2 */
    for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 3) 
    {
        var_26 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_6 - 2] [i_6] [i_6] [i_6 - 2]))))) ? (((((/* implicit */_Bool) arr_6 [i_6] [i_6 - 1] [i_6])) ? (816124139945253543LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6]))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)19)))))))), (max((((((/* implicit */_Bool) arr_16 [i_6])) ? (14077137483689414437ULL) : (2985400166766150869ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_6]))))))));
        arr_18 [i_6 + 1] = min((((/* implicit */unsigned long long int) var_16)), (((unsigned long long int) min((var_10), (var_4)))));
    }
    for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 1; i_8 < 21; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                {
                    var_27 ^= ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_8])) || (((/* implicit */_Bool) arr_1 [i_8]))))))));
                    arr_29 [i_7] [i_7] [i_7] [12] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_7] [i_7]))))) <= (((arr_24 [i_9] [i_8] [i_7]) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9]))))))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) arr_6 [i_7] [i_7] [i_7]);
    }
}
