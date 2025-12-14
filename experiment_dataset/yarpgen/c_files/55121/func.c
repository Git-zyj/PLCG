/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55121
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
    var_14 ^= (~(max((((long long int) (unsigned char)30)), (((((/* implicit */_Bool) var_1)) ? (var_12) : (-1LL))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -7000107879602899741LL)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned short)0))));
    var_16 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)49953)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)0)), (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))) : (3382466346759071121LL))))) : (var_11));
    var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-3382466346759071122LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3)))))) ? (((((/* implicit */_Bool) (unsigned short)49860)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (var_9)))) ? (((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_12)))) : (var_6)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_1] [12LL] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [i_0] [(unsigned short)2] [(unsigned short)6]), (-7376173100876372144LL)))) ? (var_10) : (((((/* implicit */_Bool) arr_2 [(unsigned short)7])) ? (6314277661874762420LL) : (arr_2 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6238140525967613570LL)))))) : (((-8495991019890993688LL) ^ (((((/* implicit */_Bool) 6308866928638278508LL)) ? (615398285904221256LL) : ((-9223372036854775807LL - 1LL))))))));
                arr_6 [i_1] |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_1 + 2]) : (arr_1 [i_0 + 1])))));
                var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (-1065681197673829619LL)))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) < (((/* implicit */int) arr_3 [i_1])))))));
                arr_7 [i_0] [11LL] [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [11LL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17601))) : (6661776839481698585LL)));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0 - 1] [i_1] [14LL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_11 [i_2] [i_1]), ((unsigned short)55243)))), (min(((-9223372036854775807LL - 1LL)), (-6976035665965067917LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)0))))) : (var_8)));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((long long int) min(((unsigned char)134), (arr_9 [i_0 - 1] [13LL] [i_2] [i_3])))), (max((((/* implicit */long long int) (unsigned char)121)), (min((var_9), (((/* implicit */long long int) arr_9 [i_0 + 1] [i_1 - 1] [i_2] [7LL])))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
