/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67774
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
    var_19 = ((/* implicit */long long int) var_10);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_20 *= ((/* implicit */short) (~(3953452534274791539LL)));
                        arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3 + 2] [i_1] [i_2 + 2])) ? (((/* implicit */int) arr_4 [i_3 + 2] [i_1] [i_2 + 2])) : (((/* implicit */int) (short)566))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_2 [i_0] [i_0]))));
        var_22 *= ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
        arr_11 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_0] [i_0])) ? (((unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [(unsigned char)6] [i_0])))));
        arr_12 [i_0] [i_0] = ((/* implicit */long long int) (+(((((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-574)))) + (2147483647))) << (((((/* implicit */int) arr_0 [i_0])) - (146)))))));
    }
    var_23 *= ((short) var_3);
    var_24 = ((/* implicit */unsigned char) var_6);
}
