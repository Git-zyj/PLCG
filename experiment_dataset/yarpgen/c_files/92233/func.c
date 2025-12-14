/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92233
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_1])) ? (((9985974669930153817ULL) & (((/* implicit */unsigned long long int) -1598298580)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_2 + 1])))))));
                    var_19 = ((/* implicit */unsigned char) var_2);
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (_Bool)0))));
                }
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    arr_12 [i_0] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))))));
                    arr_13 [i_0] [i_0] [(unsigned char)3] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_3]);
                }
                arr_14 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (((-((+(arr_1 [i_0]))))) >> (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_4 = 1; i_4 < 24; i_4 += 2) 
    {
        var_21 -= ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_16 [i_4] [i_4 - 1]))))), (arr_16 [i_4] [i_4])));
        var_22 = ((/* implicit */unsigned char) (((!((_Bool)1))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)203)))))));
        var_23 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) 2529564688U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))))) : (((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)3))))))));
    }
    var_24 = ((/* implicit */int) ((-1732263341) < (((/* implicit */int) var_14))));
}
