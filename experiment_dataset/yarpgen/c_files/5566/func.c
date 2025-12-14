/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5566
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
    var_16 = min((((/* implicit */int) var_11)), (var_13));
    var_17 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        var_18 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) 70734896)), (min((((((/* implicit */_Bool) (unsigned short)65525)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)22))))), (((/* implicit */unsigned int) ((unsigned short) var_13)))))));
                        arr_12 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) (!(((/* implicit */_Bool) 2193448536U)))))))) - (((/* implicit */int) ((0U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3 + 3] [i_3]))))))));
                    }
                    arr_13 [i_0] [i_0] = (signed char)-45;
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) 1918120388);
                        var_20 -= ((/* implicit */_Bool) var_7);
                        var_21 = ((/* implicit */signed char) var_5);
                    }
                }
            } 
        } 
    } 
}
