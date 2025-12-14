/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70023
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned int) arr_2 [i_0]);
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (-(((arr_1 [i_0] [i_0 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))));
                arr_7 [i_1] [i_0] = ((/* implicit */_Bool) min(((+((-(arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned int) var_6))));
                var_11 = ((/* implicit */signed char) var_8);
                arr_8 [i_0] [(short)20] [i_0] = arr_2 [i_0];
            }
        } 
    } 
    var_12 = ((/* implicit */int) var_6);
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_13 = arr_1 [12ULL] [12ULL];
        arr_12 [i_2] = ((/* implicit */int) ((_Bool) ((18446744073709551615ULL) * (7610957244086977256ULL))));
        arr_13 [i_2] = ((/* implicit */unsigned int) (_Bool)0);
        var_14 = ((/* implicit */unsigned int) arr_11 [i_2] [i_2]);
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_8);
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_4 [i_3])))));
        var_15 = ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned long long int) arr_5 [i_3])) * (arr_0 [i_3] [i_3]))));
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 11))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (arr_20 [i_4 - 1])))) > (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [8U]))) * (((unsigned int) var_4))))));
        arr_21 [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_4 - 1]))));
        arr_22 [(short)11] [i_4] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((780532758U) >> (((((/* implicit */int) arr_3 [(signed char)10])) - (90)))))) ? (((/* implicit */int) arr_4 [i_4 - 1])) : (((/* implicit */int) max(((short)32337), (((/* implicit */short) (_Bool)1))))))));
    }
    var_18 = ((/* implicit */_Bool) ((unsigned long long int) var_6));
}
