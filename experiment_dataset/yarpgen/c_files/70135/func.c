/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70135
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) arr_3 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5]);
                var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_1 [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_7 [i_2] [i_2] = (-(((((/* implicit */int) arr_1 [i_2] [i_2])) << (((/* implicit */int) var_6)))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    {
                        arr_15 [i_2] = var_5;
                        arr_16 [i_2] [i_3] [i_4] [i_4] [i_2] = (!(arr_3 [i_4] [i_2] [i_2]));
                    }
                } 
            } 
        } 
    }
    var_14 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
    var_15 = ((/* implicit */_Bool) ((var_6) ? ((((~(((/* implicit */int) var_1)))) ^ (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) var_2))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) / (((/* implicit */int) ((unsigned char) min((((/* implicit */short) var_9)), (var_11)))))));
}
