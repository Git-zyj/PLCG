/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62896
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
        arr_3 [i_0] = ((/* implicit */unsigned short) var_6);
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))));
    }
    for (unsigned short i_1 = 4; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 8; i_2 += 2) 
        {
            arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_9 [i_1 + 1])) / (4483010942044605260ULL)));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) 
            {
                arr_14 [i_1] [i_2 + 4] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)58140)) : (((/* implicit */int) var_16)))))));
                arr_15 [i_1] [i_2] [(signed char)6] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 2; i_4 < 9; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            var_17 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_4]))));
                            var_18 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)15872)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 + 1] [i_1] [i_1])))))));
                            var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4483010942044605247ULL)) ? (7413508407347018623ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                            arr_21 [i_1] [9U] [i_3] [i_1] [i_2] = ((/* implicit */signed char) 261632U);
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1] [i_1]);
            }
            for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                arr_24 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_2 + 4]))) : (var_7)));
                arr_25 [i_1] [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4483010942044605247ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (4483010942044605264ULL)))) ? (((/* implicit */unsigned long long int) arr_0 [i_1 - 1])) : (((unsigned long long int) arr_22 [i_1] [i_6]))));
            }
        }
        arr_26 [i_1] [i_1] = ((/* implicit */unsigned short) var_14);
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        var_21 = var_16;
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)15872)) / (((/* implicit */int) arr_27 [i_7] [i_7]))));
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            arr_33 [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (2322799985628126256ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
            var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_31 [i_7]))));
            var_24 = ((/* implicit */unsigned char) (unsigned short)20319);
            var_25 = ((/* implicit */unsigned short) var_4);
        }
        var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-2140041855942378470LL)))) ? (((((/* implicit */_Bool) 13963733131664946389ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) 8051498679303449848ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)67))))));
    }
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7)));
}
