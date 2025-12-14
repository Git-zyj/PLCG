/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65001
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
    var_16 = ((/* implicit */unsigned char) (~(((int) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)(-127 - 1))))) >= (min(((+(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) min(((short)29522), (((/* implicit */short) (signed char)(-127 - 1))))))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_18 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (332813867)))), (min((arr_3 [i_0 + 1] [i_0] [i_1]), (((/* implicit */unsigned int) var_11))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) (~(((((/* implicit */int) (short)-14625)) - (((int) arr_0 [i_2]))))));
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */int) min((((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0 - 2] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2]))))), (((/* implicit */unsigned int) ((1622220633) != (((/* implicit */int) arr_4 [i_0 - 2])))))));
                }
                var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) arr_7 [(signed char)4] [(short)0] [i_0 - 1])), ((short)-30327))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 19; i_3 += 2) 
    {
        for (signed char i_4 = 1; i_4 < 19; i_4 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((int) min((var_11), (((/* implicit */int) arr_6 [i_3] [2] [(signed char)9]))))))))));
                var_22 = var_13;
                arr_16 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_12 [i_3]);
            }
        } 
    } 
}
