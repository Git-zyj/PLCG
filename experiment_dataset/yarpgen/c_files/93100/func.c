/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93100
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) ((((unsigned int) (~(arr_0 [i_0])))) <= (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) (unsigned short)16196)))) < (var_13)))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_0 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16196))) : (4232168511386378422ULL))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (-(arr_5 [i_1 + 4])));
        arr_7 [i_1] = ((/* implicit */_Bool) ((7736675371708330137LL) - (((/* implicit */long long int) arr_5 [i_1 - 2]))));
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 20; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((-524288) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-20232)) : (((/* implicit */int) arr_8 [i_2]))))));
        arr_12 [i_2] = ((/* implicit */unsigned int) (~((~((-2147483647 - 1))))));
        var_17 = ((/* implicit */unsigned long long int) (-(((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    }
    /* vectorizable */
    for (signed char i_3 = 2; i_3 < 20; i_3 += 4) /* same iter space */
    {
        arr_15 [i_3 + 3] [i_3 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3167089555U)) ? (arr_4 [i_3 - 2] [i_3 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))) : (var_0)))) ? (((((-1939489524836056626LL) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1))))) : (((((/* implicit */long long int) var_6)) % (-7736675371708330139LL))))))));
    }
    var_19 = (((!(((/* implicit */_Bool) var_11)))) ? (1183924767386932145ULL) : (((/* implicit */unsigned long long int) -1079769617)));
    var_20 = ((/* implicit */unsigned char) ((int) var_6));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((unsigned int) arr_16 [i_4]));
        arr_19 [i_4] = (unsigned short)54135;
        var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_4]))) - (1127877722U)));
        arr_20 [i_4] [i_4] = ((/* implicit */long long int) ((((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) (unsigned char)6)) - (6))))) >> (((((/* implicit */int) arr_9 [i_4])) - (30)))));
    }
    for (long long int i_5 = 3; i_5 < 11; i_5 += 1) 
    {
        var_23 = ((/* implicit */int) ((((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63154))))) + (((((/* implicit */_Bool) arr_22 [i_5 - 2] [i_5 - 2])) ? (((/* implicit */unsigned int) var_13)) : (arr_17 [i_5 - 3] [i_5])))));
        arr_23 [i_5] = ((/* implicit */long long int) 1280378470341642941ULL);
        var_24 *= ((/* implicit */unsigned char) (-(((/* implicit */int) min(((unsigned short)26905), (((/* implicit */unsigned short) (signed char)40)))))));
        var_25 = ((/* implicit */unsigned short) min((((/* implicit */short) var_5)), (((short) ((int) -7456817674686430348LL)))));
    }
    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((long long int) ((_Bool) 3946950796621869345LL))))));
        arr_27 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_13 [i_6]) * (((/* implicit */unsigned long long int) 7736675371708330109LL))))) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_9))))))) : (min(((+(1127877740U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [11] [i_6])))))))));
        var_27 = ((/* implicit */short) ((unsigned int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0))))));
    }
    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15619))) % (4294967281U))) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_3)), (var_15))))))))))));
}
