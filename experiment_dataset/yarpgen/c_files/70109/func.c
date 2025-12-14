/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70109
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            var_10 = ((/* implicit */short) ((((((/* implicit */_Bool) 6459281969917252270LL)) ? (((((/* implicit */_Bool) -6574220096071134190LL)) ? (1324622802060412391LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
            arr_6 [i_0] = ((/* implicit */unsigned short) ((((_Bool) (+(2147483647)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27))) : (arr_3 [i_0] [i_1] [i_1])));
        }
        var_11 = ((/* implicit */_Bool) ((short) 2316223798072868813LL));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) 67108863);
        /* LoopSeq 3 */
        for (short i_3 = 3; i_3 < 12; i_3 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */long long int) arr_3 [i_2] [i_3] [i_3]);
            var_13 &= ((((/* implicit */_Bool) (unsigned short)1536)) ? (((long long int) -1646842179)) : (((/* implicit */long long int) arr_1 [i_2] [i_3 - 2])));
            var_14 = ((/* implicit */short) (-(1608366058)));
        }
        for (short i_4 = 3; i_4 < 12; i_4 += 1) /* same iter space */
        {
            arr_14 [i_2] [12] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1608366062)) ? (((/* implicit */int) (unsigned short)23436)) : (-1608366057))) - (((/* implicit */int) ((3617478750U) == (((/* implicit */unsigned int) -67108881)))))));
            arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 2558006159U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42089))) : (-1753543399065738303LL)));
        }
        for (short i_5 = 3; i_5 < 12; i_5 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) var_8))) << (((((/* implicit */int) arr_11 [i_2] [i_5 + 1])) - (42)))));
            arr_18 [i_5] [i_2] [i_5] = ((arr_16 [i_5] [i_5]) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5] [i_5]))));
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (unsigned int i_7 = 3; i_7 < 12; i_7 += 1) 
            {
                for (int i_8 = 3; i_8 < 9; i_8 += 1) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) ((long long int) arr_21 [i_8 + 1] [i_7 - 1] [i_2] [i_2]));
                        arr_26 [i_6] [i_6] [(_Bool)1] [i_8] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_20 [(unsigned short)0] [i_6] [i_7])) ? (arr_8 [i_8 - 1]) : (arr_8 [8]))) >= (((/* implicit */unsigned long long int) (+(arr_20 [i_6] [i_6] [i_8]))))));
                        arr_27 [i_2] [i_2] [i_6] [i_6] [i_6] [i_8] = ((/* implicit */short) ((((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [(unsigned short)5])) / (((67108841) + (1608366077)))));
                    }
                } 
            } 
        } 
        arr_28 [0LL] [0LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) arr_2 [i_2])) / (1269983722))) : (((/* implicit */int) ((_Bool) arr_13 [i_2] [(signed char)8] [i_2])))));
    }
    var_17 = ((/* implicit */long long int) var_6);
    var_18 = ((/* implicit */unsigned char) var_1);
}
