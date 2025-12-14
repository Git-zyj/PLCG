/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60981
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_20 &= ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned char) (~(arr_4 [i_1] [i_0 + 1] [i_0 + 1])));
            arr_6 [i_1] = ((/* implicit */unsigned char) ((short) var_7));
            var_21 = ((/* implicit */signed char) arr_2 [i_0] [i_0 + 1]);
            var_22 = ((/* implicit */short) ((signed char) arr_4 [i_0] [i_0 + 1] [i_1 + 3]));
        }
        arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 831604178U)) || (((/* implicit */_Bool) ((27LL) - (var_13))))));
        var_23 ^= ((((/* implicit */long long int) 1076626855)) ^ (var_14));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (short i_3 = 2; i_3 < 6; i_3 += 4) 
        {
            {
                arr_16 [i_2] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)-2142))) >= (((((/* implicit */_Bool) 12)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160))))))) ? (((((/* implicit */_Bool) 13730571304602632017ULL)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)102)), ((unsigned char)69)))) : (((/* implicit */int) arr_1 [i_3 - 2] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3] [i_3])))))));
                arr_17 [i_3] = ((/* implicit */long long int) (unsigned char)64);
                arr_18 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) < (((unsigned long long int) max((arr_10 [i_2]), (((/* implicit */long long int) (signed char)1)))))));
                arr_19 [i_2] [i_2] = min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(1060507611U)))) && ((!(((/* implicit */_Bool) var_18))))))), (var_10));
                arr_20 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1076626853)), (7206612091307482275ULL)))) && (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5)))) == (2080374784U)))));
            }
        } 
    } 
    var_24 = var_14;
    var_25 = ((/* implicit */signed char) var_12);
}
