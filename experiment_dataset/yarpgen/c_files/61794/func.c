/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61794
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (min((((/* implicit */unsigned int) (_Bool)0)), (arr_0 [i_3 + 2] [i_0 - 1])))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1]))) : (arr_2 [i_0 - 1])))) ? (arr_2 [i_3]) : (((/* implicit */long long int) 4294967295U))));
                    }
                } 
            } 
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((-1), (((/* implicit */int) var_12))))), ((~(var_1)))))) ? (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0]))) : (9ULL))) ^ (max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (16481538896731893722ULL))))) : (((/* implicit */unsigned long long int) 68349166))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 3) /* same iter space */
            {
                arr_18 [i_0] [(signed char)10] = ((/* implicit */unsigned short) 288230376151711743LL);
                var_15 = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_5] [i_0]);
                var_16 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (3489355880893642240ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_5] [i_4] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_4])))))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 3) /* same iter space */
            {
                arr_21 [i_0 + 1] [i_4] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65024);
                arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(18446744073709551615ULL))))));
            }
            var_17 = ((/* implicit */_Bool) var_2);
            arr_23 [i_0] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0] [i_0 + 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_17 [i_0] [i_0 + 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_17 [i_0] [i_0 + 1] [i_0] [i_0 - 1]))));
        }
        arr_24 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((((/* implicit */_Bool) 4881774819603880708ULL)) ? (-3779970483347120523LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) | (arr_6 [i_0 + 1] [i_0])))));
        var_18 = ((/* implicit */short) max((max((12962226226824464858ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) var_11))));
        var_19 += ((/* implicit */short) max((((((/* implicit */_Bool) -9223372036854775807LL)) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1]))), (((/* implicit */long long int) min((arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */int) min((arr_1 [i_0 + 1]), (((/* implicit */signed char) (_Bool)1))))))))));
    }
    var_20 = -1LL;
}
