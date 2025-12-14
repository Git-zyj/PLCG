/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91077
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_4 [5LL] &= ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_14 -= ((/* implicit */_Bool) min(((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63274)) && (((/* implicit */_Bool) var_6))))))), (((/* implicit */int) (unsigned short)4))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))), (((unsigned int) max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_8 [i_0] [i_1] [i_2] [i_3]))))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_5))));
                        var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_10)) ? (var_6) : (arr_9 [i_0] [i_0] [i_0] [i_0]))) : (var_6))) != (2420676697U)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 21; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (unsigned int i_6 = 2; i_6 < 22; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    {
                        var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) var_0)) : (var_4)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (12653850281842898846ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_0))))))));
                        var_19 = ((/* implicit */short) var_12);
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_6 + 1] [i_6 + 1] [i_6] [i_6])) ^ (((/* implicit */int) arr_21 [i_6] [i_6 + 1] [i_6] [i_6 - 1]))));
                        var_21 = ((/* implicit */short) ((arr_1 [i_6 + 1] [i_4 - 2]) >= (arr_1 [i_6 - 1] [i_4 + 1])));
                    }
                } 
            } 
        } 
        var_22 = 4294967295U;
    }
    /* vectorizable */
    for (unsigned char i_8 = 3; i_8 < 20; i_8 += 4) 
    {
        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_10 [i_8] [i_8 + 2] [i_8] [i_8])))) ? (((/* implicit */int) (short)15272)) : ((+(((/* implicit */int) (unsigned short)40072))))));
        /* LoopSeq 1 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_9 - 1]))));
            var_25 |= ((/* implicit */unsigned long long int) (+((-2147483647 - 1))));
            var_26 |= ((/* implicit */_Bool) (+(((11176993081642965010ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69)))))));
        }
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 635611216U)) && (((/* implicit */_Bool) 17451448556060672LL)))))) : (((2393157724U) + (var_0))))))));
    }
    for (int i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        arr_30 [i_10] = ((/* implicit */int) (+((+(((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */unsigned long long int) arr_15 [i_10])) : (8746574032970883651ULL)))))));
        var_28 = ((/* implicit */_Bool) 1097582864);
        arr_31 [i_10] = ((/* implicit */unsigned long long int) 4991545601998582176LL);
        arr_32 [i_10] = ((/* implicit */unsigned char) (!((!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 2122987171))))))));
    }
    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_13))));
}
