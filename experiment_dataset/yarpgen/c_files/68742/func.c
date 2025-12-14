/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68742
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
    var_12 = ((/* implicit */unsigned long long int) var_8);
    var_13 = ((/* implicit */long long int) ((unsigned short) ((_Bool) ((unsigned char) var_2))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [(unsigned char)7] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) max(((~(min((((/* implicit */long long int) arr_2 [i_0])), (29LL))))), ((-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_2) : (arr_4 [i_0] [i_1 - 3] [i_1 - 3])))))));
                    arr_9 [(unsigned char)15] [i_1] [i_2 + 2] = ((/* implicit */long long int) ((signed char) ((long long int) ((var_4) ? (var_9) : (0ULL)))));
                    arr_10 [i_0] [(signed char)11] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32256)) ? (min((1142007599), (((/* implicit */int) (unsigned char)6)))) : (max((((((/* implicit */_Bool) (unsigned short)126)) ? (((/* implicit */int) arr_3 [i_0] [14LL])) : (1142007599))), (((/* implicit */int) ((22ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
                    arr_11 [i_0] [(signed char)2] [i_2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)52378)) | (((/* implicit */int) var_1))))) ? ((-9223372036854775807LL - 1LL)) : (((((/* implicit */_Bool) (unsigned short)13157)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250)))))))));
                }
            } 
        } 
        arr_12 [(short)3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)30446))))) ? (arr_5 [(_Bool)1] [i_0 - 1]) : (min((18446744073709551606ULL), (((/* implicit */unsigned long long int) (short)-31703))))));
        arr_13 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 3) 
        {
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) 5885666576971203351ULL));
            arr_17 [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_3]))))) ? (((/* implicit */long long int) ((arr_15 [i_0] [i_0] [i_3 + 1]) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) var_10))))) : (365867005650329854LL)));
            arr_18 [(unsigned short)2] = ((/* implicit */unsigned long long int) ((long long int) arr_4 [i_0] [i_3 + 1] [(signed char)6]));
            arr_19 [i_0] = ((/* implicit */_Bool) (-((~(-5238910092625889835LL)))));
        }
        /* vectorizable */
        for (short i_4 = 1; i_4 < 23; i_4 += 4) 
        {
            arr_23 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_0 - 1]))));
            arr_24 [20U] = ((((/* implicit */_Bool) -1142007599)) ? (5329709292880875041ULL) : (((/* implicit */unsigned long long int) ((959846731U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2589)))))));
        }
    }
}
