/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94966
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
    var_18 = ((/* implicit */long long int) min(((((~(((/* implicit */int) var_17)))) << (((((6569702381475610451LL) >> (((/* implicit */int) (_Bool)1)))) - (3284851190737805218LL))))), (((/* implicit */int) ((short) max((((/* implicit */long long int) var_1)), (var_0)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) < (1220664145028401431ULL)));
        var_19 = ((/* implicit */int) (-(4037564265U)));
        arr_4 [i_0] [14ULL] = ((/* implicit */long long int) (((((((_Bool)1) ? (((/* implicit */unsigned long long int) 560631530U)) : (13690582265566768368ULL))) / (((/* implicit */unsigned long long int) (+(2147483647)))))) >= (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) 4145083465U)) ^ (8478167663890796282LL))), (((8589934591LL) & (-8589934592LL))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) (~(max((arr_5 [i_1]), (((/* implicit */unsigned int) (unsigned char)127))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (long long int i_3 = 2; i_3 < 14; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) 2131272895660025908ULL);
                    var_22 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -994705434475218703LL)) / (18446744073709551599ULL)))) ? (((((/* implicit */unsigned long long int) var_12)) / (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1384919496441088836LL))))));
                    arr_12 [i_1] [i_1] [i_1] [i_1] = max(((((((_Bool)1) ? (8223302165446544234ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))))) * (((/* implicit */unsigned long long int) ((var_0) / (var_4)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3] [i_3 + 1] [i_2])) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) & (17979214137393152LL))) : (((var_10) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
    {
        arr_17 [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
        arr_18 [i_4] [i_4] = ((unsigned char) var_1);
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((unsigned long long int) -432905643741601457LL)))));
        arr_19 [i_4] = -7LL;
    }
    var_24 = ((/* implicit */long long int) var_7);
}
