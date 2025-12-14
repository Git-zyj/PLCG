/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80678
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
    var_12 = ((/* implicit */unsigned int) var_6);
    var_13 = ((/* implicit */short) (-(((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                {
                    var_14 += ((/* implicit */unsigned short) (+(6344480798467175021ULL)));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */int) max(((_Bool)0), (var_3)))) : (((/* implicit */int) arr_1 [i_1])))) ^ (((/* implicit */int) min((arr_1 [i_0]), ((!(((/* implicit */_Bool) arr_4 [(signed char)17]))))))))))));
                }
            } 
        } 
    } 
}
