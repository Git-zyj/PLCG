/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68078
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
    var_11 = ((/* implicit */long long int) var_6);
    var_12 *= ((/* implicit */_Bool) (+(((unsigned int) var_4))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */int) arr_0 [i_0])) | (((int) arr_0 [i_0 + 1]))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 1])) > (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_0 [i_0 - 1])))))));
            var_15 = ((/* implicit */short) (~(((/* implicit */int) ((arr_3 [i_0] [i_1] [i_1]) >= (((/* implicit */long long int) arr_2 [i_1])))))));
            var_16 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_2 [8U])))));
            var_17 = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) arr_0 [i_0])))));
        }
        for (int i_2 = 2; i_2 < 9; i_2 += 1) /* same iter space */
        {
            arr_6 [i_0] [(unsigned char)4] |= ((/* implicit */long long int) ((unsigned char) ((long long int) arr_4 [i_2])));
            var_18 |= ((/* implicit */signed char) arr_0 [(_Bool)1]);
            var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [(signed char)4] [i_2]))));
            var_20 = ((/* implicit */long long int) arr_0 [(_Bool)0]);
            arr_7 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((long long int) arr_5 [i_2]));
        }
        for (int i_3 = 2; i_3 < 9; i_3 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) arr_4 [i_3 + 2]);
            arr_10 [4] [4] = arr_4 [i_0];
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+((+(arr_4 [i_0]))))))));
        }
        for (int i_4 = 2; i_4 < 9; i_4 += 1) /* same iter space */
        {
            arr_15 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) (~(arr_3 [i_0] [i_4] [i_4]))));
            arr_16 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_4]))));
        }
    }
}
