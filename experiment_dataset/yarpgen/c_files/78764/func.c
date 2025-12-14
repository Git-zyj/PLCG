/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78764
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_2 [i_0 - 2]), (arr_2 [i_0 + 1]))))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_5);
                var_15 |= ((/* implicit */signed char) var_10);
                var_16 ^= ((/* implicit */_Bool) arr_5 [i_0]);
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)6)) ? (min((arr_0 [i_0]), (((/* implicit */int) (short)20260)))) : (((/* implicit */int) arr_5 [i_0 - 2])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min(((short)26208), (((/* implicit */short) var_7))))) ? ((+(var_3))) : (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) (unsigned char)165))))))))));
    /* LoopSeq 3 */
    for (short i_2 = 3; i_2 < 22; i_2 += 3) 
    {
        var_18 = ((/* implicit */short) max(((+((-(0U))))), (((/* implicit */unsigned int) arr_11 [i_2]))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((((/* implicit */int) arr_14 [i_3] [i_4])) & (arr_0 [i_4])))))), (((arr_4 [i_2] [i_2] [i_2]) + (arr_4 [i_2] [i_3] [i_4])))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2]))))))))));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 1; i_5 < 20; i_5 += 3) 
    {
        var_21 = ((/* implicit */int) max((min((arr_4 [i_5 - 1] [i_5 - 1] [i_5 + 1]), (arr_4 [i_5] [i_5 + 1] [i_5 + 1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_5] [i_5 + 1] [(unsigned char)20] [i_5])))))));
        arr_21 [i_5 - 1] = ((/* implicit */unsigned short) arr_13 [i_5]);
        var_22 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_5 - 1]))))) ? (max((((/* implicit */unsigned long long int) var_9)), (var_1))) : (((/* implicit */unsigned long long int) arr_4 [i_5 - 1] [i_5 + 1] [i_5])))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_20 [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_1 [i_5])) : (var_4))), (max((arr_17 [i_5] [i_5]), (var_14))))))));
        var_23 = ((/* implicit */int) arr_10 [i_5]);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_26 [i_6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-3794)))))) : (70368744177663LL))), (((/* implicit */long long int) (unsigned char)132))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (((~(min((arr_16 [i_6] [i_8] [i_8] [i_6]), (((/* implicit */int) arr_23 [i_6])))))) == (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-20264)), (var_10)))) != (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)49792)) : (((/* implicit */int) (short)22831))))))))))));
                    var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_19 [i_7] [i_8])), (max((((var_3) >> (((arr_16 [i_8] [i_8] [i_8] [i_6]) + (1673612164))))), (((((/* implicit */int) var_9)) / (var_14)))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_29 [i_6])))), (((((/* implicit */_Bool) arr_10 [i_6])) ? (((((/* implicit */int) var_9)) / (((/* implicit */int) arr_5 [i_6])))) : (var_14)))));
    }
}
