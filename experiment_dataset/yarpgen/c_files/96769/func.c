/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96769
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
    var_13 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((signed char) 10664737592085360741ULL))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)0))))), (max((((/* implicit */long long int) (unsigned short)65531)), (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_14 -= ((/* implicit */unsigned long long int) (_Bool)0);
                    var_15 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)12088)))))));
                }
            } 
        } 
        var_16 += ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 2]))))), ((-(((/* implicit */int) arr_5 [i_0 + 1]))))));
    }
    var_17 = ((/* implicit */unsigned char) ((unsigned short) max((((((/* implicit */_Bool) var_5)) ? (1963881U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2532))))), (max((33423360U), (3970999380U))))));
}
