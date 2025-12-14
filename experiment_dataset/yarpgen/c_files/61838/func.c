/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61838
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)18)), (1037615321U)))) ? (max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 3]))) : (((unsigned long long int) arr_0 [i_0 - 3]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) var_0)), (arr_4 [i_0 - 3]))))))));
                    arr_7 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_2 + 2] [i_2 - 1] [i_0 - 3]))) ? ((-(arr_2 [i_2 + 1] [i_2 + 1] [i_0 - 3]))) : (((/* implicit */int) var_10))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((signed char) ((unsigned char) 5391820022788376501ULL))))));
                        var_19 = ((/* implicit */signed char) 5782931977096638360LL);
                    }
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) var_5));
    }
    var_20 -= ((/* implicit */unsigned long long int) var_12);
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
}
