/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99382
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((short) 15040800902577051565ULL));
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(((((unsigned long long int) 4633479035466503193ULL)) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) (signed char)-14))))))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_11);
    var_15 = ((/* implicit */unsigned char) ((((_Bool) ((int) var_6))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((((unsigned char) 17179104312349486549ULL)), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1767324731158012890LL)) && (((/* implicit */_Bool) var_4))))))))));
}
