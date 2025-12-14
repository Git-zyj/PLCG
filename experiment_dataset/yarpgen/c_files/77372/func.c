/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77372
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */short) ((2681373364U) - (((/* implicit */unsigned int) -1600452387))));
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((signed char) var_8));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_18 = ((/* implicit */_Bool) (+(-1600452387)));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 3]))))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 3])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 4])))) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]))));
                    arr_7 [(unsigned char)0] [(unsigned char)9] [i_0] [i_2] = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0])) ? (var_14) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((long long int) min((arr_3 [i_2] [i_2]), (arr_3 [i_1 + 2] [i_1 + 2])))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0] [i_2])), (arr_3 [i_0] [i_1])))), (arr_0 [i_0]))));
                }
                arr_8 [i_0] [i_0] = var_15;
            }
        } 
    } 
    var_20 |= ((/* implicit */signed char) ((min((((/* implicit */unsigned int) 1600452386)), (((((/* implicit */_Bool) var_2)) ? (2566572944U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((short) var_6)))));
        var_22 ^= var_15;
    }
    for (long long int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
    {
        arr_13 [i_4] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)238)) > (((/* implicit */int) arr_9 [i_4]))))), (arr_5 [i_4] [i_4] [i_4] [i_4])));
        arr_14 [8ULL] &= min((((((/* implicit */int) arr_9 [(short)10])) << (((((/* implicit */int) arr_9 [(unsigned short)4])) - (62856))))), (((/* implicit */int) min((arr_9 [(unsigned char)12]), (arr_9 [(unsigned char)2])))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned int) arr_12 [i_4]);
        var_23 += ((/* implicit */unsigned short) min((((/* implicit */short) ((_Bool) arr_6 [6LL] [i_4] [i_4] [(unsigned short)8]))), (var_5)));
    }
}
