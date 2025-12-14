/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90743
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
    var_15 = ((/* implicit */_Bool) var_6);
    var_16 = ((/* implicit */unsigned long long int) (((-(var_9))) > (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 255)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) min((((/* implicit */int) (signed char)23)), (0)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) ((arr_0 [i_2 + 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 1] [i_0 - 2])))));
                    var_17 = ((/* implicit */long long int) var_3);
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7645092925786797229LL)) ? (((/* implicit */long long int) arr_2 [i_0 - 2] [i_0 + 1])) : (var_4)));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_14 [i_3] [7ULL] = ((/* implicit */int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)24255))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_12 [i_4]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3]))))))) : (arr_12 [i_4])));
                arr_15 [i_3] [i_3] [i_3] = ((/* implicit */int) ((min((-7645092925786797229LL), (((/* implicit */long long int) arr_6 [i_3])))) * (((/* implicit */long long int) ((/* implicit */int) min(((signed char)23), (((/* implicit */signed char) (_Bool)1))))))));
                var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((-(var_12))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-13)) || (((/* implicit */_Bool) arr_11 [8])))))))), (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_3] [i_4])) <= (((/* implicit */int) arr_10 [i_3])))))) : ((-(arr_9 [10] [i_4])))))));
                arr_16 [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) (signed char)-6))))), ((+(var_9)))));
            }
        } 
    } 
}
