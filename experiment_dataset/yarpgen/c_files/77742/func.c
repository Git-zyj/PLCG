/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77742
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
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)6264)) ? (((/* implicit */int) (unsigned short)15298)) : (((/* implicit */int) (signed char)96)))) : (((/* implicit */int) (unsigned short)10))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)45558))))) - (var_16))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (5184284233778937506ULL)))) ? (((/* implicit */int) (unsigned short)16714)) : (((/* implicit */int) min((var_14), ((unsigned short)49941)))))))));
                var_18 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) arr_4 [i_0 - 2] [i_0])) & (((((/* implicit */_Bool) 3958154510871894605LL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 + 1] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                for (signed char i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    {
                        var_19 = ((/* implicit */short) max((((/* implicit */int) (unsigned short)16138)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [i_5])), (arr_10 [i_2] [i_3])))) ? (((/* implicit */int) ((arr_4 [i_3] [i_5 + 1]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51640)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5] [i_3] [i_2])) && (((/* implicit */_Bool) arr_8 [i_2] [i_2] [(unsigned short)10])))))))));
                        var_20 = ((/* implicit */short) arr_6 [i_5]);
                    }
                } 
            } 
        } 
        arr_15 [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) min(((unsigned short)38714), (var_10)))) >= (((/* implicit */int) var_0)))));
        var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) arr_8 [i_2] [i_2] [(short)8])) ? (((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (arr_7 [i_2] [i_2]))) : (((/* implicit */long long int) (~(((((/* implicit */int) arr_0 [i_2])) + (((/* implicit */int) arr_1 [i_2] [i_2])))))))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [6LL]))) : (((((/* implicit */_Bool) var_10)) ? (var_16) : (32767LL)))))) ? (max((7961439480930088745LL), (((/* implicit */long long int) arr_0 [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)16383)) && (((/* implicit */_Bool) -22LL))))))));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        var_23 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 6619229195279155095ULL)))))));
        var_24 = var_12;
        arr_18 [i_6] [i_6] = ((/* implicit */unsigned short) ((unsigned long long int) arr_2 [i_6]));
    }
    var_25 = ((/* implicit */unsigned long long int) var_13);
    var_26 = ((/* implicit */signed char) var_10);
    var_27 = ((/* implicit */unsigned short) 4755365460546435402LL);
}
