/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61957
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = (~(((((/* implicit */_Bool) (signed char)-118)) ? (562949953421310LL) : (((/* implicit */long long int) 1077708234U)))));
                var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_1 - 2] [i_1 - 2] [i_1]))), (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 1077708255U))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((unsigned char) var_1)))));
        var_22 = ((/* implicit */unsigned long long int) (unsigned char)77);
    }
    for (short i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        var_23 = ((/* implicit */short) max((arr_4 [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2868974649U)) ? (0U) : (1073709056U))))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) & (((/* implicit */int) arr_2 [i_3] [21U] [i_3]))));
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 11; i_4 += 2) 
        {
            for (signed char i_5 = 3; i_5 < 11; i_5 += 4) 
            {
                {
                    var_25 = ((/* implicit */long long int) var_0);
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8022947645539276434LL)) ? (-562949953421310LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17)))));
                    arr_18 [i_3] [i_4 - 1] [i_4 + 1] = ((/* implicit */unsigned short) ((unsigned long long int) max((((short) arr_12 [i_4])), (((/* implicit */short) var_15)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            arr_23 [i_3] [i_3] [i_3] = ((/* implicit */signed char) arr_12 [i_3]);
            var_27 -= ((/* implicit */signed char) max((((unsigned long long int) var_1)), (min((((/* implicit */unsigned long long int) arr_19 [i_6 - 1] [i_6 + 1])), (var_13)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 4; i_7 < 10; i_7 += 3) 
            {
                var_28 &= ((/* implicit */unsigned short) arr_5 [i_6 - 1] [i_6 + 1] [0ULL]);
                arr_26 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (unsigned char)255))));
                arr_27 [i_3 + 2] [i_3] [i_6 - 1] [i_7] = ((/* implicit */unsigned int) var_6);
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (1073709056U)))) - (min((var_3), (((/* implicit */unsigned long long int) (unsigned short)54137))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_24 [i_3 + 1])) : (0LL))) : (((/* implicit */long long int) (-(((var_1) - (((/* implicit */unsigned int) 0)))))))));
            }
            var_30 = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) -7))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)113)) : (-11)))));
        }
        for (short i_8 = 3; i_8 < 9; i_8 += 3) 
        {
            arr_31 [i_3] = ((/* implicit */_Bool) -8022947645539276423LL);
            var_31 &= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((short) var_12))), (((((/* implicit */_Bool) 67641772U)) ? ((-(6397642301473105361LL))) : (8022947645539276434LL)))));
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    {
                        var_32 = ((/* implicit */signed char) arr_14 [i_8 + 3]);
                        arr_39 [i_8] [i_3 + 2] [i_3 + 2] [i_3] = ((/* implicit */unsigned char) var_0);
                    }
                } 
            } 
            var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8022947645539276434LL)) ? (arr_3 [i_3]) : (arr_3 [i_3]))))));
        }
        var_34 = ((/* implicit */unsigned int) ((unsigned long long int) ((short) ((unsigned int) -562949953421310LL))));
    }
    var_35 = ((/* implicit */short) ((((((((/* implicit */unsigned long long int) -8022947645539276425LL)) > (var_3))) ? (((/* implicit */long long int) min((((/* implicit */int) var_14)), (1192959822)))) : (min((var_11), (((/* implicit */long long int) var_5)))))) >= (((/* implicit */long long int) ((/* implicit */int) var_12)))));
    var_36 &= ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))) < (-8022947645539276465LL))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (unsigned short)22161)))))));
    var_37 += ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_3))) == (((/* implicit */int) var_4))));
}
