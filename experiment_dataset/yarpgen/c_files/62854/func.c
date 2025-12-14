/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62854
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
    var_20 = ((/* implicit */unsigned short) (signed char)40);
    var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((unsigned int) ((short) var_12)))) : (var_16)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_4 = 2; i_4 < 16; i_4 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((long long int) (signed char)40));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] [i_0] [i_3] = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) max((var_14), (var_12)))) | (((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned long long int) var_12)))))));
                            }
                            var_24 = ((/* implicit */long long int) ((signed char) ((unsigned int) 1565255890)));
                            var_25 = ((/* implicit */unsigned int) ((_Bool) ((long long int) ((var_12) > (((/* implicit */unsigned int) -1565255890))))));
                            var_26 *= ((/* implicit */_Bool) var_0);
                            arr_13 [i_0] [i_3] [(signed char)0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((unsigned short) 2338743416U)), (((/* implicit */unsigned short) ((signed char) var_4))))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) max((((((/* implicit */unsigned long long int) var_14)) > (var_17))), (var_7))))));
            }
        } 
    } 
}
