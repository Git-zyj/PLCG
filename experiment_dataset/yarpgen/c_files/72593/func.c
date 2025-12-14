/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72593
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
    var_17 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 6; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) max((2170276576U), (((/* implicit */unsigned int) (unsigned short)65523))));
                var_18 ^= (-(min((var_16), (((/* implicit */unsigned long long int) (unsigned short)12)))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_3)))) ? (max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [(short)8])) & (((/* implicit */int) (unsigned short)36643))))), (var_13))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_5 [(_Bool)0])) : (((/* implicit */int) ((_Bool) var_3))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            {
                var_20 *= ((/* implicit */short) arr_10 [i_3]);
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (var_16)));
            }
        } 
    } 
}
