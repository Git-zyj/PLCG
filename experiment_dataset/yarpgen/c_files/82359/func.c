/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82359
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
    var_15 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))), (((9007199254740992ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    var_16 = ((/* implicit */unsigned short) (-((-(var_13)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 *= ((/* implicit */unsigned int) min((max((arr_8 [i_0 + 1]), (arr_8 [i_0 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_0)))))));
                    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) var_0)), (var_14))) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_8 [i_2])))))), (((((/* implicit */_Bool) min((arr_4 [i_0 + 1] [i_2]), (((/* implicit */unsigned long long int) 2337669905U))))) ? (((/* implicit */unsigned long long int) 4288427054U)) : (arr_4 [i_0] [i_1])))));
                }
            } 
        } 
        var_19 = ((((/* implicit */_Bool) (~(arr_8 [i_0 + 1])))) ? (((min((6691371810735236984ULL), (((/* implicit */unsigned long long int) var_6)))) + (((((/* implicit */_Bool) var_4)) ? (arr_8 [i_0]) : (arr_4 [i_0 - 1] [i_0]))))) : (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_0] [i_0])) : (var_8))));
        arr_10 [i_0] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) (+(arr_8 [i_0])))) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 - 1])));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 2; i_3 < 7; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    arr_16 [i_0] [i_3 + 3] [6U] = ((/* implicit */unsigned long long int) ((((unsigned int) var_14)) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 8; i_6 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [6ULL] [(unsigned short)9] [i_3] [i_0])))));
                                var_20 -= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_2 [9U]))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4] [i_3])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 8; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 8; i_8 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) 3378782591U)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) 2147483648U)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))))));
                                arr_29 [i_3] [i_3] [i_4] [i_0 - 1] [i_8] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0 - 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned short) var_11);
}
