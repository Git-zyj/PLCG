/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67858
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
    var_16 -= ((/* implicit */unsigned char) var_14);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_10);
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((int) arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) min(((-9223372036854775807LL - 1LL)), (-4032966122907752862LL)));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_7 [i_1] [i_0])) ? (max((((/* implicit */long long int) (short)3840)), (var_3))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2))))), (((/* implicit */long long int) arr_0 [i_0] [i_1]))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_12 [2] [i_1] [i_1] [2] |= ((/* implicit */short) arr_8 [6LL]);
                        arr_13 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775796LL)) ? (arr_5 [i_0] [i_0]) : (var_7)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 857031659U)) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (+(arr_6 [i_0])))))))));
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3 - 1] = ((/* implicit */int) (-(-9223372036854775796LL)));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_4))));
                    }
                } 
            } 
        }
        arr_15 [12U] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 2997545104U))) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (!(((/* implicit */_Bool) 268402688)))))));
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        arr_18 [i_4] [i_4 + 1] = ((/* implicit */unsigned char) (short)-4549);
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            arr_21 [i_5] = max((min((9223372036854775807LL), (((/* implicit */long long int) (short)-32750)))), (((/* implicit */long long int) ((((/* implicit */long long int) min((arr_10 [i_4] [i_4] [i_4] [i_4 + 1] [i_4]), (((/* implicit */int) var_14))))) != (min((((/* implicit */long long int) arr_16 [i_4])), (-7949389083804161070LL)))))));
            var_19 = ((/* implicit */int) ((unsigned int) min((arr_19 [i_4] [i_5] [i_5]), (((/* implicit */long long int) ((var_12) - (((/* implicit */int) (short)4548))))))));
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 8; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    {
                        var_20 *= ((((/* implicit */_Bool) max(((+(-2083451870))), (((/* implicit */int) (_Bool)0))))) ? (max((arr_20 [i_4 + 1]), (5078472351787214933LL))) : (-9223372036854775804LL));
                        arr_29 [i_7] [i_6] [i_5] [i_5] [i_7] = ((/* implicit */long long int) var_13);
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 8; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((unsigned char) 9223372036854775807LL));
                    var_22 = (-((+(-9223372036854775804LL))));
                    var_23 ^= ((((/* implicit */_Bool) 3132312201309758062LL)) ? (857031659U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92))));
                    var_24 = ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
                }
            } 
        } 
        var_25 += ((/* implicit */short) arr_32 [i_4] [i_4]);
    }
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
    {
        var_26 = ((/* implicit */unsigned char) min((min((2341482724981493202LL), (((/* implicit */long long int) arr_39 [i_10 + 1] [i_10 + 1])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_39 [i_10 + 1] [i_10 + 1])))))));
        arr_40 [i_10] = ((/* implicit */int) min((min((9223372036854775804LL), (-1LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)4428))))) && (((/* implicit */_Bool) var_0)))))));
    }
    for (long long int i_11 = 1; i_11 < 18; i_11 += 1) 
    {
        var_27 = ((/* implicit */long long int) (-(var_9)));
        arr_44 [i_11 + 1] = ((/* implicit */_Bool) ((((long long int) (-(((/* implicit */int) var_1))))) + ((-(345323712652319161LL)))));
    }
    /* LoopSeq 1 */
    for (int i_12 = 0; i_12 < 24; i_12 += 3) 
    {
        arr_47 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) var_1)) * (((/* implicit */int) arr_38 [i_12] [i_12])))), (((int) 314317237))))) ? (min((((/* implicit */long long int) (unsigned char)5)), (6324054765652819275LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-5850)))));
        var_28 -= max((((arr_38 [i_12] [i_12]) ? (arr_46 [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (short)17623))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned char)86))) ? (((((/* implicit */int) (short)-25447)) * (((/* implicit */int) var_1)))) : (((/* implicit */int) ((signed char) arr_38 [i_12] [i_12])))))));
        arr_48 [i_12] |= 8690968002328106834LL;
    }
}
