/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65204
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        arr_12 [i_3] [i_3] [i_0] = ((/* implicit */short) arr_4 [i_0]);
                        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_3])) ? (((int) ((((/* implicit */_Bool) 1647028900)) ? (((/* implicit */int) var_8)) : (arr_7 [13U] [i_1] [13U] [13U])))) : (((/* implicit */int) arr_8 [i_0] [i_0]))));
                        var_12 = arr_2 [i_0];
                    }
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_0] [i_1] [i_2]))), (((((/* implicit */int) (unsigned short)43081)) / (((/* implicit */int) arr_10 [i_0] [i_1] [i_0]))))))) > (((((/* implicit */_Bool) min((1647028899), (1647028900)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2] [i_1])) << (((1647028927) - (1647028918)))))) : (((((/* implicit */_Bool) 1647028909)) ? (3240808513U) : (((/* implicit */unsigned int) -1647028927))))))));
                }
            } 
        } 
    } 
    var_13 = 1647028937;
    var_14 = ((/* implicit */unsigned long long int) 1647028949);
}
