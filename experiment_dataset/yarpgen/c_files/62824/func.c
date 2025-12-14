/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62824
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1 + 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)64554)) >> (((-1573343406) + (1573343409)))))) % (arr_3 [i_0] [i_0] [i_1])));
                var_20 &= ((/* implicit */unsigned short) ((arr_0 [i_1] [i_0]) | (((/* implicit */int) min((((((/* implicit */int) var_14)) > (((/* implicit */int) var_17)))), (((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) (unsigned short)31007)))))))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((min((arr_3 [i_1] [i_1 - 2] [i_1 - 2]), (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) arr_2 [(unsigned short)16])) : (arr_3 [i_0] [i_0] [i_1]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)31007)))))))));
            }
        } 
    } 
    var_22 += ((/* implicit */unsigned int) var_10);
    /* LoopSeq 3 */
    for (unsigned short i_2 = 3; i_2 < 16; i_2 += 3) 
    {
        arr_7 [i_2] [i_2 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 2])) ? (((/* implicit */int) arr_6 [i_2 + 2])) : (((/* implicit */int) arr_6 [i_2 + 2])))))));
        arr_8 [i_2] |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_6 [i_2 + 2])) ? (((/* implicit */int) arr_6 [i_2 + 1])) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2 - 3])) : (((/* implicit */int) arr_6 [i_2 - 3]))))));
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            var_23 |= ((unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (arr_2 [i_3]))) * (((/* implicit */int) var_13))));
            var_24 = ((/* implicit */unsigned short) min((var_24), (arr_10 [i_2] [i_3])));
        }
        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 2) 
        {
            arr_13 [i_2] &= ((/* implicit */signed char) min((((/* implicit */unsigned int) var_3)), (((((/* implicit */unsigned int) arr_0 [i_4 + 2] [i_2 + 2])) + (arr_9 [i_4 - 1] [i_2 - 3] [i_2 - 1])))));
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                var_25 += ((/* implicit */unsigned int) arr_16 [i_5] [i_4] [i_5] [i_5]);
                arr_17 [i_2] [i_4 - 2] [i_5] [i_5] = ((unsigned short) (+(((unsigned long long int) var_1))));
            }
            var_26 = ((((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) arr_14 [i_2] [i_2] [i_4 - 2] [i_4])))) == (arr_2 [i_4]))))) % (max((arr_5 [i_2] [i_4 + 2]), (((/* implicit */unsigned int) arr_6 [i_2])))));
        }
        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    {
                        var_27 |= ((/* implicit */int) var_13);
                        var_28 *= (-(((/* implicit */int) ((signed char) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                        var_29 |= ((/* implicit */unsigned short) arr_19 [i_8]);
                    }
                } 
            } 
            var_30 = ((((/* implicit */_Bool) arr_18 [i_6 - 1] [i_6] [i_6])) ? (((/* implicit */int) arr_23 [i_2])) : (((/* implicit */int) ((((/* implicit */int) arr_18 [i_2] [i_6] [i_6])) != (((((/* implicit */_Bool) arr_9 [i_2] [i_6] [i_6])) ? (((/* implicit */int) var_13)) : (arr_21 [i_6] [i_6] [i_6] [i_6])))))));
            arr_25 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_6)) > (arr_2 [i_6])))) >> (((var_4) - (734502943U)))));
        }
        var_31 += ((/* implicit */signed char) ((int) var_12));
    }
    for (unsigned char i_9 = 2; i_9 < 18; i_9 += 3) 
    {
        arr_28 [i_9] [i_9] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((arr_27 [i_9]) / (var_5)))) ? (max((arr_27 [i_9]), (((/* implicit */unsigned int) arr_26 [i_9 - 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9]))))), ((-(max((((/* implicit */unsigned int) arr_26 [i_9])), (arr_27 [i_9])))))));
        arr_29 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1289463656)) > (9558375922839533057ULL))))) == (((((/* implicit */_Bool) arr_26 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_27 [i_9]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((arr_27 [i_9]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9])))))))));
        var_32 = ((/* implicit */unsigned long long int) arr_26 [i_9]);
    }
    for (signed char i_10 = 3; i_10 < 24; i_10 += 4) 
    {
        arr_34 [(signed char)14] &= ((/* implicit */int) arr_31 [i_10]);
        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) arr_32 [i_10 + 1]))));
    }
    var_34 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -1289463656)) & (var_4)));
}
