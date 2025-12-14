/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79227
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((int) -6242054571189575787LL)))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */signed char) 2147483647);
                    var_12 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
        var_13 -= ((/* implicit */_Bool) (unsigned short)51203);
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_3))));
    }
    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_4 = 3; i_4 < 8; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned char) (_Bool)1);
                    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_5] [i_3])))))));
                    var_18 = ((/* implicit */long long int) arr_7 [i_5]);
                    var_19 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) var_5)))));
                }
            } 
        } 
        var_20 = (short)252;
    }
    var_21 = ((/* implicit */short) (unsigned short)54357);
}
