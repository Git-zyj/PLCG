/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68020
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
    var_15 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), ((unsigned short)128))))))), (arr_1 [i_1 + 1] [i_1 + 1]));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (min((var_6), (((/* implicit */unsigned long long int) arr_2 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_9) <= (((/* implicit */int) (_Bool)1))))) + (((/* implicit */int) ((signed char) 32640))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_2]);
                            arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) ((var_9) / (((/* implicit */int) (unsigned short)57784))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_3]))) : (756953389U))), (((/* implicit */unsigned int) arr_8 [i_0]))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = arr_9 [i_0] [i_1 + 1] [i_0] [i_1];
                /* LoopNest 3 */
                for (unsigned short i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_5])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) arr_7 [i_0])))), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)31743))) - (var_7))) == (((/* implicit */unsigned int) var_10)))))));
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            {
                var_17 = ((/* implicit */short) arr_8 [i_8]);
                arr_27 [i_7] [i_7] [i_7] = 1152921504606846976LL;
            }
        } 
    } 
}
