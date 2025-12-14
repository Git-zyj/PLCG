/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69507
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
    var_13 = ((/* implicit */_Bool) ((short) ((((((/* implicit */int) ((short) var_0))) + (2147483647))) >> (((((int) var_2)) + (11040))))));
    var_14 = ((/* implicit */short) -5051365923357080477LL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [i_2] = arr_4 [i_0] [i_0];
                    var_15 = ((/* implicit */short) -5051365923357080477LL);
                    var_16 -= (+(max((((((arr_4 [i_0] [i_2]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */long long int) max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned short) arr_8 [i_0] [i_0]))))))));
                    var_17 *= ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) arr_2 [i_2] [i_1])))) ? (2168571099336390017LL) : (min((-7111925972227762420LL), (((/* implicit */long long int) (short)19405)))))), (((/* implicit */long long int) 3616426576U))));
                    var_18 += max((((int) arr_1 [i_0])), ((~(((/* implicit */int) arr_1 [i_0])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) var_12);
}
