/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75629
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */int) ((_Bool) (unsigned char)255));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_13 = min((((/* implicit */int) (unsigned short)32615)), (-1338637368));
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((max((((/* implicit */int) (unsigned short)32596)), (-221792807))), (-1338637368))))));
                            arr_11 [i_0] [i_1] [i_2 + 1] [7U] [i_2 + 1] [i_3] = ((/* implicit */short) ((long long int) (-(221792806))));
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_9 [i_2]))));
                            var_16 = ((/* implicit */short) max((var_12), (((/* implicit */long long int) max((var_3), (max((((/* implicit */int) var_7)), (var_1))))))));
                        }
                    } 
                } 
                var_17 = arr_0 [i_0];
            }
        } 
    } 
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_6))));
}
