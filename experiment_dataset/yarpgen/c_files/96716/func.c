/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96716
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((((((/* implicit */_Bool) var_8)) ? (-802372615847890170LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) != (((/* implicit */long long int) (~(((/* implicit */int) (short)-32))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [(signed char)19] = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))));
            arr_8 [7U] [i_1] = ((/* implicit */signed char) arr_6 [(short)8] [(short)8] [(short)8]);
        }
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 7; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_20 [i_2] [i_3 - 2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((arr_12 [i_3 + 1]) | (arr_12 [i_3 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_3 + 3]))))));
                    var_17 *= ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) arr_1 [i_2])), ((short)-29))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((max((((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2])), (arr_16 [i_2] [i_2] [i_2]))), ((~(arr_16 [i_2] [i_2] [i_2]))))))));
        var_19 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_15 [i_2] [i_2])) <= (((/* implicit */int) arr_15 [i_2] [i_2]))))) << ((+(((/* implicit */int) arr_18 [(short)4] [i_2] [i_2]))))));
        arr_21 [i_2] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) ((arr_1 [i_2]) ? (((/* implicit */int) arr_18 [i_2] [8ULL] [i_2])) : (((/* implicit */int) (short)7))))))));
    }
    var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */_Bool) ((int) var_3))) || (((/* implicit */_Bool) ((signed char) var_8)))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (short)-7))) != (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_3))))) != (((/* implicit */int) var_16)))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            {
                arr_26 [i_5] [(short)10] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)45914)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)13))))))) ? ((~(((unsigned int) arr_24 [i_5] [i_6] [18ULL])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220)))));
                var_22 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)42))))));
            }
        } 
    } 
    var_23 += ((/* implicit */short) (~(((/* implicit */int) var_15))));
}
