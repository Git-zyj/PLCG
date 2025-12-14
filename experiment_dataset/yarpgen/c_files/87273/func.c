/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87273
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) 7060651034680775798ULL)) ? (0U) : (0U)))));
                var_15 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)124))))) < (((/* implicit */int) ((min((((/* implicit */int) var_6)), (1864395127))) < (min((((/* implicit */int) (unsigned char)95)), (-1630256058))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((4U) >> (((((/* implicit */int) arr_4 [i_2] [i_2])) - (187)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (0ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)21)))))));
                            var_17 = ((/* implicit */signed char) (_Bool)0);
                            var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */unsigned long long int) var_2)) : (18446744073709551604ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21)))))) ? ((~((+(((/* implicit */int) (unsigned char)95)))))) : (((/* implicit */int) var_1))));
                            var_19 &= ((/* implicit */short) min((((/* implicit */long long int) max((max((((/* implicit */signed char) arr_0 [i_4])), ((signed char)9))), (arr_5 [i_2 - 1] [i_3])))), (((2578122142870510745LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-53)))))));
                        }
                    } 
                } 
                arr_15 [i_2] [i_3] [i_3] = ((/* implicit */short) var_9);
            }
        } 
    } 
}
