/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77453
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
    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (unsigned char)147))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44943))) : (((unsigned int) 2653831835U))))) ? (((unsigned long long int) ((18446744073709551611ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) : (((/* implicit */unsigned long long int) 0))));
    var_20 = max((max((5276155134001583628LL), (((/* implicit */long long int) (unsigned short)65535)))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_12))))));
    var_21 ^= ((/* implicit */unsigned char) (!(((_Bool) ((((/* implicit */_Bool) (short)-5637)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))) : (6329673122660282932LL))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_22 = (unsigned short)65535;
        var_23 = ((/* implicit */unsigned long long int) ((((_Bool) arr_1 [(unsigned char)6])) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) min((arr_1 [2U]), (arr_1 [i_0]))))));
    }
    for (unsigned char i_1 = 2; i_1 < 7; i_1 += 2) 
    {
        var_24 *= ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) var_0)))));
        var_25 = ((/* implicit */_Bool) ((short) var_6));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (unsigned short)3861))));
                            var_27 = ((/* implicit */unsigned long long int) min((arr_5 [7ULL] [i_1 - 2] [i_1]), (2380916756153496944LL)));
                        }
                        var_28 = var_0;
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) arr_5 [i_1] [i_2] [i_1]))));
                        var_30 |= ((/* implicit */unsigned long long int) var_16);
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-32372)) + (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 + 1] [i_1])))))));
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */short) ((((/* implicit */long long int) ((778377108) + (((/* implicit */int) (unsigned char)39))))) != (max((((/* implicit */long long int) arr_9 [i_1 - 1] [i_1] [i_1 - 1] [i_1])), (min((((/* implicit */long long int) (short)-28002)), (16777215LL)))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        var_33 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_14 [i_6])) ? (arr_14 [i_6]) : (arr_14 [i_6]))));
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -837272323212566075LL)))))) : (((((/* implicit */_Bool) arr_14 [i_6])) ? (-2078146871517297204LL) : (((/* implicit */long long int) arr_14 [i_6]))))));
    }
}
