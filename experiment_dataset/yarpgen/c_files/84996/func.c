/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84996
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) ((-2068940293) <= (((/* implicit */int) var_5))))) : (((((/* implicit */int) arr_5 [i_1] [i_0] [(unsigned char)16])) * (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0]))));
                    arr_10 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (2165245677U)));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_2);
    var_21 = ((/* implicit */unsigned int) var_18);
    var_22 = ((/* implicit */unsigned int) (~(var_4)));
}
