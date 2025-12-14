/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6358
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
    var_10 = var_0;
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 4134862957502138661ULL))) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        arr_11 [i_0 + 1] [6] [i_1] [6] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_0]))));
                        var_11 -= ((/* implicit */unsigned char) (~(9004123553987307370LL)));
                        arr_12 [(signed char)9] [(signed char)9] [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_9 [i_2] [i_2 + 2] [i_2 + 1] [i_2] [i_2] [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        arr_13 [i_3] [9ULL] [(unsigned short)8] [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_2 - 1] [i_2 + 2])) % (((/* implicit */int) arr_4 [i_2 + 2] [i_2 - 1]))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */unsigned int) (+((-(arr_6 [3U] [i_0 + 2] [i_0] [i_0])))));
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [10] [i_0 + 1] [i_0] [i_0 - 3] [i_0 - 2]))));
    }
    for (int i_4 = 3; i_4 < 11; i_4 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4] [i_4])) ? (min(((+(var_2))), (min((((/* implicit */int) (short)-32760)), (arr_6 [(unsigned short)2] [i_4] [i_4 + 2] [i_4 + 2]))))) : (var_2)));
        arr_17 [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */short) ((arr_1 [i_5] [(_Bool)1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113)))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5])))))) - (((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5]))) / (-9004123553987307370LL)))));
    }
    var_15 |= ((/* implicit */unsigned long long int) var_9);
}
