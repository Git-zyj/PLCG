/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57404
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ? (min((((((/* implicit */_Bool) var_6)) ? (4294967285U) : (25U))), (min((((/* implicit */unsigned int) (unsigned char)130)), (var_1))))) : (min((min((10U), (((/* implicit */unsigned int) var_5)))), (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131)))))))));
    var_13 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((4294967269U), (4230620037U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 68719476735ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)73))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)121))))) : (var_6)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                arr_11 [(unsigned short)15] [i_1] [i_1] [15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (signed char)-11))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (36U)));
                arr_12 [i_1] [(_Bool)1] [i_0 - 1] [(_Bool)1] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (+(((/* implicit */int) var_11))))))));
            }
            var_14 = ((/* implicit */short) var_4);
        }
    }
    /* vectorizable */
    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) ((2305843009213677568LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (-9223372036854775807LL - 1LL)))));
        arr_15 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2305843009213677568LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((var_6) - (3120106584U))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            var_17 = ((/* implicit */long long int) (unsigned char)131);
            arr_18 [i_3] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)124))))));
        }
    }
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_22 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5]))) : (((arr_21 [i_5]) >> (((var_3) - (7753012625663445357LL)))))));
        arr_23 [i_5] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned char)140)) && (((/* implicit */_Bool) min((((/* implicit */int) (signed char)-114)), (-1228000432)))))));
        var_18 = ((/* implicit */unsigned char) ((unsigned long long int) ((min((((/* implicit */unsigned long long int) (signed char)-74)), (arr_21 [i_5]))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)132))))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)2)))) * ((+(4294967295U)))));
        arr_28 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (826228897661466041ULL) : (((/* implicit */unsigned long long int) arr_2 [i_6]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)125)) * (((/* implicit */int) (_Bool)1))))) : (((740143469050649221LL) << (0)))));
    }
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))))), ((-(min((((/* implicit */long long int) (unsigned char)245)), (740143469050649244LL)))))));
        var_21 ^= ((/* implicit */long long int) 3807507174765428550ULL);
    }
}
