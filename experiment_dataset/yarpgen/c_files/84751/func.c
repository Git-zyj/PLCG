/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84751
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_11);
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((arr_2 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_11))), (((/* implicit */unsigned int) (+(var_0))))))) || (((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0] [i_1 - 2])))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_0);
    var_17 -= ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_1)))) ? (min((5523612129730716554ULL), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            {
                var_18 = arr_10 [i_3] [i_3] [i_2 - 1];
                arr_11 [i_2 - 1] [i_3] = ((/* implicit */signed char) ((arr_8 [i_2 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(_Bool)1] [i_3] [(_Bool)1]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                {
                    var_19 |= arr_6 [i_5];
                    var_20 &= ((/* implicit */unsigned int) var_2);
                    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_4] [i_5] [i_6])) ? (((/* implicit */int) arr_10 [i_6] [i_5] [i_4])) : (((/* implicit */int) arr_10 [i_4] [i_5] [i_4])))) >> ((((-(var_9))) - (48190014U)))));
                }
            } 
        } 
    } 
}
