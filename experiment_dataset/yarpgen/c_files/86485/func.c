/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86485
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 2] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2] [i_0 - 1]))) : (-1109608883492511441LL)))));
                var_12 = ((/* implicit */short) (~(-3726450370763237020LL)));
                arr_8 [i_1] = ((/* implicit */short) -7770072602159761615LL);
                var_13 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 1])))), (((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 2] [i_0 + 2]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 3; i_3 < 14; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    arr_18 [i_2] [(short)2] [0LL] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2])) ? (arr_10 [i_2] [i_3]) : (0LL)))) ? (((((/* implicit */_Bool) ((var_2) << (0LL)))) ? (1152912708513824768LL) : (((long long int) (short)13580)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_3 + 1] [i_3 - 1] [i_3 - 1])) % (((/* implicit */int) arr_17 [i_3 + 1] [i_3 - 3] [i_3 - 1])))))));
                    arr_19 [i_2] [(short)4] = ((/* implicit */short) (!(((/* implicit */_Bool) -5257257446596167424LL))));
                    arr_20 [12LL] = ((((/* implicit */_Bool) max((min((arr_5 [i_4] [4LL] [5LL]), (var_6))), ((short)16122)))) ? (-5818753328212829368LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((5926372678243361190LL) < (arr_10 [i_2] [i_3 - 1])))) != (((/* implicit */int) ((short) (-9223372036854775807LL - 1LL)))))))));
                }
            } 
        } 
        var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3726450370763237006LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)-22874)))))) ? (((/* implicit */int) ((-3881074107453045332LL) == (arr_9 [i_2])))) : (((/* implicit */int) (short)-4744)))) < (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_2] [i_2] [i_2]), ((short)-13325)))))))));
        var_15 = arr_12 [i_2] [i_2];
        var_16 ^= ((/* implicit */short) var_8);
        var_17 = ((((min((((/* implicit */long long int) arr_1 [i_2])), (var_3))) <= (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_2] [i_2] [i_2])) | (((/* implicit */int) arr_11 [i_2]))))))) ? (((arr_9 [i_2]) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)1683)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2])) ? (((/* implicit */int) ((short) (short)13))) : (((/* implicit */int) arr_11 [i_2]))))));
    }
    var_18 *= ((/* implicit */short) ((0LL) + ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5733))) : (9223372036854775807LL)))))));
}
