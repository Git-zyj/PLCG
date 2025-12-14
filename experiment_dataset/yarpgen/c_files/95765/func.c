/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95765
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
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_13 -= ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned short)4088))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_14 = ((/* implicit */_Bool) var_9);
                    var_15 = ((/* implicit */short) ((int) 14241843132252222278ULL));
                }
                arr_8 [i_0] |= ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (12310829712043352838ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(2320853395639076217ULL)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65024)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (_Bool)0)))))));
                var_16 = max((((/* implicit */long long int) max(((unsigned short)7967), ((unsigned short)56455)))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)56455))))) ? (-1LL) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)61447))))))));
                var_17 = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) var_11)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (-((-(0U)))));
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)26725))));
}
