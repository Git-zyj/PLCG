/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70192
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_2] [i_0]))));
                    var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (208132211479324633LL) : (208132211479324633LL)));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1]))));
                    var_19 |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))) >= (var_10))))) > (((arr_0 [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)73)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            for (int i_4 = 2; i_4 < 8; i_4 += 3) 
            {
                {
                    arr_13 [i_4] [i_0] [i_0] [i_0] = (+((-(((/* implicit */int) (signed char)73)))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_6 [(unsigned char)1] [i_3] [(unsigned char)1] [i_4])) : (((/* implicit */int) var_14)))))));
                    var_21 = ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_3 - 2] [i_4 + 1])) || (((/* implicit */_Bool) arr_11 [i_0 + 1] [i_3 - 1] [i_4 - 2])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    arr_20 [i_0] [i_0] [i_0] = ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 - 1]))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)51)) ? (-934767748) : (((/* implicit */int) (signed char)-47)))))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 1; i_7 < 7; i_7 += 2) 
                    {
                        arr_24 [i_0] [i_0] [i_6] [i_7] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_25 [i_0] [i_0] [i_0] [i_7 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_16 [i_7 + 1]))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_2))));
                        arr_26 [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7 - 1])) ? (((/* implicit */int) arr_21 [6LL] [i_5] [i_5] [i_7 + 3])) : (((/* implicit */int) arr_14 [i_0] [i_5]))));
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) (unsigned short)65535);
    }
    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
    {
        var_25 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (arr_27 [i_8])))) < (((/* implicit */int) arr_28 [i_8] [i_8]))))), (arr_28 [i_8] [i_8])));
        var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (-(18446744073709551615ULL))))));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) arr_28 [13LL] [i_8])) - ((+(max((((/* implicit */int) (signed char)-9)), (var_3))))))))));
    }
    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
    {
        var_28 -= ((/* implicit */signed char) 1431483994392615804LL);
        var_29 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9] [i_9])))))) ? (518208679U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))))));
        var_30 = ((/* implicit */_Bool) (+(((/* implicit */int) (((-(((/* implicit */int) arr_30 [i_9])))) > (((/* implicit */int) ((unsigned char) arr_27 [i_9]))))))));
        var_31 = ((/* implicit */int) (_Bool)1);
    }
    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) var_3))));
}
