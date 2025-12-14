/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79526
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) arr_2 [i_0]);
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 2; i_3 < 17; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] [i_3] = ((/* implicit */int) arr_12 [i_3]);
        arr_14 [i_3] = ((/* implicit */_Bool) ((1802648430) + (((/* implicit */int) (unsigned short)13))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 17; i_5 += 4) 
            {
                {
                    arr_19 [i_3] [(_Bool)1] [i_4] [(_Bool)1] = ((/* implicit */int) max((max((arr_12 [i_3 - 2]), (((/* implicit */unsigned int) arr_17 [i_3] [i_4] [12LL])))), (arr_10 [i_3])));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4720286943102317552LL)) && (((/* implicit */_Bool) arr_2 [i_3])))))));
                    var_17 = ((/* implicit */_Bool) arr_10 [i_3]);
                }
            } 
        } 
        arr_20 [i_3] = min((4720286943102317568LL), (-8875437620292223822LL));
    }
    for (short i_6 = 2; i_6 < 17; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_7 = 2; i_7 < 18; i_7 += 3) 
        {
            arr_27 [i_6] [i_7] [i_7] = max((((/* implicit */unsigned int) arr_4 [i_7])), (arr_1 [i_6] [i_6]));
            arr_28 [i_6] [i_7] [i_7] = ((/* implicit */signed char) (unsigned short)504);
            arr_29 [i_6] [i_7] [i_6] |= ((/* implicit */signed char) -8875437620292223821LL);
        }
        /* vectorizable */
        for (unsigned char i_8 = 2; i_8 < 18; i_8 += 3) 
        {
            var_18 = ((/* implicit */_Bool) arr_12 [i_6]);
            var_19 |= ((/* implicit */_Bool) arr_24 [i_8]);
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_8 - 2] [i_8 - 2] [i_8 - 1])) && ((_Bool)1)));
            var_21 = ((/* implicit */unsigned short) arr_21 [i_6]);
        }
        var_22 = ((/* implicit */long long int) 572082073U);
    }
}
