/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68732
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
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) | (10994728596763643424ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)30342)) != (((/* implicit */int) (short)-32767))))), (max((((/* implicit */unsigned long long int) (unsigned short)35194)), (16134246010910454654ULL))))))))));
    var_20 = ((((/* implicit */_Bool) 2147483641)) ? (((/* implicit */int) (signed char)122)) : (min((min((((/* implicit */int) var_3)), (var_5))), (((/* implicit */int) var_16)))));
    var_21 = max((var_11), (((/* implicit */short) var_7)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) arr_5 [i_0]));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_5 [i_2])) : (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1])))))) ? ((~(min((((/* implicit */long long int) (signed char)115)), (-1LL))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned char) var_8))))), (min((((/* implicit */unsigned int) (_Bool)1)), (4059373183U))))))));
                            var_23 ^= ((/* implicit */_Bool) ((long long int) arr_10 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            arr_20 [i_1] [i_1] [2LL] [3LL] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 2147483647)) ? (16016809) : (((/* implicit */int) (_Bool)1))))));
                            arr_21 [i_0] [i_1 - 1] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_18 [i_0] [i_0]))) + (((/* implicit */int) min(((short)326), ((short)-31305))))));
                            arr_22 [i_5] [3U] [2LL] [i_0] = ((/* implicit */signed char) (+(((int) arr_4 [4LL]))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((9461929124945003727ULL), (((/* implicit */unsigned long long int) 2147483641))))) ? (((((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)141)))) : (((/* implicit */int) min((((/* implicit */signed char) arr_13 [1U] [i_1] [i_1] [1U] [(unsigned char)5])), (arr_2 [i_0])))))) : ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)30338)) : (((/* implicit */int) (unsigned char)2))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)135))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)31310))))) : (((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */unsigned long long int) -7834065272745381020LL)) : (18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) ((int) ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) : (max((var_2), (((/* implicit */unsigned long long int) (+(9223372036854775807LL))))))));
}
