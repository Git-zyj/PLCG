/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73326
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
    var_16 = ((/* implicit */long long int) 1876503591U);
    var_17 = (((-(((((/* implicit */_Bool) 2418463705U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1876503591U))))) * (((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)0)))) >> (((/* implicit */int) ((short) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_1] [(short)1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 16070858265410554994ULL)) || (((/* implicit */_Bool) -3LL)))) && (((/* implicit */_Bool) var_7))));
                                var_19 = ((/* implicit */int) var_8);
                            }
                        } 
                    } 
                    arr_13 [20ULL] [i_0] [i_1 - 1] [i_1] = ((/* implicit */signed char) arr_4 [i_1] [i_1] [i_0]);
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [17ULL])) || (((/* implicit */_Bool) arr_11 [i_1] [i_2]))));
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 3] [i_1 + 2] [i_1] [i_0 + 1])) ? (var_6) : (((/* implicit */long long int) 945360140))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */long long int) ((var_15) * (var_10)))) + (((-3LL) * (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((max(((_Bool)1), ((_Bool)1))) ? (((((/* implicit */_Bool) arr_5 [i_6] [i_0])) ? (var_6) : (var_6))) : (((/* implicit */long long int) var_1)))) * (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_20 [i_0] [i_0] [i_6]))))))))))));
                    arr_21 [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_12)) ? ((~(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5])))))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) (-((-(((/* implicit */int) var_3))))));
    }
}
