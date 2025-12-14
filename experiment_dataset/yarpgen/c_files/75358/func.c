/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75358
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) 0U);
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        arr_10 [i_1] [i_1] [4ULL] [i_3] = var_11;
                        var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) arr_8 [i_0] [i_1 + 1])), (arr_7 [(short)3] [i_2])))))) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_3] [i_2] [i_2]))) > (-5235005614505678174LL))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7642))) : (max((arr_7 [8] [i_1]), (((/* implicit */long long int) (short)-8174)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) arr_1 [i_0] [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (arr_0 [i_3] [i_0])))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (((-(-1LL))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) || (((/* implicit */_Bool) arr_7 [(signed char)2] [i_0]))))))))) > (min((max((((/* implicit */int) (short)16383)), (-574993305))), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-2552))))))));
        var_15 = ((/* implicit */short) var_12);
    }
    for (unsigned int i_4 = 2; i_4 < 18; i_4 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 1; i_8 < 21; i_8 += 2) 
                        {
                            arr_27 [i_4] [i_5] [i_6] [(_Bool)1] [i_8] = (-(((/* implicit */int) (short)-7642)));
                            var_16 = var_11;
                        }
                        var_17 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (short)-17571)) ? (3169456651949122107ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173))))) + (((3169456651949122107ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4 - 2] [i_4 + 2] [i_4 + 2])))))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 524287U)) ? (max((min((5235005614505678174LL), (((/* implicit */long long int) (short)7658)))), (((/* implicit */long long int) 713277672)))) : (((/* implicit */long long int) ((/* implicit */int) (short)7641)))));
                        var_19 = ((/* implicit */unsigned char) ((int) ((signed char) var_13)));
                    }
                } 
            } 
        } 
        arr_28 [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -5094862737898221194LL)) ? (((/* implicit */int) (short)2557)) : (((/* implicit */int) (short)-2559))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_17 [i_4]))))) : (((arr_25 [i_4] [i_4] [i_4] [i_4] [i_4]) ? (8581520247096565182LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_4]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) max((-8581520247096565183LL), (((/* implicit */long long int) var_11))))))))));
        var_20 = ((/* implicit */unsigned char) arr_13 [i_4]);
    }
    for (unsigned int i_9 = 2; i_9 < 18; i_9 += 3) /* same iter space */
    {
        arr_32 [i_9] [i_9 + 4] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_7)), (574993305))), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_0)))))))), (10ULL)));
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_9 + 3] [i_9 - 1] [i_9] [i_9] [i_9])) | (arr_30 [i_9])))) == (2145010040152112523LL))) ? (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)255)) - (233))))) != (((/* implicit */int) ((3169456651949122107ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9] [i_9] [i_9] [(short)14]))))))))) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) 5235005614505678173LL)) != (15277287421760429509ULL)))) % (arr_13 [i_9 - 1])))));
        arr_33 [i_9] [i_9] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned char)130)), (((unsigned int) arr_20 [i_9]))));
        var_22 = ((/* implicit */long long int) ((short) max((((/* implicit */unsigned int) min((-2044596527), (((/* implicit */int) (_Bool)1))))), (((422705978U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-29743)) | (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) var_9)) / (((/* implicit */int) var_12))))))) ? (((/* implicit */int) min((((/* implicit */short) var_5)), (max((var_0), ((short)-5117)))))) : (((/* implicit */int) ((303403709) == (((/* implicit */int) var_9)))))));
}
