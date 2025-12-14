/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74691
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (short)27536))));
    var_20 |= ((/* implicit */signed char) min((((/* implicit */int) var_14)), ((+(((/* implicit */int) (short)-27537))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-361)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)-90)))))));
        var_22 ^= (unsigned short)61240;
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (((~(((/* implicit */int) arr_7 [i_0] [i_1 - 1] [(unsigned short)4])))) << (((/* implicit */int) (unsigned short)5)))))));
                        var_24 = ((/* implicit */signed char) max((var_24), ((signed char)62)));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)78))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)22409)) != (((((/* implicit */int) arr_12 [i_4] [i_4])) + (((/* implicit */int) arr_12 [i_4] [i_4])))))))));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (max((((/* implicit */unsigned long long int) arr_11 [i_4])), (min((((((/* implicit */_Bool) -1715619461)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_4]))) : (8787503087616ULL))), (((/* implicit */unsigned long long int) (signed char)7))))))));
    }
    for (short i_5 = 1; i_5 < 9; i_5 += 2) 
    {
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (+(min((((/* implicit */int) arr_7 [i_5] [i_5 + 1] [i_5])), (max((2147483647), (((/* implicit */int) (unsigned short)62671)))))))))));
        var_28 = min((arr_12 [i_5 - 1] [i_5]), (arr_12 [i_5 + 1] [i_5]));
    }
}
