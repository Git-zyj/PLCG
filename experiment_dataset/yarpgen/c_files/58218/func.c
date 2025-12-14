/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58218
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
    var_16 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-21863)))) ^ (((/* implicit */int) (unsigned short)32736)))), (var_4)));
    var_17 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((int) var_2)), (((/* implicit */int) arr_0 [i_0 - 2]))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)32736)) % (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) var_8))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((max((((((/* implicit */int) (unsigned char)135)) << (((((/* implicit */int) (signed char)127)) - (121))))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)32736)))))), (min((((/* implicit */int) (unsigned short)32736)), (-1585043922))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-(((int) ((short) var_9)))));
    }
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned short) min((arr_4 [i_1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10))))))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((unsigned int) min((arr_3 [i_1 + 1] [i_1 + 2]), (((/* implicit */short) (signed char)102)))))));
        var_22 = ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */int) arr_5 [10ULL])) * (((/* implicit */int) var_3))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1585043941)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((short) 6384442637963425124LL))))))));
        arr_6 [i_1] [i_1 - 2] = ((/* implicit */unsigned char) arr_5 [2ULL]);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 2]))) : (((unsigned long long int) arr_7 [i_2] [i_2]))));
        var_24 += ((/* implicit */signed char) ((int) arr_7 [i_2] [i_2 + 3]));
        var_25 *= ((_Bool) (+(((/* implicit */int) arr_8 [i_2 - 2]))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)18982))))) * ((-(((unsigned int) (short)(-32767 - 1))))))))));
                    arr_17 [i_5] [i_4] [i_5] = ((/* implicit */short) var_8);
                    var_27 = ((/* implicit */int) max((var_27), (max((-756779607), (((/* implicit */int) arr_10 [i_4]))))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_9 [i_3 + 1])), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32800))))) ? (((var_4) & (((/* implicit */int) arr_9 [i_3])))) : (((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (((/* implicit */int) arr_10 [i_3]))))))));
    }
    /* LoopNest 2 */
    for (short i_6 = 2; i_6 < 14; i_6 += 2) 
    {
        for (int i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            {
                arr_26 [i_6] [i_7] = ((/* implicit */unsigned char) min((min((((int) arr_25 [i_6] [i_6 - 2])), (((((/* implicit */int) arr_22 [(unsigned char)9])) / (-756779607))))), (((/* implicit */int) max((arr_8 [i_7]), (arr_8 [i_7]))))));
                var_29 ^= arr_7 [i_7] [i_6];
                var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) var_11)))));
            }
        } 
    } 
}
