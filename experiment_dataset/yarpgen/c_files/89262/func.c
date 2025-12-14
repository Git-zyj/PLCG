/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89262
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
    var_13 &= ((/* implicit */long long int) (unsigned char)255);
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (unsigned char)0))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (signed char)-106))));
        var_16 = ((/* implicit */_Bool) 4058005736U);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)255);
                        var_17 = ((/* implicit */long long int) (unsigned char)122);
                        var_18 += (_Bool)1;
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 3; i_4 < 19; i_4 += 1) 
    {
        var_19 += ((/* implicit */long long int) (unsigned short)47814);
        var_20 = ((/* implicit */_Bool) 1816561595U);
    }
    var_21 &= ((/* implicit */long long int) 285376167U);
}
