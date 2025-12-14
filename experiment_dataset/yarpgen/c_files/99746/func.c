/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99746
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_2 [14LL] [14LL] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) ((arr_0 [i_0]) != (arr_0 [i_0])))), (-1570649633))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) min((9134381695762209783ULL), (((/* implicit */unsigned long long int) (short)-25898))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_1])) < (((/* implicit */int) arr_5 [i_0] [3ULL]))));
            arr_7 [i_0] [9] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (short)-25898))));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */signed char) arr_5 [i_2] [i_2]);
        arr_12 [19] = ((/* implicit */unsigned int) (((~(((long long int) var_3)))) & (((((/* implicit */_Bool) arr_1 [i_2])) ? (var_7) : ((+(var_3)))))));
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (((~(((/* implicit */int) (short)25908)))) > (((/* implicit */int) (signed char)87)))))));
    }
    var_12 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), (var_9))), (((max((var_9), (var_10))) / (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)50134)) / (((/* implicit */int) (short)-25875)))))))));
}
