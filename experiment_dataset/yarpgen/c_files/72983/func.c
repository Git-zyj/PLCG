/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72983
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned int) (_Bool)1);
            var_14 = (~(arr_4 [3ULL] [i_1]));
        }
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
        {
            var_15 += ((/* implicit */_Bool) var_8);
            var_16 += ((/* implicit */long long int) min((var_3), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1)))))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (signed char i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)7] [i_6 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775798LL)))))) : ((~(arr_12 [i_0] [i_0]))))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_0 [i_6] [i_0]))));
                            arr_20 [i_0] [i_0] [i_4] [i_3] [(unsigned short)7] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned char) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)44308)))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)57251)) : (((/* implicit */int) (unsigned short)1967))))) ? (arr_0 [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [i_3]), (arr_10 [(unsigned short)10])))))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) max((7564236358974131035LL), (((/* implicit */long long int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned short)21200))) || (((/* implicit */_Bool) ((unsigned int) 524224U))))))) : (var_2)));
                        }
                    } 
                } 
            } 
            var_20 += ((/* implicit */unsigned int) ((((var_11) + (2147483647))) >> ((((((-2147483647 - 1)) - (-2147483625))) + (33)))));
        }
        arr_21 [6ULL] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0]);
    }
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((var_1) & (((/* implicit */unsigned long long int) min((var_9), (((-1LL) & (arr_12 [i_7] [i_7]))))))));
        var_22 += ((/* implicit */_Bool) arr_6 [i_7] [i_7]);
        var_23 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
    }
    var_24 = ((/* implicit */short) var_7);
}
