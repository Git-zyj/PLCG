/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76708
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
    for (unsigned long long int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((18014398509481983ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((arr_1 [5LL] [i_0]) << (((((/* implicit */int) var_8)) - (193))))) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) -2616470698056091211LL)) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) < (arr_2 [i_0])))))))))) : (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((18014398509481983ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((((arr_1 [5LL] [i_0]) + (2147483647))) << (((((((/* implicit */int) var_8)) - (193))) - (2))))) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) -2616470698056091211LL)) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) < (arr_2 [i_0]))))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_10 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) ((_Bool) arr_6 [i_0 + 4] [i_1]))))), (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) ((((/* implicit */long long int) arr_0 [i_1])) > (arr_11 [i_0])))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0])))) ? (((((/* implicit */int) var_1)) - (arr_10 [i_0]))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1])) >= (var_5))))))) ? (min((-551373238534261749LL), (((((/* implicit */_Bool) -551373238534261749LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))) : (arr_11 [i_0]))))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)62920)), (1563491433))))));
                            arr_15 [i_0] [i_1] = min((-551373238534261749LL), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_3])) < (((/* implicit */int) min(((_Bool)0), ((_Bool)0))))))));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */unsigned long long int) ((((var_5) + (2147483647))) << (((((var_5) + (679022190))) - (20))))))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_12 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3] [i_0] [i_0 + 3])) : (((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1])))) : (var_5)));
                            arr_17 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_3] [i_0] [i_0 - 1] = ((/* implicit */_Bool) var_5);
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [10ULL] [i_3] [i_5] |= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (_Bool)1)))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_10 [i_0]) : (((/* implicit */int) (_Bool)1))));
                        }
                        arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((arr_1 [i_0] [i_0]) <= (0))));
                    }
                } 
            } 
        } 
    }
    var_11 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) min((var_9), (((/* implicit */unsigned long long int) (unsigned short)65535)))))) == (-1563491433)));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) & (-1834390048)))) >= (((long long int) (-2147483647 - 1))))))) < (min((16232639306549837536ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            {
                arr_30 [i_6] [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (-217228431)))) && (((/* implicit */_Bool) (unsigned char)4)))))));
                arr_31 [i_6] [9] [i_6] = ((/* implicit */unsigned char) 16232639306549837536ULL);
                arr_32 [i_6] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_6 [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6] [5ULL]))) : (0LL)))));
            }
        } 
    } 
}
