/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63298
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
    var_16 = ((/* implicit */_Bool) min((var_16), (var_8)));
    var_17 = var_7;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((var_18), (((min((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_0 [i_2 - 1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((-2522122628843031950LL), (((/* implicit */long long int) var_4))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_2 - 1] [i_2]))) & (-2359697344413869550LL))) : (((1041540023043568034LL) / (var_9))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) (_Bool)0)), ((((_Bool)1) ? (9223372036854775800LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ^ ((~((~(-1556103956137908584LL)))))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((arr_8 [i_0] [(_Bool)0] [i_0]) ? ((~(((/* implicit */int) arr_2 [i_0] [i_2 - 1] [i_3 - 3])))) : (((/* implicit */int) var_4)))))));
                        arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((6349258623653037216LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_13)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [10LL] [10LL] [10LL]))) / (-2922023294930088674LL))) : (((arr_2 [i_1] [i_2] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (464534405787665826LL)))))));
                    }
                    arr_11 [i_0] [i_1] [i_2] = 904093985467764269LL;
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_8);
}
