/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/787
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
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), ((-(((/* implicit */int) ((((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned long long int) 1988603224))))) && (((/* implicit */_Bool) (short)-1)))))))));
                arr_6 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_4 [i_0] [(_Bool)1]) : (arr_4 [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_19 = ((/* implicit */long long int) arr_7 [i_2]);
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    {
                        var_20 = ((/* implicit */short) (-(((/* implicit */int) arr_11 [i_2] [i_3] [i_4] [i_5]))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((arr_8 [i_2]) + (arr_8 [i_2]))))));
                        arr_17 [i_3] [i_3] [i_3] [2LL] [i_2] = ((/* implicit */short) arr_4 [i_2] [i_3]);
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_9 [i_3]))));
                    }
                } 
            } 
        } 
    }
}
