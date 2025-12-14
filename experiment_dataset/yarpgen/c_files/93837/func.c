/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93837
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) ((_Bool) var_10))) * (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) var_8)))))))))));
    var_20 = var_5;
    var_21 = ((((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) -2429529963067807885LL)))) || (((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_4)))))) && (((((/* implicit */_Bool) ((signed char) 2498856193113255980LL))) || (((/* implicit */_Bool) (signed char)-107)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_22 = ((/* implicit */int) ((((arr_6 [i_1 - 2] [i_1 - 2] [i_0] [i_2]) && (((/* implicit */_Bool) 11018883768811232530ULL)))) || (((-2429529963067807885LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                    var_23 = ((/* implicit */_Bool) ((unsigned int) ((var_0) / (((/* implicit */int) var_8)))));
                }
                arr_7 [i_1] = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 5519292559204878531LL)))) >= (((long long int) ((_Bool) 4455637575733363459LL))));
            }
        } 
    } 
}
