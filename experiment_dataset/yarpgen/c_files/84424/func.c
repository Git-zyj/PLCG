/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84424
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)45)) : (1396894096)))), (max((var_15), (-1LL)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))));
    var_19 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (var_15))) * (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)43)) >> (((7438986049736205714LL) - (7438986049736205705LL)))))), (max((((((/* implicit */_Bool) 4166833081726864317LL)) ? (6581846459102791100LL) : (arr_1 [i_4] [i_1]))), (max((34359738367LL), (((/* implicit */long long int) var_2))))))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [(short)9])))))) : (max((8863796085893247049ULL), (((/* implicit */unsigned long long int) var_8))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 140713604U)) ? (-2106256570) : (((/* implicit */int) (unsigned short)1760)))))) : (((/* implicit */int) min((min((((/* implicit */short) arr_2 [i_0])), (arr_9 [(unsigned char)0] [i_1] [(unsigned char)0] [(unsigned char)0] [i_4] [i_4]))), (((/* implicit */short) var_1)))))));
                                arr_12 [i_0] [i_1] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_2 - 2] [i_3] [i_4] [i_4]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) ((unsigned short) (!(((arr_7 [i_1] [i_2 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
                }
            } 
        } 
    } 
}
