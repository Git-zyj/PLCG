/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/764
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
    var_15 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) 9492943790964679691ULL)))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] |= ((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
            var_16 = ((/* implicit */unsigned long long int) var_9);
            var_17 = ((/* implicit */long long int) (-(arr_3 [i_0] [i_1])));
        }
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 65535LL)) == (arr_1 [6LL]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))))))) : (((arr_3 [22LL] [i_0]) - (((/* implicit */unsigned long long int) var_10))))));
    }
    for (unsigned int i_2 = 4; i_2 < 10; i_2 += 1) 
    {
        arr_10 [i_2 - 4] = ((/* implicit */unsigned int) max(((-(12294205527003966198ULL))), (((/* implicit */unsigned long long int) max(((signed char)-67), ((signed char)8))))));
        arr_11 [i_2 + 1] [i_2] = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_7 [i_2 + 2])))), (((/* implicit */int) arr_0 [i_2]))));
        var_19 = ((/* implicit */unsigned long long int) ((signed char) var_5));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (signed char i_5 = 2; i_5 < 22; i_5 += 2) 
            {
                for (long long int i_6 = 1; i_6 < 22; i_6 += 4) 
                {
                    {
                        var_20 ^= ((/* implicit */long long int) arr_20 [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1]);
                        arr_23 [20U] = ((/* implicit */signed char) (~(((/* implicit */int) ((var_14) >= (2038349038U))))));
                    }
                } 
            } 
        } 
        arr_24 [i_3] = ((/* implicit */unsigned long long int) var_13);
        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_14)) | ((~(6283750867011859359ULL)))));
    }
}
