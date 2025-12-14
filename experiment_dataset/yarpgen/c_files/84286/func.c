/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84286
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) -1576531551735550811LL)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10)))))), (max((-1LL), (((/* implicit */long long int) -574758609))))));
                arr_9 [i_0] [5] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (short)13678))));
                arr_10 [i_0] [i_0] = ((/* implicit */int) (short)30563);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_13 = ((/* implicit */signed char) ((unsigned char) (short)1792));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 970994980U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30539))) : (18446744073709551615ULL)));
        var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-13659)) : (((/* implicit */int) (signed char)0))));
        var_16 = ((/* implicit */long long int) 0ULL);
    }
    var_17 = ((/* implicit */int) max((var_9), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)13654), (((/* implicit */short) (_Bool)0)))))) > (var_9))))));
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((2187268032722089862LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 144115188075855871LL)) || (((/* implicit */_Bool) 3660850984U))))))))));
                    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) ((_Bool) 1073741824)))))), (max((min((1048575ULL), (((/* implicit */unsigned long long int) 965948348U)))), (((((/* implicit */_Bool) 17131744548985278220ULL)) ? (12567815652285315681ULL) : (((/* implicit */unsigned long long int) -5))))))));
                    arr_24 [i_3] [i_4] [(unsigned char)7] = ((/* implicit */long long int) min((((((/* implicit */int) (signed char)17)) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)48)), ((unsigned short)31))))));
                    var_20 = ((/* implicit */int) min((max((((/* implicit */unsigned int) min(((_Bool)0), ((_Bool)1)))), (524288U))), (((((/* implicit */_Bool) min((((/* implicit */long long int) 33554431U)), (-7384686328362338302LL)))) ? (0U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0)))))))));
                }
            } 
        } 
    } 
}
