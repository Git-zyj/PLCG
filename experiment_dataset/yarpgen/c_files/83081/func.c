/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83081
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2 - 2] [i_3] = ((/* implicit */int) min((((((/* implicit */_Bool) var_4)) ? (((5814543895486175171LL) / (3955256652553688038LL))) : (((-5814543895486175171LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [6ULL] [i_0]))))))), (max((((-5814543895486175172LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))), (max((((/* implicit */long long int) var_2)), (5814543895486175170LL)))))));
                        var_11 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_6)) : (arr_0 [i_0 + 2])))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 3) 
        {
            for (long long int i_5 = 1; i_5 < 20; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    {
                        var_12 = (((_Bool)1) ? (max((((/* implicit */long long int) (unsigned char)255)), (((((/* implicit */_Bool) 1640820754U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21541))) : (885088687297326270LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)-115)))))));
                        var_13 = ((/* implicit */signed char) var_1);
                        arr_17 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_0 + 2] [i_0] [i_0])) != (arr_0 [i_0])));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_21 [12U] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) 5814543895486175188LL))));
        arr_22 [i_7] = ((/* implicit */short) arr_13 [(unsigned char)7] [i_7]);
        arr_23 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (short)-12037))) / (-4448252286980399614LL))) <= (((((/* implicit */_Bool) var_10)) ? (-7941988881484677339LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_7 [i_7] [i_7] [i_7] [i_7])))));
        var_14 = (-(((/* implicit */int) ((23922053) == (((/* implicit */int) (short)13653))))));
    }
    var_15 = ((/* implicit */short) ((((((/* implicit */long long int) var_7)) / (min((((/* implicit */long long int) var_1)), (var_4))))) | (((/* implicit */long long int) ((/* implicit */int) var_1)))));
}
