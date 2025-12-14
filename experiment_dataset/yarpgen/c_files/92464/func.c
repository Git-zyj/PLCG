/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92464
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = (short)13559;
        arr_3 [i_0] = ((/* implicit */short) ((arr_1 [i_0 - 1]) ^ (arr_1 [i_0 - 2])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_16 |= ((/* implicit */short) ((((/* implicit */int) ((short) (short)-13560))) ^ (((((/* implicit */int) arr_4 [i_1])) & (((/* implicit */int) (short)-13549))))));
        var_17 = ((/* implicit */short) ((int) (short)-3367));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_18 ^= ((/* implicit */short) (-(((((/* implicit */int) (short)13559)) % (((/* implicit */int) (short)-16981))))));
            arr_10 [i_1] [i_1] [i_2] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3367))) : (arr_6 [i_1]))))));
            var_19 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) | (3724679832U)));
        }
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13549))) : (5602319455841132710LL)));
    }
    for (int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) arr_7 [i_3] [i_3] [i_3]);
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                {
                    arr_21 [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_5] [i_3] [i_4])))))));
                    arr_22 [i_5] [i_5] = ((/* implicit */signed char) max((arr_12 [i_3]), (((/* implicit */unsigned long long int) ((short) (+(3040719793U)))))));
                    var_22 = ((/* implicit */signed char) var_13);
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_2))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned short) 15799855745200042622ULL);
    var_25 -= var_3;
}
