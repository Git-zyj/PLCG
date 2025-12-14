/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67960
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
    var_20 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) -187596214))))) ? (max((((/* implicit */unsigned long long int) 4637717092715109946LL)), (535524123561416871ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-14)) / (1688970699)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */int) ((unsigned long long int) (+(((((/* implicit */_Bool) -1688970700)) ? (0LL) : (4637717092715109952LL))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) -189521350)), (max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0]))) : (4637717092715109946LL))))))));
                            var_23 &= ((/* implicit */unsigned char) 1688970701);
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((int) 1688970699);
    var_25 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) < (var_14))) ? (var_14) : (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        arr_12 [i_4] = ((/* implicit */unsigned char) max((((min((var_12), (((/* implicit */int) (unsigned char)52)))) - (((/* implicit */int) ((signed char) arr_0 [i_4] [i_4]))))), ((+(-1534821511)))));
        arr_13 [i_4] |= ((/* implicit */int) arr_9 [2LL] [2LL]);
    }
}
