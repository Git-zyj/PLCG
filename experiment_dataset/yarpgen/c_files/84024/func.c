/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84024
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1])) <= (((/* implicit */int) arr_0 [7LL]))))) >> (((/* implicit */int) ((((((/* implicit */long long int) arr_2 [i_0] [i_1])) / (-4928999032779286944LL))) <= (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
                arr_7 [i_0] = ((/* implicit */signed char) ((var_17) & (((/* implicit */int) var_0))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned char i_3 = 4; i_3 < 11; i_3 += 3) 
        {
            {
                arr_13 [i_3] [(unsigned char)1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_3])) <= (((/* implicit */int) (signed char)115))));
                arr_14 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_19)) >= (max((((/* implicit */long long int) arr_2 [i_2] [i_3])), (max((-6712877960349730899LL), (((/* implicit */long long int) arr_10 [(_Bool)1]))))))));
                arr_15 [i_2] = ((/* implicit */int) ((long long int) (~(((/* implicit */int) arr_5 [i_2] [i_3 + 1] [i_3 + 1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            {
                arr_22 [i_4] [i_4] [i_5] = (~(((/* implicit */int) arr_21 [i_4] [i_4] [i_4])));
                arr_23 [i_4] [14] [i_5] = ((/* implicit */long long int) max((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_15)))) >= (((4611686018427387888LL) - (((/* implicit */long long int) var_9)))))), ((!(((/* implicit */_Bool) ((signed char) var_5)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(((/* implicit */int) var_10))))), (((((/* implicit */long long int) var_17)) + (min((9223372036854775807LL), (1532419588097244114LL)))))));
    var_21 = ((/* implicit */_Bool) ((long long int) var_13));
}
