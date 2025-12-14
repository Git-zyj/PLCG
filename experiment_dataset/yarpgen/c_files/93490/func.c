/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93490
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)112)) + (((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) (unsigned char)143)) : ((+(((/* implicit */int) (unsigned short)51729))))))));
                var_19 = ((/* implicit */short) (+(var_16)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                var_20 |= ((/* implicit */unsigned short) var_6);
                var_21 -= ((/* implicit */short) var_12);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_4 = 2; i_4 < 15; i_4 += 2) /* same iter space */
    {
        arr_13 [i_4 - 1] = arr_7 [i_4];
        var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_9)), (((var_15) ^ (((/* implicit */unsigned long long int) var_17))))));
    }
    for (signed char i_5 = 2; i_5 < 15; i_5 += 2) /* same iter space */
    {
        arr_18 [i_5 - 1] [i_5 - 2] = ((/* implicit */unsigned long long int) var_2);
        var_23 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (((-2147483647 - 1)) + (((/* implicit */int) (unsigned short)27250))))) ? (((((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5 - 1])) ? (((/* implicit */unsigned int) arr_11 [i_5 + 1])) : (var_13))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_11 [i_5]) : (arr_17 [i_5 - 2])))))));
        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) arr_8 [i_5 - 2] [i_5 - 1] [i_5 - 2])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            var_25 = ((int) (~(arr_15 [15ULL])));
            var_26 = ((/* implicit */unsigned char) 12ULL);
        }
    }
    for (signed char i_7 = 2; i_7 < 15; i_7 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (-(var_9)))) && (((/* implicit */_Bool) var_10)))))));
        var_28 = ((/* implicit */long long int) (+(((unsigned int) arr_22 [i_7 - 2] [i_7 - 1]))));
        arr_25 [i_7] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (7659603040728634517ULL))));
    }
}
