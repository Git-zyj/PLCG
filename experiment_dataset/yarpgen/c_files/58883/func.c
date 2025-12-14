/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58883
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) min((arr_1 [i_0]), (var_5)));
        arr_3 [i_0] [i_0] = var_11;
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_20 = var_11;
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (int i_3 = 3; i_3 < 20; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_13 [i_1] [i_1] [i_3] [i_1] = ((((/* implicit */int) ((((/* implicit */long long int) ((3493863701U) % (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) == ((-(7570145631934170625LL)))))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) < (max((arr_0 [i_2] [i_1]), (var_3)))))));
                        arr_14 [i_1] [i_2] [i_3] [(_Bool)1] &= ((/* implicit */unsigned int) var_1);
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_3))));
}
