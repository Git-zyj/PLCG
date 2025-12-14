/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73558
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_2 [4ULL] [4ULL] = ((/* implicit */unsigned int) arr_0 [1ULL] [i_0]);
        arr_3 [i_0] &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            arr_6 [i_1 + 1] = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) arr_0 [i_0] [i_1 + 1]))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */int) (((~(4ULL))) < (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((1692741799U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49376)))))), (3216080777U))))));
        }
        arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(3216080784U))), (((unsigned int) 548040932))))) ? ((+(min((11949234035017794537ULL), (((/* implicit */unsigned long long int) arr_1 [(unsigned short)2])))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_4 [i_0]) : (arr_4 [i_0]))), (min((arr_4 [i_0]), (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) min((((int) max((((/* implicit */long long int) 4052685652U)), ((-9223372036854775807LL - 1LL))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)250))))) ? (arr_10 [i_2]) : (((/* implicit */int) (!((_Bool)0))))))));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned int) ((((unsigned long long int) max((((/* implicit */unsigned int) arr_11 [i_2])), (1078886488U)))) == (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+((-2147483647 - 1))))), (min((13U), (((/* implicit */unsigned int) arr_10 [i_2])))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
    {
        arr_17 [i_3] = ((/* implicit */unsigned int) min((arr_9 [i_3]), (((/* implicit */int) (short)32753))));
        arr_18 [7U] [i_3] = ((/* implicit */short) min((max((arr_9 [i_3]), (((/* implicit */int) ((unsigned char) arr_15 [i_3]))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) 2882246641U)) ? (0U) : (1078886518U)))))));
        arr_19 [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)30904)) ? (((/* implicit */int) (short)32754)) : (1813015567)))), (((((/* implicit */long long int) ((/* implicit */int) arr_15 [(_Bool)1]))) ^ (5171430854718946410LL))))));
    }
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
    {
        arr_24 [i_4] = ((/* implicit */unsigned char) max((3971956238U), (((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)0)), ((short)-32759))))));
        arr_25 [i_4] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((arr_16 [i_4]), (((/* implicit */int) ((_Bool) arr_20 [i_4])))))), (arr_5 [5U] [2])));
    }
    var_12 = var_6;
}
