/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60243
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
    var_13 = ((/* implicit */long long int) var_9);
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_5), ((~(var_9)))))) ? (4194303LL) : (((long long int) ((4494803534348288LL) ^ (-9151463525730090334LL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    var_15 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */unsigned long long int) min((3145201267945886277LL), (4494803534348289LL)))) | (((((/* implicit */_Bool) -4494803534348290LL)) ? (((/* implicit */unsigned long long int) var_7)) : (var_5)))))));
                    var_16 = ((/* implicit */int) var_12);
                    arr_6 [i_0] [i_1] = ((int) arr_0 [i_0 - 1]);
                }
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_6))), (arr_1 [i_0 - 1])))) ? (max((-5436222323939933948LL), (((/* implicit */long long int) (signed char)-49)))) : (((arr_1 [7LL]) ^ (((long long int) -4494803534348284LL))))));
            }
        } 
    } 
    var_18 = var_0;
}
