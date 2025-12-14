/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80706
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
    var_11 -= ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (((+(((/* implicit */int) arr_0 [i_0] [12LL])))) | (((int) var_3)))))));
        var_13 &= ((/* implicit */_Bool) ((long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) -3221443846172475544LL)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (signed char)14))))), (3221443846172475561LL))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (!(((/* implicit */_Bool) 15807643993413786165ULL)))))))), (var_8)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
        {
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */int) ((long long int) arr_5 [i_1]));
            arr_10 [i_1] = ((/* implicit */_Bool) ((int) arr_6 [i_1] [i_2] [i_2]));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
        {
            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) 2147483627)) || (((/* implicit */_Bool) arr_5 [i_1])))))));
            arr_14 [i_1] [i_3] = ((/* implicit */short) (_Bool)1);
            var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -1385121311544506807LL)) & (6721479205051230917ULL)));
            arr_15 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)14))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    {
                        arr_24 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_22 [i_6] [i_5] [i_5] [i_1] [i_1] [i_1])), (min((((/* implicit */long long int) min((-2147483627), (var_0)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10760))) : (0LL)))))));
                        var_16 = ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_7 = 3; i_7 < 20; i_7 += 4) 
            {
                arr_28 [i_1] [i_4] [10LL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_1] [i_1] [13])))))));
                arr_29 [i_1] [i_1] [i_1] [i_7] = min((min((arr_18 [i_1] [i_4] [i_7]), (((/* implicit */unsigned long long int) (unsigned char)254)))), (((arr_4 [i_1] [8LL]) << (((((/* implicit */int) var_1)) - (109))))));
            }
        }
    }
    var_17 &= ((/* implicit */short) var_5);
}
