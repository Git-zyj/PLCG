/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72830
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))), (((/* implicit */int) min((var_10), (((/* implicit */short) var_3)))))))) > (((((/* implicit */_Bool) 6346587653366762192ULL)) ? (var_1) : (((((/* implicit */_Bool) 48U)) ? (69U) : (4294967245U))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)16809)) ? (((/* implicit */unsigned long long int) 56U)) : (5395545900420325947ULL))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned char)9])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) - (2301)))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (3610464894U) : (var_11)))))) ? (((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))) - ((+(var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-24950)))));
                arr_5 [(unsigned char)1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (short)1023))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_6 [i_2]))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5541))) : (var_2))))))));
        var_15 |= arr_6 [i_2];
        arr_8 [i_2 - 1] = ((/* implicit */int) (-(((((((/* implicit */int) (short)-20110)) > (((/* implicit */int) (short)-26756)))) ? (((var_2) << (((((/* implicit */int) arr_7 [i_2])) - (4802))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-73)))))));
    }
}
