/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95968
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
    var_13 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_0])), (arr_1 [(_Bool)1] [i_0])))) && (((/* implicit */_Bool) arr_4 [i_0] [i_0])))))) > (459585084U)));
                arr_6 [i_0] [i_1] [(unsigned char)9] = ((/* implicit */unsigned char) -1994277989571854518LL);
                arr_7 [i_0] = ((/* implicit */long long int) (unsigned short)58464);
                arr_8 [i_0] [(unsigned short)6] [(signed char)8] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 17; i_2 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) arr_2 [i_2]);
        arr_12 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1994277989571854518LL)) ? (arr_9 [i_2 - 2]) : (arr_9 [i_2 + 1])));
    }
    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) min((4149178724U), (((/* implicit */unsigned int) (short)5035))));
        arr_15 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 1994277989571854518LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)5035)))) : (-1274210434)));
    }
    /* vectorizable */
    for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) /* same iter space */
    {
        var_16 -= ((/* implicit */int) -102625541883071096LL);
        var_17 |= ((/* implicit */short) (-(2031616)));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_16 [(unsigned short)4] [(_Bool)1]))));
    }
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) min((var_6), (max((((/* implicit */unsigned int) 2031621)), (var_6))))))));
}
