/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98585
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
    var_11 ^= ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) arr_1 [i_1] [i_1]);
                var_13 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) + (((/* implicit */int) ((unsigned char) max((arr_1 [i_0] [5U]), (((/* implicit */unsigned short) arr_2 [i_0 - 1] [i_0]))))))));
                var_14 = ((/* implicit */long long int) ((unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) ^ (-5288159825676918984LL))) < (((/* implicit */long long int) ((((/* implicit */_Bool) 2047898612)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_3))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((_Bool) var_0));
                                var_16 = ((/* implicit */unsigned int) 11769194548877257905ULL);
                                var_17 = ((/* implicit */int) ((unsigned int) (_Bool)1));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0 + 1])))), (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1])))))));
                                var_19 = ((/* implicit */unsigned short) ((_Bool) var_4));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((var_4), (var_4)));
}
