/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97704
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 + 2] [i_2] [0LL] |= ((long long int) ((long long int) ((((/* implicit */_Bool) -8460576953207716573LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1237622462U))));
                    arr_9 [i_2] [i_1 - 1] [i_1 + 2] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1237622462U)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (arr_6 [i_0]))) : (min((arr_5 [i_0]), (((/* implicit */unsigned long long int) var_2)))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_0 [i_0]), (arr_3 [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
    var_10 = ((min((var_5), (((/* implicit */unsigned long long int) var_3)))) >= (((/* implicit */unsigned long long int) ((((1237622462U) == (1237622484U))) ? (((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((_Bool) var_1)))))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) arr_6 [i_3]);
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            arr_22 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_4)) % (((/* implicit */int) (signed char)92)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_5] [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_4])) ? (((/* implicit */unsigned long long int) -223967601)) : (arr_5 [i_3]))))))));
                            var_12 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? ((+(-1056410637))) : (((/* implicit */int) var_0))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_5);
}
