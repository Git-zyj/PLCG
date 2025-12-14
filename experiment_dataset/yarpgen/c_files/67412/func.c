/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67412
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1377141671)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((5ULL), (((/* implicit */unsigned long long int) var_2)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))) : (((((/* implicit */unsigned long long int) (((_Bool)1) ? (508566908) : (((/* implicit */int) (_Bool)1))))) % (((16819564902696632518ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned short) max(((~(var_9))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) != (((((/* implicit */int) var_8)) + (((/* implicit */int) var_1)))))))));
                    var_18 = ((/* implicit */_Bool) ((long long int) 14ULL));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 18; i_3 += 4) 
    {
        for (int i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            {
                arr_15 [i_4] = ((/* implicit */unsigned int) max(((!((_Bool)1))), (((3621080) >= (((/* implicit */int) (signed char)122))))));
                arr_16 [(_Bool)1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_15)), (5361184286466323444LL))))))) ? (max(((+(var_12))), (((/* implicit */unsigned long long int) var_13)))) : (((((var_16) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (var_12))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50415)))))));
            }
        } 
    } 
}
