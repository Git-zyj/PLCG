/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71025
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
    var_10 = var_4;
    var_11 = ((/* implicit */unsigned char) 1169342692U);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 *= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)234))));
                    arr_10 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_2 + 2] [i_0 - 3] [i_2 + 3])) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((var_5), (var_6)))) : (((/* implicit */int) arr_3 [i_2] [8]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 18; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (short)1023)) <= (((/* implicit */int) (unsigned char)234))));
                    var_14 *= ((/* implicit */signed char) var_0);
                    arr_19 [i_3] = ((/* implicit */signed char) min(((-(((/* implicit */int) var_8)))), ((~(((/* implicit */int) arr_2 [i_3 + 1] [i_3 + 1]))))));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */int) 1924362670U);
}
