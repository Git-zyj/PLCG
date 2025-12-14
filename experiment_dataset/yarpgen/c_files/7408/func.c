/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7408
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_11 = ((((/* implicit */int) min((((/* implicit */signed char) arr_5 [i_0] [i_0] [i_2])), ((signed char)107)))) / (((arr_5 [i_2] [i_0] [i_0]) ? (((/* implicit */int) arr_5 [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_2] [i_0] [i_0])))));
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 260568488U)) ? (5451373375681016982LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42150)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_0] [(_Bool)1]))) / (11791074373915711361ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_2])))))));
                    arr_7 [i_0] [3U] [i_0] = ((/* implicit */short) 5979923107820596578LL);
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0]);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [3LL])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */int) (-(-8058386928144702589LL)));
        arr_14 [i_3] = ((/* implicit */long long int) arr_0 [8LL]);
        arr_15 [i_3] [i_3] = ((/* implicit */_Bool) ((4034398828U) ^ (260568488U)));
    }
    for (int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
    {
        var_13 += ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-94))));
        arr_18 [i_4] [i_4] |= ((/* implicit */_Bool) min((min((4232645865U), (((/* implicit */unsigned int) arr_11 [i_4] [i_4])))), (((/* implicit */unsigned int) arr_5 [i_4] [20U] [20U]))));
    }
    var_14 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (5451373375681016982LL)))), ((~(18446744073709551600ULL)))))));
    var_15 += ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) var_6)) / (var_3)))));
}
