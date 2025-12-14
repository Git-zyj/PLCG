/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88993
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65534)) ^ (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (_Bool)1))))))));
    var_19 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (min((((/* implicit */long long int) 136522366)), (var_16))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) var_0)))))))))));
                    var_21 = max(((_Bool)0), ((_Bool)1));
                    var_22 += var_0;
                    var_23 &= ((/* implicit */long long int) min((arr_3 [i_0] [i_0] [i_0 - 1]), ((_Bool)1)));
                    arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) var_13);
                }
            } 
        } 
    } 
}
