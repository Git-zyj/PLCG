/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68286
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) var_1);
                    arr_10 [i_0] [i_0] [13U] [(short)5] = ((/* implicit */_Bool) var_9);
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)25020)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [8ULL] [i_4])) ? (((((/* implicit */int) (signed char)31)) + (((/* implicit */int) (short)-30678)))) : (((((/* implicit */int) var_6)) - (((/* implicit */int) var_10))))));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_10))));
                }
            } 
        } 
        arr_19 [i_3] [i_3] = ((/* implicit */unsigned int) (-(var_2)));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) var_2)) : (9664312082107750338ULL)));
        arr_20 [i_3] = ((/* implicit */long long int) (short)15210);
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            var_17 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)202)) ? (arr_22 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(short)17] [i_3])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-32064)) : (((/* implicit */int) (short)30677))))) : (arr_22 [i_6]));
            var_18 ^= ((/* implicit */_Bool) (short)30677);
            var_19 ^= ((/* implicit */unsigned int) (~(((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)43891))))));
            var_20 = ((/* implicit */unsigned char) (~(arr_21 [i_6] [i_3])));
        }
    }
}
