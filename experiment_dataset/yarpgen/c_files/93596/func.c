/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93596
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3 - 1] [i_0])))), (((/* implicit */int) ((((-1) == (2097151))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3340322136U)) ? (3340322136U) : (3340322136U)))))))));
                            arr_15 [i_3] [i_2] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3]);
                        }
                    } 
                } 
                var_17 = ((/* implicit */signed char) 92448312U);
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((var_12) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        for (short i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            {
                var_19 |= ((/* implicit */unsigned short) ((954645160U) >> (((/* implicit */int) (_Bool)0))));
                /* LoopNest 3 */
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) max(((~(((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (-8581563737602871279LL) : (((/* implicit */long long int) 60)))))), (((/* implicit */long long int) (~(((3340322135U) & (4294967295U))))))));
                                var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_5])) ? (((/* implicit */int) (short)11633)) : (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4]))))) : (min((arr_18 [i_4]), (((/* implicit */unsigned long long int) (_Bool)0)))))), (((/* implicit */unsigned long long int) ((max((((/* implicit */int) (_Bool)1)), (arr_21 [i_5] [i_8]))) | (((((/* implicit */int) (unsigned char)0)) >> (((/* implicit */int) (unsigned char)0)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)0)), (2147483647)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned char) (_Bool)1)))))) : (max((3340322136U), (((/* implicit */unsigned int) var_5))))))), (((((/* implicit */_Bool) min((-1049704891), (((/* implicit */int) (_Bool)0))))) ? (14466420012202409894ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)23601)) || (((/* implicit */_Bool) var_9))))))))));
}
