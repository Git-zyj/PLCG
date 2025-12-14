/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8575
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? ((-(arr_7 [i_0] [i_1] [i_1] [(short)2]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)14550))))))) <= (((/* implicit */unsigned int) (-(1349855484))))))));
                    var_15 = ((/* implicit */unsigned int) var_10);
                    arr_8 [i_0] [i_0] [i_2] |= (~(((/* implicit */int) (!((!(((/* implicit */_Bool) 4869163992410928202ULL))))))));
                    arr_9 [i_1] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_13)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_12);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_6)))))) : ((+(1594007162U)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_18 = ((/* implicit */short) (-(((/* implicit */int) var_10))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            arr_14 [i_3] = ((/* implicit */short) ((long long int) (((_Bool)1) ? (var_3) : (arr_11 [i_3] [i_4]))));
            arr_15 [(unsigned short)7] [i_3] = ((/* implicit */short) ((int) arr_11 [i_4] [6U]));
            var_19 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [13U] [i_4]))));
            arr_16 [(short)13] [i_3] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)244);
        }
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8)))))));
    }
}
