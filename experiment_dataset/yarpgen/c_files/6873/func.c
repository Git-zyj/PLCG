/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6873
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)28012)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)37510))))) && (((/* implicit */_Bool) (((~(arr_4 [i_0]))) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (515568269425264813LL))) - (27958LL))))))));
                arr_6 [i_1] [(unsigned short)8] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)37523))) : ((~(arr_1 [i_1 - 2] [1U])))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((((/* implicit */long long int) (-(var_3)))) > ((~(4395899027456LL))))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1)))) / ((+(6160506838250575495ULL))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 2; i_2 < 18; i_2 += 1) 
    {
        var_12 |= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (unsigned short)27983)) ? (var_7) : (var_4))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            for (unsigned int i_4 = 4; i_4 < 18; i_4 += 3) 
            {
                {
                    arr_15 [i_2 - 1] [i_2] [i_2] [i_4] = ((((/* implicit */_Bool) (unsigned short)37523)) ? (-5765335982185301511LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65271))));
                    arr_16 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((long long int) (unsigned short)37552));
                    arr_17 [i_2] [i_2] [i_4 - 4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28013)) | (((/* implicit */int) (unsigned short)28001))))) ? (((((/* implicit */_Bool) (unsigned short)27977)) ? (((/* implicit */unsigned long long int) var_4)) : (18446744073709551603ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)37534)) ? (1143872845) : (((/* implicit */int) (unsigned short)27988)))))));
                }
            } 
        } 
    }
}
