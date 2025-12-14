/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69192
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((0ULL) >> (((2021879043U) - (2021879001U))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) 2516751282U)), (12ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)39)), ((unsigned short)37382)))))))))));
                    var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)21)) ^ (((/* implicit */int) (unsigned char)32))))) ? (12ULL) : (((((/* implicit */_Bool) 19U)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), ((~(max((14ULL), (4ULL)))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)28156)) << (((((/* implicit */int) (unsigned char)253)) - (250)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (14402387493227530016ULL) : (4044356580482021597ULL)))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3599))) : (14402387493227530016ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)83)) - (67))))))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 10; i_3 += 4) 
    {
        var_18 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))) != (6307027438874601970LL)));
        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)5066)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59773))) : (14402387493227530016ULL)));
        var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)5066)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)62408))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((signed char) (short)5080));
        var_22 = (_Bool)1;
        var_23 = ((((/* implicit */_Bool) -6891514334836429509LL)) && (((/* implicit */_Bool) ((6839923131428686451ULL) << (((2122795959145490963ULL) - (2122795959145490931ULL)))))));
        arr_15 [(_Bool)1] = ((/* implicit */signed char) ((-6307027438874601964LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_24 [i_5] [i_5] [i_5] = ((/* implicit */signed char) (_Bool)1);
                    arr_25 [i_5] [i_6] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4044356580482021615ULL)))) % (((((/* implicit */_Bool) 3163077820U)) ? (18039596615858481967ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31860)))))));
                    var_24 = ((/* implicit */int) ((unsigned long long int) max((min((((/* implicit */unsigned long long int) 6486936914166623792LL)), (556669461075468845ULL))), (((/* implicit */unsigned long long int) ((long long int) 6307027438874601961LL))))));
                }
            } 
        } 
    } 
}
