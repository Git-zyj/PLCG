/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70077
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
    var_11 = ((/* implicit */int) (~((+((~(var_5)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_12 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) 1411228644)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (arr_0 [i_4 + 1])))))));
                                var_14 = ((((/* implicit */_Bool) (+(1411228656)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_0])) ? (((/* implicit */int) var_8)) : (1411228634))))))) : (((/* implicit */int) var_2)));
                                arr_10 [i_0] [(unsigned char)13] [i_2] [i_1] [i_0] [i_2] [(unsigned char)13] = ((/* implicit */int) 8888349634862268179ULL);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)64510)) / (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) (((+(min((var_10), (((/* implicit */long long int) var_3)))))) / ((~(((((/* implicit */_Bool) var_0)) ? (-2533903428939773027LL) : (((/* implicit */long long int) var_9))))))));
}
