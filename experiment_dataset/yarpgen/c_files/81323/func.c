/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81323
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
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 7; i_0 += 3) /* same iter space */
    {
        var_18 = ((unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (3255554774U)))), ((-(((/* implicit */int) (unsigned char)184))))));
        arr_4 [i_0] = var_15;
        var_19 = ((/* implicit */signed char) ((_Bool) max(((-(((/* implicit */int) (unsigned char)72)))), (((/* implicit */int) (unsigned char)162)))));
        var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)184)) ? (-1008145489791696719LL) : (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))), (((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23687)))))));
        var_21 = ((/* implicit */unsigned int) (signed char)-64);
    }
    for (short i_1 = 1; i_1 < 7; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((_Bool) (~(((((/* implicit */int) (signed char)100)) & (((/* implicit */int) var_0)))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 3) 
            {
                {
                    arr_13 [i_1] = ((/* implicit */unsigned int) ((unsigned char) max(((-(((/* implicit */int) (unsigned char)72)))), (((/* implicit */int) ((unsigned char) (unsigned char)186))))));
                    var_23 = ((/* implicit */int) ((unsigned long long int) max((6222450924238994225LL), (((/* implicit */long long int) max(((short)3873), (((/* implicit */short) (unsigned char)191))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */int) max((max((((/* implicit */long long int) (unsigned char)185)), (8205049918321739917LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)155)) + (((/* implicit */int) (_Bool)1)))))));
        arr_14 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)67)) >> (((((/* implicit */int) (unsigned char)221)) - (219)))))) ? (max((((/* implicit */unsigned long long int) -1551224722)), (((((/* implicit */_Bool) var_14)) ? (6393700565833410360ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63704))))))) : (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) (unsigned char)70))))));
    }
}
