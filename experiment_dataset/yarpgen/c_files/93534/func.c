/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93534
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
    var_10 = var_3;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32763)))))) : (min((((/* implicit */unsigned int) var_9)), (487313520U)))))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) max((max((((/* implicit */int) arr_12 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 1])), ((-2147483647 - 1)))), (((/* implicit */int) ((unsigned short) (-2147483647 - 1))))));
                                var_12 = ((/* implicit */_Bool) (~(max((arr_8 [i_4] [i_3] [i_1] [i_0]), (((/* implicit */int) ((2147483647) >= (((/* implicit */int) (short)-1810)))))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */long long int) 2930163280U);
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */unsigned int) arr_8 [14U] [i_1] [i_0] [i_0])) : (((unsigned int) var_6))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((-2147483647), (((/* implicit */int) (signed char)57)))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (unsigned int i_6 = 1; i_6 < 17; i_6 += 1) 
        {
            {
                arr_19 [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_12 [i_6] [i_6 - 1] [i_6] [i_5] [4U] [i_6 + 1])))) >= (max((((/* implicit */long long int) max((var_7), (var_7)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12973))) | ((-9223372036854775807LL - 1LL))))))));
                var_16 = ((/* implicit */signed char) ((short) (((_Bool)0) ? (((/* implicit */int) arr_7 [i_5] [i_5])) : (((/* implicit */int) (short)(-32767 - 1))))));
                arr_20 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((short) ((unsigned short) (signed char)57)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((signed char) min((((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_3)))));
}
