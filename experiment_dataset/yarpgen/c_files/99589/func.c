/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99589
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
    var_11 = max((var_2), (var_10));
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((639833501) > (-639833502)))) | (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)31)) < (((/* implicit */int) (unsigned short)4592))));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((8579832942045579201ULL) ^ (3039227646896036759ULL))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned char i_3 = 4; i_3 < 19; i_3 += 4) 
            {
                {
                    var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)4095)) < (((/* implicit */int) (unsigned short)0)))) ? (((/* implicit */int) (unsigned short)65515)) : (((/* implicit */int) (unsigned short)17))))) || (((/* implicit */_Bool) max((3039227646896036753ULL), (((/* implicit */unsigned long long int) (unsigned char)133)))))));
                    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)54186))));
                    var_16 = ((/* implicit */unsigned short) ((3039227646896036759ULL) | (((/* implicit */unsigned long long int) 8894790528012017962LL))));
                }
            } 
        } 
        var_17 &= ((/* implicit */long long int) ((274877906942ULL) + (14039079301870714299ULL)));
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
        {
            for (unsigned char i_5 = 3; i_5 < 21; i_5 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (var_0)));
                    arr_17 [i_1] [i_1] [i_5 + 1] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) arr_10 [i_4 - 1] [i_4 + 1] [i_5 + 1])))));
                    var_19 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_10 [i_4 + 2] [i_4 + 2] [i_4])))) == (4011505076582196253LL)));
                }
            } 
        } 
    }
}
