/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63860
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
    var_18 = ((/* implicit */_Bool) var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 4; i_2 < 20; i_2 += 3) 
                {
                    arr_8 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) - (((((/* implicit */_Bool) arr_6 [i_2] [i_1 + 2] [i_1 + 2] [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)32045))))) : (min((arr_5 [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) (short)0))))))));
                    arr_9 [i_1] [i_0] [i_0] [i_1] |= ((/* implicit */unsigned long long int) (-(((-8248466869718375543LL) + (((/* implicit */long long int) arr_5 [i_2 - 2] [i_2] [i_2 + 2]))))));
                }
                arr_10 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)23985))));
                arr_11 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8088))) | (arr_2 [i_1 - 2] [i_0]))) : (((/* implicit */unsigned int) ((-1138512087) % (((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_1 + 2])))))));
            }
        } 
    } 
}
