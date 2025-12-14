/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80741
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_1]);
                var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) && (((/* implicit */_Bool) (unsigned char)248))));
                var_18 = ((/* implicit */unsigned int) (unsigned char)227);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_19 &= ((/* implicit */signed char) ((unsigned char) ((arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2 + 2]) | (arr_7 [i_0] [i_0] [i_2 + 1] [i_2 - 1]))));
                            var_20 = ((/* implicit */unsigned long long int) (unsigned char)230);
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~((+(((/* implicit */int) min((var_11), (var_11)))))))))));
                            /* LoopSeq 1 */
                            for (int i_4 = 2; i_4 < 18; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_2] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2 - 1]);
                                var_22 = var_9;
                            }
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max(((~(((/* implicit */int) arr_8 [i_0] [5LL] [i_1])))), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) * (((/* implicit */int) var_9))))))));
            }
        } 
    } 
    var_23 = var_9;
}
