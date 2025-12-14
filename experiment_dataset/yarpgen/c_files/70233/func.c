/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70233
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 |= min((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (1669862230476366569ULL)))), (((/* implicit */unsigned long long int) ((var_8) / (524287)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_16 = ((/* implicit */int) ((unsigned long long int) (unsigned char)203));
                    arr_11 [i_0] [i_1 - 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_1 - 1] [i_1 - 3] [i_1 - 2]) : (((/* implicit */int) (unsigned char)0))));
                    var_17 -= ((/* implicit */unsigned long long int) ((unsigned char) var_0));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_15 [i_3] = ((int) 5886297091875290302ULL);
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)105)) % (((/* implicit */int) (unsigned char)248))));
            arr_18 [i_3] = ((/* implicit */unsigned char) ((7683358483638008091ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [17ULL] [i_4] [5ULL]) < (((/* implicit */unsigned long long int) var_12))))))));
            var_19 = ((/* implicit */_Bool) ((unsigned char) arr_14 [i_3 - 1] [i_3]));
        }
        for (signed char i_5 = 1; i_5 < 18; i_5 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (8610137408281753652LL)))) <= (((unsigned long long int) arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
            arr_21 [i_3] [i_5] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (signed char)105)))));
            arr_22 [i_3] = ((var_10) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775795LL)) ? (((/* implicit */int) (_Bool)1)) : (1521840010)))));
            var_21 = ((unsigned char) arr_0 [i_3 - 1]);
        }
        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            arr_25 [i_3] [i_3] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [i_3] [i_6] [i_6])))) ? (((((((/* implicit */int) (signed char)-105)) + (2147483647))) << (((7789153054405437502LL) - (7789153054405437502LL))))) : ((+(((/* implicit */int) var_7))))));
            var_22 = ((/* implicit */signed char) ((unsigned char) ((var_10) > (((/* implicit */unsigned long long int) 1300431389)))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_6] [i_3])) ? (((/* implicit */int) ((unsigned char) arr_13 [i_6] [i_6]))) : ((-(((/* implicit */int) arr_1 [i_3]))))));
            var_24 = ((/* implicit */unsigned char) (~(4240113339591877456ULL)));
        }
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
        var_26 *= ((/* implicit */unsigned char) (+(-1783505159)));
    }
}
