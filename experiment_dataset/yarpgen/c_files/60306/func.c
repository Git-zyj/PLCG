/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60306
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
    var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)2048)) ? (((((/* implicit */_Bool) 8644406793884973716LL)) ? (((/* implicit */int) (unsigned short)240)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!((_Bool)0))))))));
    var_17 = ((/* implicit */unsigned short) (short)-1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15922))) : (6505784738816476416LL)))) ? ((-(((/* implicit */int) (signed char)-35)))) : ((~(((/* implicit */int) (unsigned short)49614))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = (!((!(((/* implicit */_Bool) (unsigned short)15943)))));
                                arr_13 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)15922))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-53))) : (-6505784738816476416LL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 58720256ULL)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (unsigned short)55114))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35))) : (58720256ULL)))));
                                arr_14 [i_0] [i_1] [i_3] [i_4] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)49592)))))))));
                                arr_15 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((~(-1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15922))) : (4294967295U)))) ? (((/* implicit */long long int) -2023252966)) : (6505784738816476416LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_16 [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(18446744073650831360ULL)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = var_5;
}
