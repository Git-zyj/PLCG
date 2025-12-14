/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97957
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
    var_14 = 1082123024;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_15 ^= ((((/* implicit */_Bool) max((7595570401916188376ULL), (min((7007859397479359210ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) (-(-287162015)))) ? (((/* implicit */unsigned long long int) 3439782982144873727LL)) : (((((/* implicit */_Bool) 15292384901544533440ULL)) ? (7007859397479359227ULL) : (((/* implicit */unsigned long long int) 2077204365)))))) : (((/* implicit */unsigned long long int) (~(arr_2 [i_0 + 1] [i_0 + 1])))));
        arr_3 [i_0] = (-(-507149712));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((-452680214) != (-2077204369)));
                    arr_10 [i_1] [i_2] [i_1] [i_0 - 3] &= min((((((/* implicit */_Bool) 1547793471)) ? (11438884676230192382ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8668692589038723235LL)) ? (((/* implicit */long long int) 143165419)) : (var_2)))))), (((/* implicit */unsigned long long int) -8181205081968933575LL)));
                    var_16 |= ((/* implicit */int) 7417602507068979691LL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (long long int i_4 = 2; i_4 < 10; i_4 += 3) 
            {
                {
                    var_17 &= ((/* implicit */int) 4503599627370495ULL);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) 7007859397479359195ULL);
                                var_19 = ((/* implicit */unsigned long long int) (~(4267574415990780228LL)));
                                arr_20 [i_0] [10] [i_4] [i_5] [10] = ((/* implicit */long long int) (+(max((arr_13 [i_0 - 3] [i_4 + 1] [i_4]), (((/* implicit */unsigned long long int) var_3))))));
                            }
                        } 
                    } 
                    arr_21 [i_4 + 1] = min((((/* implicit */unsigned long long int) ((int) -1016091138))), (((((/* implicit */_Bool) 1736119388)) ? (((((/* implicit */_Bool) 3954585570114658225ULL)) ? (5108076347581449440ULL) : (((/* implicit */unsigned long long int) -376870562)))) : (7595570401916188376ULL))));
                    var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) min((((arr_15 [i_0] [i_3] [i_4 - 1]) / (((/* implicit */long long int) arr_2 [i_0 - 3] [i_0 - 3])))), (((/* implicit */long long int) ((int) arr_0 [i_3])))))) ? ((-(1062389863))) : (min((-1371125729), (-2077204374)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) min((-715285924), (-208748466)));
    }
    for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        var_22 = ((/* implicit */int) (~(max((5559428616277507538LL), (((/* implicit */long long int) 540440443))))));
        arr_25 [i_7] = max((((/* implicit */int) (!(((/* implicit */_Bool) 7007859397479359189ULL))))), (((((/* implicit */_Bool) 452680183)) ? (arr_24 [i_7]) : (arr_24 [i_7]))));
    }
    var_23 &= ((/* implicit */unsigned long long int) 540440444);
    var_24 = ((/* implicit */int) min((max((((/* implicit */long long int) ((var_8) != (-9223372036854775794LL)))), (var_3))), (max((var_3), (((/* implicit */long long int) -2147483622))))));
    var_25 -= ((/* implicit */unsigned long long int) var_7);
}
