/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80442
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
    var_11 = var_5;
    var_12 = max((-8146418779460379028LL), (((/* implicit */long long int) ((var_1) == (max((-8146418779460379020LL), (5232013984133713838LL)))))));
    var_13 = -5643983683836255964LL;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 = 5696182360912791796LL;
        arr_2 [i_0] = arr_1 [i_0] [i_0];
        var_15 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-1718105442553581213LL) : (var_8)))) ? (var_2) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (var_8))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 17; i_2 += 3) 
        {
            var_16 = ((var_0) | ((-9223372036854775807LL - 1LL)));
            arr_10 [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) var_5)) ? (arr_7 [i_2] [i_2] [i_2 + 1]) : (var_5));
            var_17 = (-(var_8));
            arr_11 [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_2 + 1]) : (arr_4 [i_1]));
        }
        arr_12 [i_1] = 8146418779460379020LL;
        arr_13 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1125899906842592LL))));
        /* LoopSeq 3 */
        for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
        {
            arr_18 [i_3] = arr_8 [i_3];
            var_18 = var_7;
            var_19 = -9223372036854775783LL;
        }
        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            var_20 = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -8014123122542505022LL)) ? (arr_19 [i_1] [i_1] [i_1]) : (3288080578463552394LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2594173150702662958LL)))))));
            arr_21 [i_1] [i_4] &= var_6;
            arr_22 [i_1] = arr_19 [i_1] [i_4] [i_4];
            arr_23 [17LL] = arr_15 [0LL] [i_4] [i_4];
        }
        for (long long int i_5 = 4; i_5 < 16; i_5 += 3) 
        {
            arr_27 [i_5] = var_0;
            arr_28 [i_5] = ((((/* implicit */_Bool) (~(var_9)))) ? (var_6) : (arr_19 [i_5 - 1] [i_5] [i_5]));
            arr_29 [i_5] = -1LL;
            var_21 = (+(arr_0 [i_5 + 2]));
            arr_30 [i_1] [i_5] = ((long long int) arr_4 [i_5]);
        }
        var_22 = arr_8 [12LL];
    }
}
