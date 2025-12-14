/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8393
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
    var_14 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_2)) ? (9388549307613045307ULL) : (4593911831481287403ULL))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-13104)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((((4593911831481287403ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)74))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) (unsigned short)65528)))))) : (((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)13114))))));
                arr_5 [i_0] [(signed char)16] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) >> (((max((((/* implicit */long long int) (short)-13112)), (min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) var_5)))))) - (68LL)))))) : (((/* implicit */_Bool) ((((arr_3 [i_0] [i_0]) + (9223372036854775807LL))) >> (((((max((((/* implicit */long long int) (short)-13112)), (min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) var_5)))))) - (68LL))) + (13215LL))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13112))) : (4593911831481287398ULL)))) ? (((((/* implicit */_Bool) 13753480309926361848ULL)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : ((+(-1780680589193270626LL)))))) - (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (((unsigned long long int) arr_3 [i_0] [i_0]))))));
            }
        } 
    } 
    var_15 += ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_16 -= ((/* implicit */signed char) (unsigned char)201);
        arr_9 [i_2] |= 13852832242228264218ULL;
        var_17 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_7 [i_2])))));
    }
}
