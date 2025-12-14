/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76635
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) <= (arr_5 [i_1] [i_1]))))))) != ((~(((arr_2 [i_0] [i_1]) ? (arr_3 [i_1] [i_0] [i_1]) : (arr_3 [i_1] [i_1] [(unsigned char)16])))))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1] [i_0])) | (((/* implicit */int) arr_1 [i_0] [i_1]))))) >= (((arr_3 [i_0] [i_1] [i_1]) + (arr_3 [i_0] [i_1] [i_0])))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (+(3924891590U)));
}
