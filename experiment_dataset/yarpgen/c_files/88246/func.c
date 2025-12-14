/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88246
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1446803047397852293LL) : (arr_0 [i_0])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) -1496473882297263408LL))))))) | (max((((((/* implicit */int) var_7)) | (((/* implicit */int) var_11)))), (((/* implicit */int) var_10))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_19 ^= ((/* implicit */long long int) var_8);
                        arr_10 [(unsigned short)0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_1])))) & (((((/* implicit */int) var_1)) & (((/* implicit */int) var_8))))))) * (((((arr_3 [i_0]) / (var_9))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [i_0] [5LL])))))))));
                        var_20 ^= max((arr_6 [i_0] [i_1] [i_2] [(unsigned short)1]), (max((-4251024426401660784LL), (-1496473882297263406LL))));
                    }
                } 
            } 
            arr_11 [i_0] &= ((/* implicit */unsigned short) (-(1496473882297263406LL)));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            arr_16 [i_0] = ((unsigned char) (~(((/* implicit */int) var_11))));
            arr_17 [i_0] [i_4] [i_0] = ((((/* implicit */_Bool) (unsigned short)16280)) ? ((-(arr_4 [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) var_2))));
            var_21 *= ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
        }
    }
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
    {
        arr_20 [i_5] = max((536870896LL), (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13))) % (-6962293952358600000LL))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5]))) : (9079256848778919936LL))))));
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            var_22 -= ((/* implicit */long long int) ((unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)9))))), (max((var_15), (arr_4 [i_6]))))));
            var_23 = (unsigned short)9;
            arr_24 [i_5] [i_5] = ((/* implicit */unsigned short) (~(((long long int) var_10))));
        }
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
    {
        var_24 -= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_7] [i_7]))));
        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_7]))));
        var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_6 [i_7] [i_7] [i_7] [13LL])) ? (arr_6 [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)113))))) : (var_15)));
        arr_27 [i_7] [i_7] = ((unsigned short) var_8);
        var_27 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_7]))) / ((-(arr_22 [i_7])))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
    {
        arr_31 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_8] [i_8] [i_8])) ? (arr_5 [i_8] [i_8] [i_8]) : (arr_22 [i_8])));
        var_28 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_8] [i_8]))));
        arr_32 [i_8] = ((/* implicit */unsigned char) ((var_3) >= (var_16)));
        arr_33 [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))));
        arr_34 [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_14))))));
    }
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((4939357973088727136LL), (((/* implicit */long long int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (var_13)))))))) % (var_9)));
    var_30 = ((/* implicit */unsigned short) var_7);
}
