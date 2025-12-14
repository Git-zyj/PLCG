/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69941
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
    var_13 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_6)))));
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [(signed char)2] |= ((/* implicit */int) ((unsigned short) arr_7 [i_0]));
                    arr_9 [(signed char)12] [(_Bool)1] [(signed char)12] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) max((arr_4 [i_0]), (arr_4 [i_2])))), (min((-8745663417670680002LL), (((/* implicit */long long int) arr_4 [i_0]))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) arr_2 [i_0] [i_1] [i_2]));
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_1]))))) : (((((8745663417670680002LL) < (((/* implicit */long long int) 4294967295U)))) ? (((/* implicit */long long int) -280180382)) : (-8745663417670679996LL)))));
                }
            } 
        } 
    } 
}
