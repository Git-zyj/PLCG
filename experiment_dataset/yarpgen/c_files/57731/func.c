/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57731
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_12 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -206944894)) && (min(((_Bool)1), ((_Bool)1))))))) : (-6021441160807093119LL)));
        var_13 *= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (206944894))));
        arr_2 [i_0] = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) (unsigned short)32376)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))) - (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) max((((8877200271775587383ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32381))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-8)))))));
                    arr_7 [i_1] [i_0] [i_0] [i_2] &= ((/* implicit */short) (unsigned short)33156);
                }
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned long long int) ((signed char) var_2));
}
