/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88665
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
    var_15 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) arr_1 [i_1]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    var_17 += ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_0]))));
                    arr_6 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) -8244996555647653006LL);
                }
                for (short i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) var_14);
                    arr_10 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8244996555647653005LL)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-111)), (var_5)))) : (((/* implicit */int) arr_0 [i_3]))));
                    arr_11 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) var_0);
                }
                /* vectorizable */
                for (short i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */short) ((unsigned int) arr_0 [i_0]));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_20 = 8244996555647653005LL;
                        arr_19 [i_1] [i_0] = ((/* implicit */unsigned int) var_6);
                    }
                    var_21 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0]);
                    arr_20 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_0 [i_0]);
                }
                arr_21 [(short)0] [i_1] [i_1] = min((min((8244996555647653012LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3721193808U)))))), (((long long int) arr_5 [i_1] [i_1])));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_1);
    var_23 = ((/* implicit */long long int) min((var_10), (var_10)));
}
