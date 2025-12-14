/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83097
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
    for (short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_3 [i_0]))));
                    var_21 -= ((/* implicit */long long int) (+(var_10)));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_16)))))));
                    arr_8 [i_2] |= ((/* implicit */signed char) max(((_Bool)1), (((max((2147483647), (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (short)-10264))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_3 = 3; i_3 < 19; i_3 += 4) 
    {
        arr_12 [(unsigned char)12] [i_3 - 2] &= ((/* implicit */short) (_Bool)1);
        arr_13 [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) var_19))));
    }
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-13828))));
        arr_17 [(_Bool)1] [i_4] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (var_5)));
        arr_18 [(unsigned char)4] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) -275678552))))) * (((/* implicit */int) (_Bool)1))));
    }
    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (short i_6 = 2; i_6 < 19; i_6 += 2) 
        {
            for (int i_7 = 1; i_7 < 19; i_7 += 2) 
            {
                {
                    var_24 &= ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) var_16))))), (max((((/* implicit */long long int) var_7)), (8048881052667907390LL)))));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_10 [i_6 - 1]), (((/* implicit */short) arr_24 [i_6 - 2] [i_6] [i_5] [i_7 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_6 + 1]))))) : (((/* implicit */int) (!((_Bool)1))))));
                    arr_27 [i_7] = ((/* implicit */int) (_Bool)0);
                }
            } 
        } 
        arr_28 [i_5] = ((/* implicit */unsigned short) 2239621026U);
    }
}
