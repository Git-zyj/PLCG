/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84858
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
    var_15 = (short)-1;
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_0 - 1] [(short)7] = ((/* implicit */_Bool) ((signed char) max((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (105241613U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)9656)) ? (((/* implicit */int) (signed char)7)) : (790893380)))))));
                var_16 = ((/* implicit */unsigned int) arr_3 [i_0 - 1]);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_17 = ((/* implicit */unsigned long long int) min((2147483647), (((/* implicit */int) (_Bool)1))));
                    var_18 = ((/* implicit */_Bool) arr_6 [(short)0]);
                    var_19 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0])) && (((/* implicit */_Bool) arr_3 [i_0]))))), (4189725699U))), (min((max((((/* implicit */unsigned int) (short)-9651)), (arr_6 [i_2]))), (((/* implicit */unsigned int) -1))))));
                }
                for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    arr_13 [i_0] [i_3] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_3]), (((/* implicit */short) (signed char)1))))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) min((arr_10 [i_3]), (arr_10 [i_1]))))))) || (((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) 3522560902U))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)28831)) : (((/* implicit */int) arr_3 [i_1])))))))));
                    arr_14 [i_3] = ((/* implicit */short) arr_4 [i_0]);
                    var_20 = ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) arr_10 [(unsigned short)8])) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) arr_1 [(unsigned short)2])))), (((/* implicit */int) (_Bool)1))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)60936)) << (((772406394U) - (772406393U)))));
    var_22 = ((/* implicit */int) min(((unsigned short)43089), (((/* implicit */unsigned short) max((var_0), (min((((/* implicit */short) var_3)), ((short)9656))))))));
}
