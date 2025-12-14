/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59083
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [i_2] [i_1] [i_2] [i_3] [i_4 - 1] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_10 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1])) : (((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2] [i_3])) ? (var_8) : (((/* implicit */unsigned long long int) 434645333))))))));
                                var_18 = ((/* implicit */unsigned int) (-(((var_5) ? (min((((/* implicit */int) var_9)), (arr_5 [i_0]))) : (((/* implicit */int) arr_12 [i_2]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (unsigned int i_6 = 1; i_6 < 22; i_6 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) (unsigned char)3))))) % (-1982647092)));
                            arr_22 [(_Bool)0] [i_5] [i_1] [i_0] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_8 [i_6 + 1] [i_6 - 1] [i_1] [i_6 - 1])))), ((~(((/* implicit */int) arr_8 [i_6 + 1] [i_6] [i_1] [i_6 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_13);
}
