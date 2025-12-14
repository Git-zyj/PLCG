/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63753
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
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (var_12))))) : (((unsigned int) var_1)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)1023)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (-10LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))), (max((arr_1 [i_0 - 2]), (((/* implicit */unsigned long long int) (short)25856))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (-10LL) : (-10LL)))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0 - 2])) != (((/* implicit */int) arr_5 [i_0 - 1]))))), (((unsigned short) var_16))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        var_20 = -3626985697990159635LL;
                        var_21 = (~(arr_8 [i_0 + 2] [i_2 + 1] [i_2] [i_0 + 2] [i_3 + 1]));
                        var_22 ^= ((/* implicit */long long int) ((unsigned char) var_7));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        arr_12 [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_7 [i_1] [i_1] [i_0] [i_4]));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) 13LL))));
                    }
                    arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_14), (arr_11 [i_0 - 2] [i_2 + 1] [i_0 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -14LL)))) : ((+(-7LL)))));
                    arr_14 [i_0] [(signed char)12] [i_2 + 1] &= ((/* implicit */int) var_0);
                }
            } 
        } 
        var_24 = ((/* implicit */short) (+(((int) arr_1 [i_0 - 2]))));
        var_25 = ((/* implicit */short) arr_11 [i_0] [i_0] [i_0 - 2]);
    }
    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        var_26 = ((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) ((unsigned int) (_Bool)1)))));
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned short) max(((~(var_15))), (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))));
        arr_20 [i_5] = ((/* implicit */signed char) max((((/* implicit */int) ((arr_8 [i_5] [i_5] [i_5] [i_5] [i_5]) != (-18LL)))), ((((_Bool)1) ? (((/* implicit */int) arr_11 [0LL] [i_5] [i_5])) : (((/* implicit */int) arr_11 [i_5] [i_5] [i_5]))))));
    }
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        var_27 = ((/* implicit */unsigned long long int) var_9);
        arr_24 [i_6] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_6]))));
    }
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((var_4), (((/* implicit */unsigned long long int) var_15))))))) : (var_4)));
    var_29 = ((((((/* implicit */_Bool) (unsigned short)5252)) || ((_Bool)1))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) min((3570962677U), (((/* implicit */unsigned int) var_14))))) && (((/* implicit */_Bool) var_4))))));
    var_30 = ((/* implicit */signed char) var_5);
}
