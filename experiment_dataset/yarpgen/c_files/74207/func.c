/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74207
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
    var_12 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)126))));
    var_13 = ((/* implicit */unsigned int) max((min(((+(((/* implicit */int) (signed char)-110)))), ((-(((/* implicit */int) (unsigned short)65535)))))), (((/* implicit */int) var_11))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)12])) ? (1458831207U) : (max((((/* implicit */unsigned int) (_Bool)1)), (418082210U))))))));
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)34067);
            arr_8 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)25)))))));
        }
        for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_11 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [(unsigned char)12])) : (((/* implicit */int) arr_1 [i_2]))))), (((((/* implicit */_Bool) 2538363226958432995LL)) ? ((-(7415159769771458800LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0] [(unsigned char)9])))))))));
            var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_10)))) ? ((-((+(arr_5 [i_0] [i_0]))))) : (((/* implicit */long long int) 2836136070U))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_16 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_13 [i_0] [i_0 + 2] [i_3]))));
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (signed char)22))));
        }
        arr_17 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) + (7415159769771458800LL)));
        arr_18 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-45)), ((-(((/* implicit */int) arr_12 [i_0]))))))) > ((~(arr_0 [i_0 - 2])))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_21 [(unsigned char)0] [i_4] &= ((((/* implicit */_Bool) 2836136101U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_0 [i_4]));
        arr_22 [i_4] = ((/* implicit */long long int) (_Bool)0);
        arr_23 [i_4] = ((/* implicit */long long int) var_8);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_27 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((long long int) arr_25 [i_5]))))) ? (3876885068U) : ((((_Bool)1) ? (2615265887U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))));
        var_16 = ((/* implicit */_Bool) max((((/* implicit */int) (short)-32758)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (unsigned short)45034)) : (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_4 [i_5] [i_5] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    }
    var_17 = (+(((/* implicit */int) var_9)));
}
