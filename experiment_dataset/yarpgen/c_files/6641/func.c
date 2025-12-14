/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6641
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((var_13), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) (signed char)103)))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8))))), (((unsigned int) (short)-5247))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_14 -= ((/* implicit */signed char) min((min((((/* implicit */unsigned int) min((var_2), (((/* implicit */short) arr_10 [i_0] [i_0] [i_2 + 1] [i_3] [i_4]))))), ((+(arr_6 [i_2] [i_2]))))), (((/* implicit */unsigned int) (_Bool)1))));
                                var_15 = ((/* implicit */unsigned short) arr_0 [i_0] [i_2 + 1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (unsigned int i_7 = 4; i_7 < 23; i_7 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) var_4);
                    var_18 = ((unsigned short) arr_14 [5LL] [i_6] [i_7 - 2]);
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        for (signed char i_9 = 2; i_9 < 23; i_9 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6]);
                                var_20 *= ((/* implicit */signed char) ((min((2405147588U), (((/* implicit */unsigned int) arr_21 [i_8] [i_6] [i_6] [8U])))) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_21 [(_Bool)1] [i_5] [6LL] [i_8]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
