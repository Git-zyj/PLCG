/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75045
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
    var_14 = ((/* implicit */int) var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)21504)) ? (((((/* implicit */_Bool) -1178148308)) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */unsigned long long int) var_4)) & (158831471375272958ULL))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)44028)) | (((/* implicit */int) (unsigned short)44031)))), (((/* implicit */int) var_6)))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21516))) ^ (max((268435452U), (((/* implicit */unsigned int) var_6))))))));
                                arr_16 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4398046511103ULL)) ? (-637377520) : (((((/* implicit */int) var_10)) & (((/* implicit */int) (signed char)104))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) ((int) (-(var_11))));
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_4), (((int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))))) : (max((((/* implicit */int) (unsigned char)233)), ((-2147483647 - 1))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) 3818988993282815806ULL);
}
