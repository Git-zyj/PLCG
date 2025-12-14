/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56387
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            var_11 = ((/* implicit */long long int) ((unsigned char) (unsigned char)200));
            var_12 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-32)) + (((/* implicit */int) (short)1536))))) / (max((var_8), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 + 1] [i_1])))));
        }
        for (long long int i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [(unsigned short)12]))));
            var_14 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((unsigned int) arr_7 [i_2] [i_2] [i_0]))) ? (var_8) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [(_Bool)1] [(_Bool)1])), (2725777049U))))))));
            arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)85))))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) (unsigned short)3840)))) : (((var_6) ? (((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 2])) : (((/* implicit */int) (unsigned short)0))))));
        }
        arr_9 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(unsigned char)14] [i_0]))) + (var_10))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
    }
    for (int i_3 = 2; i_3 < 18; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)244)) - (((/* implicit */int) (unsigned char)0))));
        var_15 = ((/* implicit */unsigned char) (+(min((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_2 [i_3 - 2]))))));
        var_16 = ((/* implicit */unsigned short) ((int) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_6))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                for (int i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    {
                        arr_26 [i_4] [i_4] [i_5] [i_6] [i_7] = var_8;
                        var_17 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18071))) : (arr_19 [i_7] [13]))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4]))) : (((((/* implicit */_Bool) arr_15 [i_4])) ? (var_1) : (((/* implicit */long long int) -323963016))))));
        arr_27 [17U] = ((/* implicit */unsigned char) 2048U);
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (1279648264U) : (((/* implicit */unsigned int) -679693280)))) == (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_3)))))));
    }
    var_20 = var_2;
    var_21 = ((/* implicit */long long int) (+((-((~(((/* implicit */int) (_Bool)1))))))));
}
