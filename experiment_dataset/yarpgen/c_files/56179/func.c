/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56179
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
    var_19 = ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-24))) > (min((((/* implicit */unsigned long long int) 262143U)), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 262143U))))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_10))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 2; i_3 < 11; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            {
                arr_15 [i_3] = ((max((((/* implicit */long long int) 262154U)), ((+(2868978162312665530LL))))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)0)))));
                var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-5920))))) && ((!(((/* implicit */_Bool) var_17)))))), ((!(((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_1))))))));
                /* LoopNest 2 */
                for (signed char i_5 = 4; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        {
                            arr_21 [i_3] [i_4] [(short)8] [i_4] [i_4] = ((/* implicit */unsigned int) ((((unsigned long long int) var_17)) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) << (((var_7) - (390674352))))))));
                            arr_22 [i_3] [(short)10] [i_6] [(short)8] &= ((/* implicit */signed char) max((((/* implicit */short) ((unsigned char) 2868978162312665523LL))), (((short) 262161U))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */long long int) var_4))));
}
