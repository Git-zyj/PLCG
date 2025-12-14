/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59939
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (+(((((/* implicit */long long int) var_11)) % (-5407233757656555713LL))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_10);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                var_15 = (unsigned short)43418;
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    var_16 ^= ((/* implicit */short) (~(402653184U)));
                    var_17 -= ((/* implicit */unsigned short) ((((((/* implicit */long long int) -353595990)) / (3870089236841121656LL))) / (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 4) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (!(((/* implicit */_Bool) 402653184U))))))), (((/* implicit */int) var_3)))))));
        arr_16 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((var_11) * (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
    }
    var_19 = ((/* implicit */unsigned short) max(((+((+(((/* implicit */int) var_3)))))), (max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) var_2))))));
}
