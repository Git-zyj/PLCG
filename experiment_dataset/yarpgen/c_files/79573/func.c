/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79573
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_0])))))), (max((min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_4))), (-5364972076064937808LL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_17 = ((9550979837280535939ULL) << (((9550979837280535939ULL) - (9550979837280535914ULL))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_16 [i_1] = ((/* implicit */short) ((9550979837280535939ULL) == (((/* implicit */unsigned long long int) (+(6979873400662426285LL))))));
                                var_18 = ((/* implicit */unsigned long long int) -5364972076064937808LL);
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (((!(((/* implicit */_Bool) 8895764236429015676ULL)))) ? (-8061355936995186306LL) : (((/* implicit */long long int) ((/* implicit */int) max(((short)11836), (((/* implicit */short) (_Bool)0)))))))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((((/* implicit */long long int) arr_0 [i_0])) - (8849006343482611080LL));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) var_7);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_15))));
    var_22 = ((/* implicit */unsigned long long int) -7452047996434295447LL);
    var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_1)) : (5499799157123670570ULL)))) ? ((+(1783046812860885490LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 12415344437608635068ULL))))))) ^ (max((8895764236429015677ULL), (((/* implicit */unsigned long long int) ((int) (short)21084)))))));
}
