/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73275
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
    var_12 *= ((((/* implicit */_Bool) var_5)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (777609378) : (((/* implicit */int) (unsigned char)3))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_13 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 18014398509481982LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_2 [i_0])))) * (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_14 = ((/* implicit */signed char) var_11);
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) 0U))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_3] [i_2])) ? (((/* implicit */int) arr_5 [i_2] [i_3])) : (((/* implicit */int) var_11))));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) (unsigned short)0);
    }
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) (+(18446744073709551615ULL)));
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37420))) * (arr_13 [i_4]))))), (max((arr_10 [i_4]), (((/* implicit */int) arr_7 [i_4]))))));
    }
    var_20 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) (unsigned short)65521)), (280925220896768ULL)))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7))), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (18446744073709551597ULL))))));
}
