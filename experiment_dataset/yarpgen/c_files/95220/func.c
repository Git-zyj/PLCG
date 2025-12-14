/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95220
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((short) ((arr_2 [i_0]) | (((/* implicit */int) arr_4 [i_1] [i_2 + 1]))))))));
                    var_18 = arr_8 [i_0] [i_1] [(signed char)6] [i_0];
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) (((((~(((/* implicit */int) var_7)))) == (((((/* implicit */int) var_3)) | (((/* implicit */int) var_10)))))) ? (((/* implicit */int) var_9)) : (min(((~(var_15))), (((/* implicit */int) (short)30503))))));
    var_20 = ((/* implicit */short) max((var_20), (var_6)));
    /* LoopSeq 1 */
    for (int i_3 = 2; i_3 < 14; i_3 += 4) 
    {
        var_21 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) (short)25510)) ? (((/* implicit */int) arr_12 [14U])) : (((/* implicit */int) (short)(-32767 - 1))))) + (((/* implicit */int) arr_10 [i_3])))), (((/* implicit */int) min(((short)(-32767 - 1)), ((short)(-32767 - 1)))))));
        var_22 = (-(((/* implicit */int) ((short) (-(arr_9 [i_3]))))));
        var_23 = ((/* implicit */signed char) (~(((arr_9 [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) <= (((/* implicit */int) (short)-32755))))))))));
    }
}
