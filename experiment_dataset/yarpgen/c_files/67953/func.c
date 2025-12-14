/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67953
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
    var_20 += ((/* implicit */unsigned char) ((short) (~(((((/* implicit */_Bool) var_12)) ? (var_17) : (var_16))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) 65520);
        var_21 = ((/* implicit */short) (+(((arr_0 [i_0 + 1] [i_0 - 1]) % (arr_0 [i_0] [i_0 - 3])))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) var_11)))), (((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0 - 1]))) : (((arr_0 [i_0 - 2] [i_0 + 1]) - (((/* implicit */unsigned long long int) var_2))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        {
                            arr_13 [i_3] [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((-1) + (2147483647))) << (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) - (15176)))))) && (((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((arr_7 [i_0] [i_0] [i_0 - 3] [i_0 - 3]) != (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                            var_23 = ((/* implicit */short) min((((unsigned short) arr_9 [i_3] [i_2] [i_0 - 1] [i_0])), (((/* implicit */unsigned short) max((((/* implicit */short) arr_9 [i_3] [i_2] [i_0 + 1] [i_0])), (var_3))))));
                        }
                    } 
                } 
            } 
            arr_14 [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_1])) - ((+(((/* implicit */int) arr_2 [i_0]))))));
        }
    }
}
