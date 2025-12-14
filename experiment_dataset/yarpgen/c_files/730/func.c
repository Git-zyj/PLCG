/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/730
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
    var_18 += ((/* implicit */short) (unsigned char)30);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max(((unsigned char)100), (((/* implicit */unsigned char) (_Bool)1))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 4) /* same iter space */
                    {
                        var_20 -= ((unsigned char) (-(((/* implicit */int) (_Bool)1))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((int) (~(-8832401498039573587LL)))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 2; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 10; i_5 += 2) 
                        {
                            var_22 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_14)))))));
                            arr_13 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */long long int) var_16);
                        }
                        var_24 = ((/* implicit */long long int) min((var_24), ((+(var_0)))));
                    }
                    for (long long int i_6 = 2; i_6 < 10; i_6 += 4) /* same iter space */
                    {
                        arr_16 [i_0] [1LL] [i_2] [i_6 - 1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_14)))))) & (min((var_0), (((/* implicit */long long int) (short)9689))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max(((short)-9671), (((/* implicit */short) (_Bool)1)))))));
                        var_25 = ((/* implicit */short) ((-3457091805532250875LL) | (-3457091805532250882LL)));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_17))));
    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) min((var_16), (var_13))))));
    var_28 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) var_0)) / ((~(var_15)))))));
}
