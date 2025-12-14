/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55060
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
    var_15 = ((/* implicit */_Bool) max((((short) ((((/* implicit */int) (unsigned short)14892)) / (((/* implicit */int) var_3))))), (((/* implicit */short) var_13))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) / ((+(((/* implicit */int) (short)32762))))));
    var_17 = ((/* implicit */short) var_13);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (((~(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (unsigned short)2047)))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1 - 1] [i_0] [i_3 + 1] [(short)17] = ((/* implicit */signed char) ((unsigned long long int) (_Bool)1));
                            var_19 = ((arr_5 [i_0 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2046))));
                        }
                    } 
                } 
            } 
        }
        arr_15 [i_0 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)2047))));
        arr_16 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (unsigned short)55048))));
    }
}
