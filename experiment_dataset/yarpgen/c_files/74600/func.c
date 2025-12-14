/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74600
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
    var_11 = var_9;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((unsigned long long int) arr_0 [i_1 + 3] [i_1 + 2])) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))))))));
                    arr_8 [i_0] = ((/* implicit */signed char) max((arr_7 [i_2] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [i_0] [i_0])) : (18124207103029232925ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)7)) >> (((arr_6 [i_2] [i_2] [i_2]) + (9159725310062532956LL)))))) : (((((/* implicit */_Bool) (signed char)-54)) ? (var_10) : (((/* implicit */unsigned int) -1116383150)))))))));
                    var_13 = ((/* implicit */unsigned long long int) (unsigned short)65523);
                    arr_9 [i_0] [i_1] [i_1] = ((int) (unsigned short)65528);
                    var_14 = (~(((/* implicit */int) (unsigned short)7)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) max((var_15), (max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))))))));
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 22; i_3 += 2) 
    {
        for (unsigned int i_4 = 3; i_4 < 20; i_4 += 2) 
        {
            {
                var_16 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)7)) & (((int) ((((/* implicit */_Bool) arr_10 [i_3] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)62)))))));
                arr_16 [i_3] = ((/* implicit */unsigned int) (signed char)101);
            }
        } 
    } 
}
