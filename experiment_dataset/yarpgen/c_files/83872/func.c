/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83872
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
    var_15 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) (_Bool)0);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) var_10);
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (-(min((arr_4 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])))))))));
                var_18 *= ((/* implicit */_Bool) ((unsigned char) (unsigned short)47450));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 23; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [(signed char)23])) : ((((-(((/* implicit */int) var_10)))) * (((/* implicit */int) arr_11 [i_2]))))));
                var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_21 *= ((((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2])) * (((/* implicit */int) arr_8 [i_2]))))) ? (arr_7 [i_2 + 1] [i_3 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)6955), (((/* implicit */unsigned short) (_Bool)1)))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_10);
}
