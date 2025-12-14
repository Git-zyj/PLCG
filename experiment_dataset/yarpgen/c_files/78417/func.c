/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78417
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9))))));
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */int) var_6)), (((-1318602606) - (((/* implicit */int) (_Bool)1)))))))));
    var_20 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) var_5);
        arr_4 [i_0] [(short)18] |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32760)) ? (arr_3 [4] [4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (8820202842908269095LL))))))));
        var_22 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_3 [i_0] [4ULL])) & (((unsigned long long int) arr_3 [i_0] [i_0]))));
        var_23 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)16942))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */short) var_11)), (arr_6 [i_1] [i_1])));
        var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 1117259248U))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3177708047U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */long long int) var_8)), (arr_5 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_17))))))))));
        var_25 = ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (arr_5 [4U] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    var_26 &= ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | ((~(arr_15 [i_4])))))));
                    var_27 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (15246964745143602875ULL))), (((/* implicit */unsigned long long int) ((int) (unsigned short)31600)))));
                    var_28 |= ((/* implicit */unsigned char) (_Bool)1);
                }
            } 
        } 
        var_29 ^= ((/* implicit */unsigned long long int) min((-8820202842908269095LL), (-8820202842908269095LL)));
    }
    /* vectorizable */
    for (long long int i_5 = 2; i_5 < 11; i_5 += 4) 
    {
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) var_16))))))));
        var_31 = ((/* implicit */signed char) var_2);
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 1; i_6 < 10; i_6 += 4) 
    {
        for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            {
                var_32 -= ((/* implicit */unsigned short) ((((unsigned long long int) -8820202842908269096LL)) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_6 + 1]) == (arr_10 [i_6 - 1])))))));
                var_33 = max((var_16), (((/* implicit */unsigned int) var_11)));
                var_34 = max((-8820202842908269107LL), (((/* implicit */long long int) var_7)));
                var_35 = ((/* implicit */int) arr_0 [i_6] [i_7]);
            }
        } 
    } 
}
