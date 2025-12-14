/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58285
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
    var_18 = (~(min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)3)))));
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_17) | (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (2147483630)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_0] = (i_0 % 2 == zero) ? (max((((/* implicit */long long int) var_8)), ((((((~(70368744046592LL))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (signed char)-88)) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) -1LL)))) - (9807051990601197594ULL))))))) : (max((((/* implicit */long long int) var_8)), ((((((~(70368744046592LL))) + (9223372036854775807LL))) >> (((((((((/* implicit */_Bool) (signed char)-88)) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) -1LL)))) - (9807051990601197594ULL))) - (1522070809318021589ULL)))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_8 [i_2 - 2] [i_2 - 3] [i_2 - 2]);
                        var_20 = ((/* implicit */unsigned char) arr_0 [i_3]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) min((max(((+(1920027227549164064LL))), (((/* implicit */long long int) (((-2147483647 - 1)) < (var_0)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -2147483630)) ? (((/* implicit */int) ((2147483630) < (((/* implicit */int) (unsigned short)38283))))) : (((((/* implicit */int) var_16)) & (((/* implicit */int) var_6)))))))));
                    arr_20 [i_0] = ((/* implicit */unsigned int) -2147483630);
                    arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_6 = 1; i_6 < 13; i_6 += 3) /* same iter space */
    {
        arr_25 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_0 [i_6])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (unsigned char)31))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (arr_3 [i_6]))))));
        var_22 -= ((/* implicit */signed char) ((long long int) (short)-32763));
        arr_26 [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_6] [i_6] [i_6] [i_6 + 3]))));
    }
}
