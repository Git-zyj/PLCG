/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97799
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
    var_12 = ((/* implicit */int) max((var_12), (((max((((((/* implicit */_Bool) (unsigned char)6)) && (((/* implicit */_Bool) var_10)))), (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (short)4095)))))) ? (((/* implicit */int) ((var_0) && (((/* implicit */_Bool) ((unsigned long long int) var_1)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min(((unsigned char)6), ((unsigned char)231))))))))));
    var_13 = var_10;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) (_Bool)1))))) ? (arr_3 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -6LL)))))))))));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_6))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((unsigned int) (short)4108)))));
        var_17 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) arr_7 [i_3])))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 9; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(698694248)))), (((((/* implicit */_Bool) -6498234432932958457LL)) ? (((/* implicit */unsigned long long int) arr_13 [i_6 - 1])) : (arr_8 [i_6 + 2] [i_5 - 1])))));
                        var_19 = ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_5 + 1]))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_3]))))), (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6])))))))) : (((((/* implicit */_Bool) ((2573392448791517233ULL) ^ (((/* implicit */unsigned long long int) 16776192U))))) ? (((/* implicit */unsigned long long int) 3LL)) : (13475246585837529762ULL))));
                        arr_17 [i_3] [i_4] [(short)2] [i_4] = ((/* implicit */unsigned int) min((((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34372))) != (arr_16 [i_5])))), (((_Bool) var_6))));
                    }
                } 
            } 
        } 
        arr_18 [i_3] = ((/* implicit */unsigned short) max((arr_1 [i_3]), (min((arr_11 [i_3] [i_3] [i_3]), (arr_11 [4] [i_3] [i_3])))));
    }
    for (int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_7])) ? (arr_6 [i_7] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) >= (((long long int) arr_5 [i_7]))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)26202))))) ? (7290063305183087521ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((5LL) < (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    }
    var_22 = ((/* implicit */unsigned short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)4121)) : (((/* implicit */int) var_0)))) <= (((/* implicit */int) var_11)))))));
}
