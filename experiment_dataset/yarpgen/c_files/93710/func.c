/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93710
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = min((((/* implicit */int) (signed char)46)), (max((((/* implicit */int) (unsigned char)255)), (min((2147483618), (((/* implicit */int) (unsigned char)190)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) max((var_19), (2147483613)));
                                var_20 = ((/* implicit */_Bool) 617769596);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) max((min(((unsigned char)190), ((unsigned char)102))), ((unsigned char)174)));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((3801737125U), (((/* implicit */unsigned int) min(((signed char)-64), (((/* implicit */signed char) (_Bool)1))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 8; i_5 += 2) 
                    {
                        for (long long int i_6 = 4; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)95)), (min((((/* implicit */unsigned short) (unsigned char)178)), ((unsigned short)19565)))));
                                var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)7)), (max((((/* implicit */unsigned long long int) 2062939973)), (4373814017188476682ULL)))));
                                arr_20 [i_6] [i_5 - 2] [(_Bool)1] [i_1] [4U] = ((/* implicit */int) (unsigned short)65522);
                                var_25 = ((/* implicit */signed char) (unsigned char)247);
                                var_26 = ((/* implicit */unsigned long long int) -1250358329);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */_Bool) (signed char)100);
}
