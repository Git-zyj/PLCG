/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6869
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_20 = max((min((max((((/* implicit */unsigned int) var_2)), (1422888449U))), (((/* implicit */unsigned int) min((arr_0 [i_0]), (var_16)))))), (max((max((((/* implicit */unsigned int) var_2)), (3736275193U))), (min((2192299185U), (((/* implicit */unsigned int) var_9)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (-1200556496)))), (min((((/* implicit */unsigned long long int) 770714518U)), (var_12))))), (min((max((var_5), (var_4))), (max((arr_7 [(_Bool)1] [(_Bool)1] [17] [i_1]), (((/* implicit */unsigned long long int) var_19))))))));
                                var_22 &= ((/* implicit */int) max((min((max((arr_7 [i_2] [i_1] [i_2] [i_3]), (((/* implicit */unsigned long long int) arr_3 [i_3] [i_2] [i_0])))), (max((((/* implicit */unsigned long long int) (short)13580)), (var_4))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) arr_2 [i_3] [i_4])), (var_0))), (((/* implicit */unsigned int) min((var_6), (((/* implicit */int) var_7))))))))));
                            }
                        } 
                    } 
                    var_23 = min((((/* implicit */unsigned long long int) max((min((536866816U), (0U))), (((/* implicit */unsigned int) max((arr_8 [i_0] [i_1] [i_1] [i_2]), (((/* implicit */signed char) var_2)))))))), (max((min((((/* implicit */unsigned long long int) 3243191127U)), (var_12))), (((/* implicit */unsigned long long int) max((347401U), (((/* implicit */unsigned int) (short)-13574))))))));
                    var_24 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1 + 4])), (arr_0 [i_1])))), (max((12425219760684400260ULL), (((/* implicit */unsigned long long int) 3957404092U)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((0), (0)))), (3243191127U))))));
                }
            } 
        } 
    } 
    var_25 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((-1772881052), (((/* implicit */int) (short)13590))))), (max((var_14), (((/* implicit */unsigned int) var_7))))))), (min((max((((/* implicit */unsigned long long int) var_8)), (var_5))), (max((((/* implicit */unsigned long long int) (signed char)122)), (9048115364841756146ULL)))))));
}
