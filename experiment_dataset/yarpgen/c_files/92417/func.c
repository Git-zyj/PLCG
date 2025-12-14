/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92417
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
    var_19 -= ((max((var_17), (((/* implicit */int) var_16)))) - (((/* implicit */int) (_Bool)1)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 = ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) arr_3 [i_0] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_1] [i_0])), ((unsigned short)55439))))))) : (((int) arr_0 [4ULL])));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) var_17);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (int i_3 = 4; i_3 < 11; i_3 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((5318283291957066320LL) == (arr_2 [i_3 - 2]))) ? (((/* implicit */int) arr_7 [i_3 - 1])) : (((/* implicit */int) min((arr_3 [i_2] [i_3]), (((/* implicit */unsigned char) (_Bool)1)))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) var_4);
                            arr_18 [i_2] [i_3] [i_4] [5ULL] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)15)) > (((/* implicit */int) (unsigned short)60855))))) | (((int) var_9))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65512)) >> (((((/* implicit */int) arr_9 [1] [(_Bool)1] [1])) - (33488)))))), (min((3957463279953370036ULL), (((/* implicit */unsigned long long int) 289562128))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((int) ((_Bool) arr_15 [i_3] [i_3] [i_3] [i_3 - 3])));
                            var_24 = ((/* implicit */_Bool) ((max((((((/* implicit */int) arr_7 [i_2])) * (((/* implicit */int) arr_3 [i_7] [i_7])))), (((((/* implicit */int) var_7)) & (arr_20 [i_6]))))) >> (((max((4301474665437099078ULL), (((/* implicit */unsigned long long int) arr_2 [i_3 + 2])))) - (4301474665437099068ULL)))));
                            arr_25 [i_2] [(_Bool)0] [(_Bool)1] [i_2] = ((unsigned short) ((arr_17 [i_6] [i_3 - 1] [i_2]) % (((/* implicit */unsigned long long int) max((arr_10 [11] [11] [i_7]), (((/* implicit */long long int) var_11)))))));
                            arr_26 [(_Bool)1] = ((/* implicit */unsigned long long int) ((unsigned short) max((var_17), (((/* implicit */int) ((arr_1 [2ULL]) || (((/* implicit */_Bool) arr_8 [(unsigned short)13]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
