/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86714
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
    var_19 = ((/* implicit */signed char) (unsigned char)187);
    var_20 = ((/* implicit */unsigned long long int) (unsigned char)69);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_0 [i_0] [i_1 - 2])))))))));
            var_22 += ((/* implicit */signed char) ((((arr_3 [i_0] [i_1]) + (2147483647))) >> (((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)69)) - (((/* implicit */int) (unsigned char)198))))), (((arr_4 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))))))) - (4298493462660745108ULL)))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((min((((/* implicit */int) arr_0 [(unsigned short)3] [i_1 + 1])), (arr_3 [i_0] [i_1]))) / (arr_3 [i_0] [i_0])))), (min((((/* implicit */unsigned long long int) (unsigned char)188)), (min((arr_2 [19] [19] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)187))))))));
        }
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            arr_9 [i_2] [i_2] |= ((/* implicit */_Bool) (unsigned char)192);
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (unsigned char)69))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_14 [i_3] = ((/* implicit */int) (!(arr_11 [i_3] [i_3])));
        arr_15 [1] = ((/* implicit */unsigned short) arr_11 [i_3] [i_3]);
        var_24 = ((/* implicit */_Bool) var_13);
    }
}
