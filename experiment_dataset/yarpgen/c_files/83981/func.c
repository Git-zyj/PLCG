/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83981
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = var_0;
                    var_13 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))), (((/* implicit */int) min((arr_5 [i_2] [i_1] [(unsigned short)0]), (arr_5 [i_2] [i_1] [(signed char)14]))))));
                    var_14 = ((/* implicit */short) (!(arr_1 [i_1])));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((min((2464302507516138744ULL), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) (unsigned short)64146)))))));
                    var_15 = ((/* implicit */unsigned int) min((((/* implicit */int) (short)17152)), (928776718)));
                }
            } 
        } 
    } 
    var_16 = (-(((((/* implicit */_Bool) -928776707)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)68)) >> (((((/* implicit */int) (signed char)-108)) + (131)))))) : (var_4))));
    var_17 = ((/* implicit */_Bool) var_9);
    var_18 = ((/* implicit */_Bool) var_4);
}
