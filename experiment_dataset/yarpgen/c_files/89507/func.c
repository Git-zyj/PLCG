/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89507
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
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        {
                            arr_10 [(short)8] [(short)8] [i_3] [i_3] [(short)8] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 2111122540U)) || (((/* implicit */_Bool) var_1))))) > (((/* implicit */int) arr_8 [i_3] [i_3 + 1] [(_Bool)1] [2U] [(unsigned char)0] [2U]))));
                            arr_11 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) var_5);
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */short) (((-(((/* implicit */int) arr_4 [i_0])))) <= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_0]))))));
                arr_13 [(signed char)6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 2183844760U))) ? (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) 2111122540U)) ? (-916501179) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((((+(((/* implicit */int) (short)-29363)))) & (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) != (((/* implicit */int) arr_7 [i_0])))))))));
                arr_14 [(unsigned char)4] [(unsigned char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)153)) ? (2111122538U) : (((/* implicit */unsigned int) 916501196))));
            }
        } 
    } 
}
