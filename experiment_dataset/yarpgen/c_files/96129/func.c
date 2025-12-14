/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96129
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) (~((-(11533620311342648774ULL)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)1))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) arr_4 [i_1]));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23946))) : (4323659783736946922ULL)))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_3 [i_1] [i_1]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)2040)))))));
    }
    for (short i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */long long int) ((((long long int) (unsigned short)51833)) >= (((/* implicit */long long int) arr_3 [i_2] [i_2]))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            arr_14 [0LL] &= -5085210868692244115LL;
            var_19 = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) (unsigned char)255)), (arr_12 [i_2])))));
        }
    }
    for (short i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned long long int) var_14);
        var_20 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) (short)-19557)), (var_12)))));
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)49386))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_22 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 6913123762366902824ULL)) ? (((((/* implicit */_Bool) 1925116977U)) ? (var_9) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13694))))), ((+(var_9)))));
}
