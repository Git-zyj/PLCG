/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77067
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
    var_15 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_16 -= ((/* implicit */unsigned char) arr_5 [i_1] [i_1] [i_0]);
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))) / (arr_5 [i_1] [i_0] [i_0]))))) || (((/* implicit */_Bool) ((unsigned short) (signed char)-59)))));
            arr_6 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((signed char) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_8))))));
            var_18 *= ((/* implicit */unsigned char) (signed char)67);
            var_19 &= ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned char)239))))));
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((signed char) arr_7 [i_0] [i_2] [i_0]));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_5))));
        }
        for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) arr_12 [i_0] [i_3] [i_3])));
            var_22 = ((/* implicit */_Bool) arr_5 [i_0] [i_3] [i_3]);
        }
        arr_15 [i_0] = (+((-(((/* implicit */int) (signed char)-42)))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_6] [i_5 + 1] [i_4])) ? (((/* implicit */int) arr_7 [i_6] [i_5 + 1] [i_6])) : (((/* implicit */int) arr_7 [i_6] [i_5 - 1] [i_6])))))));
                arr_23 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((arr_17 [i_4] [i_6]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_5] [i_6])))));
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_5 - 1] [i_5 - 1] [i_5 - 1])) ^ (((/* implicit */int) arr_12 [i_5 - 1] [i_5 - 1] [i_5])))))));
                var_25 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) var_4)))));
            }
            arr_24 [i_4] [i_4] = ((/* implicit */int) (!(((var_14) > (((/* implicit */long long int) arr_16 [i_5]))))));
            arr_25 [i_5 + 1] [i_4] [i_4] &= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_5 + 1] [i_5 + 1])) / (((/* implicit */int) arr_0 [i_5 + 1] [i_5 + 1]))));
            arr_26 [i_4] [i_4] |= ((/* implicit */unsigned int) ((unsigned char) arr_17 [i_5 - 1] [i_5]));
        }
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            arr_31 [i_7] = ((/* implicit */unsigned int) ((signed char) arr_29 [i_7] [i_7] [i_4]));
            var_26 &= (~(-917109308));
            arr_32 [i_4] [i_4] |= ((/* implicit */unsigned char) ((arr_22 [i_4] [i_7]) >> ((((~(var_11))) - (1893214123U)))));
        }
        arr_33 [i_4] |= ((/* implicit */signed char) ((arr_8 [i_4] [i_4]) >= (arr_8 [i_4] [i_4])));
        arr_34 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-67))))) : (((((/* implicit */_Bool) var_5)) ? (arr_4 [i_4] [i_4]) : (var_1)))));
    }
    for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 3) 
    {
        arr_38 [i_8] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (signed char)59)) & (((/* implicit */int) arr_37 [i_8 - 1])))));
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) max((3623759394U), (((/* implicit */unsigned int) (unsigned char)165)))))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 931686652692012368ULL))));
        arr_41 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
        arr_42 [i_9] |= ((/* implicit */long long int) arr_35 [i_9]);
        arr_43 [i_9] = ((/* implicit */unsigned long long int) ((unsigned int) arr_39 [i_9]));
    }
}
