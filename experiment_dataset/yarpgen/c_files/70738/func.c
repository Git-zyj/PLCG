/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70738
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_6 [i_0] [i_1] [i_1]) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (unsigned char)255))))));
                    var_20 &= ((/* implicit */int) ((((((/* implicit */_Bool) -759134841)) ? (1149332645671325347LL) : (((/* implicit */long long int) var_12)))) > (((/* implicit */long long int) ((((/* implicit */int) (signed char)-74)) + (((/* implicit */int) (unsigned char)10)))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_1] [i_2 - 1])) ? (arr_6 [i_0] [i_1 + 1] [i_2 - 4]) : (arr_6 [i_0] [i_2 + 1] [i_2])));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_13))));
    }
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) (short)-17683)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (-4192358933462214508LL)))))))));
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((_Bool) (signed char)78)))))) ? (((long long int) var_7)) : (min((var_18), (((/* implicit */long long int) var_14))))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 4; i_3 < 11; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            {
                arr_13 [i_3] = ((/* implicit */signed char) 2U);
                var_25 = ((/* implicit */int) var_4);
            }
        } 
    } 
}
