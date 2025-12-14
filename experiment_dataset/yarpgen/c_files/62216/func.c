/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62216
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 |= (+(12192989415612561772ULL));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */long long int) max((((unsigned int) var_7)), (((/* implicit */unsigned int) arr_0 [i_0]))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(-3125936906421692605LL)));
        }
    }
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            for (unsigned char i_4 = 2; i_4 < 14; i_4 += 3) 
            {
                {
                    arr_17 [i_4 - 2] [(unsigned char)10] [(short)12] [i_2 - 1] = ((/* implicit */short) ((int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) | (-3125936906421692605LL)))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((max((((15ULL) >> (((((/* implicit */int) arr_3 [(short)2] [i_3])) - (13237))))), (((/* implicit */unsigned long long int) var_14)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
                    arr_18 [i_2 + 1] [i_2 + 1] [i_4] [i_4] |= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)0)) << (((var_9) + (362864124)))))))) : ((((+(arr_7 [i_3]))) / (((arr_7 [i_3]) << (((((/* implicit */int) (unsigned char)254)) - (229))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 2; i_5 < 16; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            for (signed char i_7 = 2; i_7 < 15; i_7 += 3) 
            {
                {
                    var_18 += ((/* implicit */unsigned char) ((var_14) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                    arr_30 [i_5] [i_7] = (-(((/* implicit */int) ((unsigned char) var_3))));
                }
            } 
        } 
    } 
}
