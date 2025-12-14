/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63673
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
    var_10 = ((/* implicit */unsigned char) (short)13451);
    var_11 *= ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) >= (11748764241040239180ULL)))), (((arr_0 [i_0]) >> (((arr_2 [i_0] [i_0]) - (3740466302U))))))), (((((/* implicit */_Bool) 11748764241040239173ULL)) ? (6697979832669312443ULL) : (((/* implicit */unsigned long long int) 2101843227U))))));
        var_12 = ((/* implicit */long long int) ((unsigned long long int) var_5));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_15 [i_1] [i_2] [i_1] = ((/* implicit */short) var_7);
                    arr_16 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_8 [i_3]));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((arr_9 [i_1]) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_9 [i_1])))))));
    }
    for (short i_4 = 1; i_4 < 23; i_4 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) arr_17 [i_4 + 1]);
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (_Bool)1))))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    var_16 = max((((((11748764241040239173ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54917))))) ? (((/* implicit */int) arr_24 [i_4] [i_4 - 1] [i_4] [(_Bool)1])) : (((((/* implicit */_Bool) arr_19 [i_4] [i_4 - 1] [i_4 + 1])) ? (((/* implicit */int) arr_23 [i_5] [i_5] [(unsigned short)22])) : (((/* implicit */int) (unsigned short)42325)))))), (((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */int) arr_24 [i_4 - 1] [i_4 - 1] [(_Bool)1] [(unsigned short)2])) : (((/* implicit */int) arr_22 [i_6] [i_5] [i_4])))));
                    arr_25 [i_6] [i_4] [i_5] [i_6] |= ((/* implicit */unsigned long long int) max((((/* implicit */short) ((unsigned char) arr_23 [i_4 + 1] [i_4 + 1] [i_4]))), (arr_23 [i_4] [i_5] [(signed char)21])));
                    var_17 = ((/* implicit */int) arr_23 [i_4] [i_5] [0LL]);
                    arr_26 [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */int) arr_24 [i_6] [i_4] [21] [i_4])) : (arr_19 [i_5] [i_5] [i_6])))))) : (var_9)));
                    arr_27 [i_4] [i_6] = (i_4 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((var_1) >> (((arr_21 [i_4] [i_4] [i_4]) + (1571459960)))))))) <= (((long long int) (+(((/* implicit */int) arr_22 [i_4 + 1] [i_5] [i_6])))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((var_1) >> (((((arr_21 [i_4] [i_4] [i_4]) - (1571459960))) + (390225245)))))))) <= (((long long int) (+(((/* implicit */int) arr_22 [i_4 + 1] [i_5] [i_6]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            for (signed char i_8 = 1; i_8 < 20; i_8 += 1) 
            {
                {
                    arr_32 [i_4 + 1] [i_7] [i_4] = ((/* implicit */unsigned long long int) arr_17 [i_7]);
                    var_18 = ((((/* implicit */_Bool) 313741281U)) ? (2101843221U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6812713903624229447ULL)) ? (11634030170085322169ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_36 [i_9] = ((((/* implicit */_Bool) arr_21 [i_9] [i_9] [(signed char)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4179255752U));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_9] [i_9] [i_9])) - (((/* implicit */int) arr_22 [i_9] [i_9] [i_9]))))) ? (((((/* implicit */_Bool) arr_23 [i_9] [i_9] [i_9])) ? (arr_20 [4U] [i_9]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_9])) ? (0LL) : (((/* implicit */long long int) arr_31 [i_9]))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 6697979832669312443ULL))))), (((((/* implicit */_Bool) (short)-15285)) ? (((/* implicit */int) var_5)) : (arr_18 [(_Bool)1]))))))));
        var_21 = ((/* implicit */_Bool) arr_21 [i_9] [i_9] [(unsigned char)14]);
        arr_37 [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) 11748764241040239148ULL))));
    }
}
