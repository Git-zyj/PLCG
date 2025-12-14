/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67174
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
    var_12 = ((/* implicit */unsigned int) ((signed char) var_0));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((27021597764222976LL) << (((/* implicit */int) (_Bool)1))));
        arr_4 [11] = ((/* implicit */_Bool) (+(((long long int) (signed char)0))));
        var_13 = ((/* implicit */unsigned short) min((min((((/* implicit */int) (!(((/* implicit */_Bool) 1963630160))))), ((~(((/* implicit */int) (unsigned short)65524)))))), ((~((~(((/* implicit */int) (unsigned char)145))))))));
        arr_5 [0U] [i_0] = arr_1 [11U];
        arr_6 [i_0] = ((/* implicit */long long int) ((18446744073709551608ULL) & (140600049401856ULL)));
    }
    for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        arr_10 [i_1 + 1] [(signed char)18] = ((/* implicit */signed char) arr_9 [4]);
        /* LoopSeq 2 */
        for (signed char i_2 = 2; i_2 < 20; i_2 += 4) /* same iter space */
        {
            arr_14 [i_2 - 2] [i_1 + 3] [i_1 - 2] = ((/* implicit */unsigned short) arr_12 [i_1 + 3]);
            var_14 = ((/* implicit */unsigned long long int) 126);
        }
        /* vectorizable */
        for (signed char i_3 = 2; i_3 < 20; i_3 += 4) /* same iter space */
        {
            arr_17 [i_1] [(signed char)9] = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1 - 1])) + (((/* implicit */int) arr_12 [i_1 + 3]))));
            arr_18 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [(unsigned short)6]))) : (7330520814248913815LL)));
            var_15 &= (-9223372036854775807LL - 1LL);
        }
    }
    var_16 &= ((/* implicit */signed char) var_9);
}
