/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80632
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_20 -= ((/* implicit */unsigned long long int) var_17);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        arr_8 [i_3] [i_2] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((int) ((int) (~(((/* implicit */int) (unsigned short)56117))))));
                        var_21 = ((/* implicit */unsigned short) ((long long int) ((((((/* implicit */int) arr_4 [i_3] [i_1] [i_2])) >> (((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3] [i_3 - 1])))));
                        arr_9 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) max(((short)-17523), (((/* implicit */short) (!(arr_5 [i_0] [i_3 + 2]))))));
                    }
                    for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        arr_12 [i_0] [i_1] [(unsigned short)6] [i_0] [i_2] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) min(((unsigned short)56120), ((unsigned short)56117)))))));
                        arr_13 [i_4] [i_2] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_19))))));
}
