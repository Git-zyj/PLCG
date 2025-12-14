/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82450
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [(short)14] [(short)15] [3ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4673704420400517225LL)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)24343)), (999896563)))) ? ((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) var_7)))))) : (((unsigned int) ((((/* implicit */_Bool) (unsigned char)181)) ? (9223372036854775807LL) : (((/* implicit */long long int) 125601734U)))))));
                var_18 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 336724683598954197ULL))))));
            }
        } 
    } 
    var_19 = max((((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) var_9)))))), (((long long int) ((long long int) (unsigned short)0))));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    arr_15 [i_2] [i_3] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)448))));
                    var_20 = ((/* implicit */unsigned long long int) ((long long int) (+(var_0))));
                }
            } 
        } 
    } 
    var_21 = (~(((int) var_7)));
    var_22 = var_7;
}
