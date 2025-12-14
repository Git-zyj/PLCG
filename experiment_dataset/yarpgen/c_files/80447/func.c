/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80447
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
    var_11 += ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [(signed char)14] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_6 [4U] [i_1] [i_1] [i_1]))) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_6 [i_0] [i_2] [i_2] [i_1])) : (2147483647))) : (((/* implicit */int) arr_7 [i_1] [i_0] [i_2 + 1]))))) ? (min((min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_2])), (arr_0 [(unsigned short)6]))), (((/* implicit */unsigned long long int) arr_1 [i_2] [i_1])))) : (min((((/* implicit */unsigned long long int) min((3114174998U), (((/* implicit */unsigned int) (unsigned char)111))))), (min((268434432ULL), (((/* implicit */unsigned long long int) (unsigned short)56004))))))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 1] [i_2 + 1]);
                }
            } 
        } 
    } 
    var_12 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) var_2))) : ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))));
}
