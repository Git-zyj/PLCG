/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71440
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((short) 1420954672U)))));
        arr_3 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (var_3)))) | (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_10) : (((/* implicit */int) arr_1 [i_0]))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(((((min((((/* implicit */long long int) 1420954668U)), (arr_2 [i_1]))) + (9223372036854775807LL))) << (((/* implicit */int) ((_Bool) 2874012629U))))))))));
        var_19 -= ((/* implicit */unsigned long long int) (+(var_5)));
    }
    for (signed char i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        var_20 ^= ((/* implicit */_Bool) arr_6 [i_2]);
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11)))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)127)), (arr_7 [i_2 + 2] [i_3])))) << ((((-(((/* implicit */int) arr_9 [12ULL] [i_2])))) - (23))))))));
                    var_23 *= ((/* implicit */_Bool) ((var_7) ? (((unsigned long long int) var_4)) : (((((/* implicit */_Bool) arr_0 [(unsigned short)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((unsigned long long int) (unsigned short)27545))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 15; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            {
                arr_21 [i_5] = ((/* implicit */int) (+(((17788853463540518167ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18924)))))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5189571386915956607LL)) ? (2479737326U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
            }
        } 
    } 
}
