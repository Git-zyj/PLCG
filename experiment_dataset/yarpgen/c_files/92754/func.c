/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92754
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
    for (short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned char) (+(((2080045918) + (((/* implicit */int) var_9)))))));
                arr_6 [i_0 + 4] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_4 [i_1])), (7968836814889940485ULL)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)1725)), (4137897296U)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [(signed char)10] [(unsigned char)8]))));
        arr_10 [i_2] = ((/* implicit */unsigned char) (short)32754);
        arr_11 [i_2] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_8 [i_2])) == (((/* implicit */int) arr_8 [i_2 - 1])))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_3 [i_2] [i_2 - 1] [i_2]))));
        arr_12 [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_9 [i_2 - 1] [i_2 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -1597946977)))) : (arr_7 [i_2 + 1])));
    }
    for (int i_3 = 3; i_3 < 11; i_3 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_13 [i_3]))));
        arr_16 [i_3] = ((/* implicit */short) arr_15 [i_3]);
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            for (short i_5 = 1; i_5 < 11; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) arr_14 [i_3]);
                    arr_23 [i_3 - 2] [i_3] [i_3] = ((/* implicit */short) -2147483641);
                    var_20 = ((/* implicit */unsigned short) (+(((int) ((((/* implicit */_Bool) arr_18 [i_3] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)36))) : (5911350093939202687LL))))));
                    arr_24 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_18 [i_3] [i_3]))));
                }
            } 
        } 
    }
}
