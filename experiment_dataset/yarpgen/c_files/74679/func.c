/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74679
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
    var_18 |= ((/* implicit */long long int) var_14);
    var_19 |= ((/* implicit */unsigned int) var_0);
    var_20 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */_Bool) 3425502508015455863ULL);
                var_22 *= ((/* implicit */_Bool) 4203585695U);
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (unsigned char)21))));
                                var_24 = ((/* implicit */_Bool) 624952629364917050LL);
                                var_25 = ((/* implicit */unsigned int) (unsigned short)60275);
                                var_26 += ((/* implicit */short) (unsigned short)5257);
                            }
                        } 
                    } 
                } 
                var_27 = ((/* implicit */long long int) 7281688098563823066ULL);
            }
        } 
    } 
}
