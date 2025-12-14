/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86771
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    var_10 = ((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 862632370U)) ? (((862632370U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (min((((/* implicit */unsigned int) -443438464)), (3432334925U))))))));
                    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [16U])) ? ((-(var_2))) : (((((/* implicit */_Bool) ((3432334925U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114))) : (min((((/* implicit */unsigned int) (signed char)-1)), (var_8))))))))));
                }
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (((~(128558497100256674ULL))) >= (((/* implicit */unsigned long long int) 1685607667U)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 4) 
            {
                {
                    var_13 = ((int) (!(((/* implicit */_Bool) (signed char)-8))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) -1637802265675711933LL)) & (arr_4 [i_4])))))) ? (((/* implicit */unsigned int) (~(arr_6 [i_5] [i_5 + 1] [i_5 + 1])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_5 + 3]))) : (((unsigned int) 862632370U))))));
                }
            } 
        } 
    } 
}
