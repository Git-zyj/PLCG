/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68960
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) -9223372036854775798LL)) ? (382051904U) : (382051882U)))));
                arr_8 [i_0] [i_1] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8342488586997874759ULL)) ? (((((/* implicit */_Bool) 14U)) ? (((/* implicit */int) (unsigned short)43374)) : (((/* implicit */int) (unsigned short)10387)))) : (((((/* implicit */int) (signed char)-47)) - (((/* implicit */int) (unsigned short)5298))))))) & (2708250836U)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 10104255486711676857ULL)) ? (18446744073709551615ULL) : (7643193992545803521ULL)));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((signed char) 3049736464U);
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1ULL)) ? (1433497732U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((signed char) (unsigned short)0));
                                var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13346092341738603916ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14501))) : (5100651731970947699ULL)));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (signed char)-98))) ? (((((/* implicit */_Bool) 131071U)) ? (((/* implicit */unsigned long long int) 0U)) : (30ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (439821205U))))));
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */long long int) (~(((unsigned int) (signed char)70))));
                arr_18 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((unsigned int) ((2708250836U) - (382051904U)))) % (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255)))))));
            }
        } 
    } 
    var_24 = (+(min((((/* implicit */unsigned long long int) 9223372036854775797LL)), (14208837018167848453ULL))));
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_25 *= ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((unsigned int) 9223372036854775786LL))), (((127ULL) & (((/* implicit */unsigned long long int) -7433799471699786787LL)))))) != (((/* implicit */unsigned long long int) ((max((793554320772185746LL), (((/* implicit */long long int) (unsigned short)65535)))) >> (((((((/* implicit */_Bool) -5741837631191177800LL)) ? (3633310386853166917ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35128))))) - (3633310386853166874ULL))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)35116))));
                var_27 &= ((/* implicit */unsigned short) -1LL);
                var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 18446744073709551489ULL)) ? (((/* implicit */int) (short)-9641)) : (((/* implicit */int) (signed char)102)))) ^ (((/* implicit */int) (signed char)127))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                var_29 *= ((/* implicit */unsigned short) (_Bool)1);
                var_30 = ((/* implicit */unsigned int) ((-5876156857442368556LL) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 443693048U)) && (((/* implicit */_Bool) 7643193992545803521ULL))))))));
                var_31 = ((((/* implicit */_Bool) (unsigned char)0)) ? (268435455U) : (2080768U));
                var_32 = ((/* implicit */long long int) ((signed char) (!((_Bool)1))));
            }
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (((_Bool)1) ? ((+(18446744073709551594ULL))) : (18446744073709551615ULL))))));
            var_34 = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) -793554320772185747LL)));
            var_35 = ((/* implicit */_Bool) ((125829120U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
        }
        /* vectorizable */
        for (signed char i_9 = 4; i_9 < 17; i_9 += 2) 
        {
            arr_32 [i_5] [i_5] [i_9 - 3] = ((((/* implicit */unsigned long long int) 3970081287U)) ^ (539811558241000267ULL));
            var_36 *= ((/* implicit */unsigned short) 14238604477548437257ULL);
            arr_33 [(signed char)0] [i_5] = ((/* implicit */unsigned long long int) ((signed char) (unsigned short)2));
        }
        var_37 -= ((((/* implicit */_Bool) (~(11547594204034897898ULL)))) ? (9697617256284406106ULL) : (min((2305843009213685760ULL), (((/* implicit */unsigned long long int) 3970081293U)))));
        var_38 = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) (unsigned short)47304)))));
    }
}
