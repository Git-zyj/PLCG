/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91360
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
    var_12 = ((/* implicit */long long int) (signed char)12);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_13 = 1125899906842623LL;
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) 330562281U))));
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        var_15 *= ((/* implicit */unsigned short) var_11);
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) var_0);
        var_16 -= var_4;
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) 330562266U);
                                var_18 = ((/* implicit */_Bool) -4336754045098878577LL);
                                var_19 = ((/* implicit */unsigned int) var_0);
                                arr_15 [i_1] [i_1] [i_2] [i_2] [i_3] [i_1] [8U] = ((/* implicit */unsigned long long int) var_0);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) var_9);
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (signed char)(-127 - 1)))));
                    var_22 = var_9;
                }
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_23 = 8921898646538745102LL;
        arr_20 [i_6] = ((/* implicit */_Bool) 3964405016U);
    }
}
