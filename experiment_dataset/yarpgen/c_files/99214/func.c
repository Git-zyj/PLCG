/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99214
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) 7963040113403295663LL);
                var_19 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))) < (17005127518602405820ULL)))) - (1)))))), (3363705471751467273LL)));
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) (_Bool)0))))), (17005127518602405820ULL))) % (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (2447693686U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))))), (((/* implicit */unsigned int) (_Bool)0)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)41)) % (((/* implicit */int) arr_1 [i_0] [i_0]))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((2073451448) != (((/* implicit */int) (unsigned char)8))))) > (((((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 1])) % (((/* implicit */int) (unsigned short)22317))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 += ((/* implicit */unsigned long long int) ((324295221U) << (((((/* implicit */int) (signed char)-30)) + (30)))));
    var_23 = ((((/* implicit */int) (unsigned short)18323)) * (((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) ((16315644639018204622ULL) == (((/* implicit */unsigned long long int) 381460717220789602LL))))))));
}
