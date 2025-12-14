/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62438
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
    var_16 = ((_Bool) var_9);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_0] [(short)6] [i_2] [i_3] [i_3] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) ((short) max((arr_2 [i_0] [i_0]), (arr_5 [i_0] [10LL] [10LL]))))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25775)) ? (-3183831946918971907LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32759)))))) || (((/* implicit */_Bool) ((long long int) 811456266347700002LL)))))));
                                var_17 = ((_Bool) ((short) -1687040517223334656LL));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */_Bool) ((((/* implicit */int) max((max(((short)-18655), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) ((arr_8 [i_0] [i_0] [i_0]) != (var_5))))))) << (((/* implicit */int) ((_Bool) max((((/* implicit */long long int) (short)27)), (arr_11 [i_0] [(short)8] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */short) max((max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1)))), (max((((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_5]))))), (((long long int) (_Bool)1))))));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_19 = ((max((arr_23 [i_5] [i_5]), (((/* implicit */long long int) arr_19 [i_6] [i_5])))) > (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_5] [i_5]))))));
            var_20 = ((/* implicit */short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5])))))) - (-8238603134565668906LL))));
        }
        for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            var_21 = (!(((/* implicit */_Bool) ((((/* implicit */int) (short)25756)) >> (((/* implicit */int) arr_20 [i_5]))))));
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) (-(max((((/* implicit */long long int) (short)12797)), (4611686018427387903LL)))));
                            arr_38 [i_5] [i_5] [i_7] [i_5] [i_5] [i_5] = ((6656786349054530905LL) | (((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_5])) & (((/* implicit */int) arr_20 [i_5]))))));
                            var_23 += ((/* implicit */_Bool) max((-52740426351393823LL), (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_5])) != (((/* implicit */int) arr_18 [i_5])))))));
                            var_24 += ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [(_Bool)1])) && (((/* implicit */_Bool) arr_18 [i_9]))))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3680341214087674328LL)))))) + (((long long int) (short)-32739))))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((long long int) (_Bool)1)))));
            var_26 -= ((/* implicit */short) var_1);
            var_27 -= ((_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-7731855997616103585LL))), (((long long int) -8238603134565668905LL))));
        }
    }
    var_28 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((max((((long long int) (_Bool)1)), (((/* implicit */long long int) var_6)))) - (18365LL)))));
}
