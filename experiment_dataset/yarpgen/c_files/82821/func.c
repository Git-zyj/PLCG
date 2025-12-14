/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82821
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
    var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((max((677840309U), (((/* implicit */unsigned int) var_10)))), (4210936966U)))) ^ (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (7183692377942786419ULL))))));
    var_14 *= var_12;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_15 = ((/* implicit */long long int) (-(((unsigned int) var_2))));
                var_16 ^= ((/* implicit */long long int) arr_0 [i_1 + 3] [i_1 + 2]);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) ((arr_4 [i_1 + 2] [i_1 + 3] [i_1 + 3]) << (((/* implicit */int) var_2))));
                arr_8 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (arr_6 [i_1 - 1] [i_1 + 1])));
            }
            var_17 = ((/* implicit */int) arr_1 [i_0]);
            var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [1ULL] [i_1])) ? (arr_4 [i_1 - 1] [i_1] [14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_9 [i_3] [i_3] [i_0])) | (((((/* implicit */unsigned long long int) 4130002503U)) ^ (6112253893855868143ULL)))));
            arr_11 [i_3] = ((/* implicit */signed char) ((arr_4 [i_0] [i_3] [i_3]) >> (((((/* implicit */int) var_5)) - (89)))));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3] [i_0] [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))) < (((/* implicit */int) var_5))));
            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 12334490179853683479ULL))));
        }
    }
    for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned char) 164964792U);
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_9 [(_Bool)1] [i_4] [(_Bool)1]))));
    }
    for (int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_23 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_9 [8LL] [8LL] [i_5])) ? (arr_9 [(signed char)6] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5])))))));
        var_24 -= arr_0 [i_5] [i_5];
    }
}
