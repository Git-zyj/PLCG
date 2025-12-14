/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99664
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
    var_16 = ((/* implicit */_Bool) (unsigned short)24);
    var_17 = ((/* implicit */int) var_7);
    var_18 &= ((/* implicit */unsigned char) (unsigned short)29153);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_0])))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) (((+((~(((/* implicit */int) var_2)))))) ^ (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) arr_12 [i_3] [i_3] [i_2 + 1]);
                arr_14 [i_2] [(short)5] [(short)5] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) var_10)), (arr_10 [i_2] [i_3]))), (((/* implicit */unsigned long long int) var_11))));
            }
        } 
    } 
}
