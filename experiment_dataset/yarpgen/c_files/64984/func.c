/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64984
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
    var_17 = ((/* implicit */unsigned char) ((((max((var_3), (((/* implicit */int) var_15)))) ^ (((int) 680891153)))) > (((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = (+((~(((/* implicit */int) (unsigned char)17)))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */int) arr_4 [i_0] [14])) + (((/* implicit */int) arr_7 [(unsigned char)9])))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [5] [3])) != (((/* implicit */int) var_11))))))))));
                    var_18 = ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) > (-212043101)))) >> (((((/* implicit */int) var_11)) - (140))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((arr_12 [i_3] [(unsigned char)22]) != (max((max((arr_12 [i_3] [i_3]), (arr_12 [i_3] [i_3]))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)238)) >= (var_2))))))));
                var_20 = ((/* implicit */unsigned char) arr_14 [16]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 3) 
        {
            {
                var_21 = min((max((var_2), (((/* implicit */int) arr_6 [i_5] [i_5] [8])))), (var_3));
                arr_22 [3] [2] [(unsigned char)7] = ((/* implicit */int) ((var_7) >= (((/* implicit */int) arr_4 [3] [3]))));
                var_22 = ((((min((arr_14 [(unsigned char)21]), (max((((/* implicit */int) (unsigned char)43)), (var_2))))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_1 [i_5])) ? (((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5] [(unsigned char)0]))))))) - (1548657187))));
            }
        } 
    } 
}
