/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87255
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 7LL)) ? (2285629416U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                var_15 = var_3;
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_16 *= ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
                                var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)248)) != (((/* implicit */int) (unsigned short)65306)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15417)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_10))))))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) ^ (var_4)))));
                    arr_13 [i_0] [i_0] [i_0] [(unsigned char)6] = ((/* implicit */signed char) arr_12 [(signed char)12] [i_1 + 1] [i_1 + 3] [i_1 - 2] [i_2] [i_2 - 3]);
                }
            }
        } 
    } 
    var_19 = (!(((/* implicit */_Bool) var_0)));
}
