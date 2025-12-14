/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67631
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((3084865010U), (min((2882696752U), (((/* implicit */unsigned int) var_17))))))) ? (((/* implicit */unsigned long long int) min((((1412270536U) >> (((652710620U) - (652710611U))))), (3424168875U)))) : (var_5)));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (min((((((/* implicit */_Bool) 655833536)) ? (var_1) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_4))))));
    var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 2882696776U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)45)) && (((/* implicit */_Bool) (short)32767))))))), (((/* implicit */int) (unsigned short)65535))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) == (1210102285U)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [(_Bool)1] [i_1] [(unsigned short)3] [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_16)) / (((/* implicit */int) arr_3 [i_1] [i_2])))));
                    var_21 = ((/* implicit */unsigned long long int) ((short) (_Bool)1));
                    var_22 = ((min((((/* implicit */unsigned long long int) 1073741824U)), (arr_5 [(short)0] [i_2]))) < (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) var_0))), ((-(3424168886U)))))));
                    var_23 = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) var_15))), ((((_Bool)1) ? (((((/* implicit */int) (unsigned short)35925)) + (((/* implicit */int) (unsigned short)29610)))) : (min((((/* implicit */int) arr_6 [i_0] [i_1])), (428570372)))))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_24 = ((((/* implicit */_Bool) (short)29399)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2882696752U));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) 209835953U)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) arr_20 [i_3] [i_3] [(short)14] [(short)14]))))));
                        var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 652710620U)) ? (max((var_5), (((/* implicit */unsigned long long int) (unsigned short)65524)))) : (((/* implicit */unsigned long long int) arr_11 [i_3] [i_3])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)45)))));
                    }
                } 
            } 
        } 
        arr_21 [i_3] = ((/* implicit */_Bool) min((arr_19 [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (min((((/* implicit */unsigned int) var_10)), (31U))))))));
        var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)(-32767 - 1))), ((((_Bool)1) ? (4095948617U) : (2U)))));
    }
}
