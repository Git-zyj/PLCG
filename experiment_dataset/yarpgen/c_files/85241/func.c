/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85241
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_18 [i_1] [i_1] [i_1 - 1] [i_2] [18LL] [(_Bool)1] [i_4] = 1688849860263936LL;
                                arr_19 [i_1] [i_3] [18LL] [i_2] [i_1] [(_Bool)1] [i_1] = (!(((/* implicit */_Bool) ((((arr_2 [i_0]) + (9223372036854775807LL))) << (((((-1688849860263937LL) + (1688849860264000LL))) - (63LL)))))));
                                var_14 -= arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_15 = ((1688849860263936LL) > (255LL));
                        var_16 = ((/* implicit */long long int) ((arr_12 [i_0] [i_5 + 1] [i_5 + 1] [i_5] [i_1]) ? (((/* implicit */int) ((_Bool) 7187827640655110093LL))) : (((/* implicit */int) arr_17 [i_1] [4LL] [i_1] [0LL] [i_1]))));
                        var_17 &= (((_Bool)1) || (((/* implicit */_Bool) -6917725687293872237LL)));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 1; i_6 < 20; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), ((!((!(arr_12 [i_5] [i_5] [i_5] [i_5] [i_0])))))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (arr_1 [i_0] [i_0])));
                            var_20 = ((/* implicit */long long int) (_Bool)1);
                        }
                        arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_15 [i_0] [i_0] [i_0] [(_Bool)1] [i_2 + 1] [i_5])))) - (arr_16 [i_1] [i_2] [i_2]));
                    }
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(-5505571385042301626LL))))));
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    arr_30 [(_Bool)1] [i_1] [i_1 - 1] [i_7] = ((arr_7 [i_0] [i_0] [i_1 + 1]) || (((/* implicit */_Bool) ((long long int) 5555935851085321797LL))));
                    arr_31 [i_0] [i_1] [i_1 - 1] [i_1] |= ((/* implicit */_Bool) -5555935851085321797LL);
                    arr_32 [i_1] [i_1] [i_1] = ((arr_5 [i_0] [i_1] [i_7]) && (((1116892707587883008LL) > (-5555935851085321798LL))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_36 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)0))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (((-(((/* implicit */int) ((_Bool) 1116892707587883008LL))))) * (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))))));
                }
                var_23 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))), ((~((-(((/* implicit */int) (_Bool)1))))))));
                var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [(_Bool)1])))) > (((((-4438045886625102380LL) + (9223372036854775807LL))) << (((5555935851085321797LL) - (5555935851085321797LL)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) ((var_13) || (((/* implicit */_Bool) var_10))));
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6028009991708330288LL)) || (((/* implicit */_Bool) 6082204463648382025LL))));
}
