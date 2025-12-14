/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58670
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) var_12);
        arr_3 [i_0] = ((/* implicit */unsigned short) var_14);
        var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) var_11)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_17 += ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) var_8)))));
        var_18 = var_9;
    }
    /* LoopSeq 1 */
    for (signed char i_2 = 3; i_2 < 9; i_2 += 3) 
    {
        var_19 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 3; i_3 < 9; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */short) ((signed char) (unsigned short)0));
                        arr_20 [i_3] [i_4] [i_2] = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), ((~(((/* implicit */int) var_7)))))));
                        var_20 -= (~(((/* implicit */int) (unsigned short)0)));
                        var_21 -= (signed char)(-127 - 1);
                    }
                } 
            } 
        } 
        arr_21 [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (((~(((/* implicit */int) var_0)))) != ((~(((/* implicit */int) var_12)))))))));
        var_22 = ((/* implicit */unsigned int) var_10);
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (((unsigned char) (~(((/* implicit */int) (unsigned short)14))))))))));
    }
}
