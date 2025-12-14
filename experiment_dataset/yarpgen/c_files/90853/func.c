/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90853
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_15))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) var_10);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) var_11);
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_2 [i_0]))));
        var_20 = ((/* implicit */_Bool) (~(3174582519U)));
    }
    for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned int) arr_6 [i_1 + 1] [i_1 + 1]);
        arr_10 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_8 [i_1 - 1]) <= (((((/* implicit */_Bool) (short)5702)) ? (1675622006U) : (arr_8 [i_1 - 1]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            arr_14 [i_1] = ((((/* implicit */int) arr_12 [i_1] [i_2 - 1] [i_1 - 3])) != (((/* implicit */int) (short)5702)));
            var_21 = ((/* implicit */unsigned int) arr_7 [i_1]);
        }
        arr_15 [i_1 - 2] [i_1] = ((/* implicit */unsigned short) ((short) ((unsigned int) (~(((/* implicit */int) var_0))))));
    }
    var_22 = ((/* implicit */unsigned int) var_17);
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 4; i_5 < 19; i_5 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2619345311U)) ? (((long long int) 1675622019U)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                    arr_24 [i_4] [i_4] = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3] [i_5 + 1]))) | (max((arr_20 [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) (short)-5702)))))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (short)-25496)))))))));
                    arr_25 [i_3] [i_4 + 1] [i_4] [i_5 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_5 - 2] [i_3])) | (((/* implicit */int) arr_12 [i_3] [i_3] [i_4 + 1]))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (-(1859994889)));
}
