/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91065
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_15))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(((int) var_5)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_21 = ((/* implicit */int) (((~(((var_10) ? (((/* implicit */int) (signed char)127)) : (1587618707))))) > (arr_0 [i_0])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_0] [i_0] [2])))))));
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_16))));
            arr_7 [i_0] [(short)6] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0] [i_1]))));
        }
        for (int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_24 *= ((/* implicit */unsigned int) ((unsigned char) ((signed char) ((((/* implicit */_Bool) -1992458241)) ? (-1587618708) : (-1420661678)))));
            var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(signed char)6])) ? (((/* implicit */int) (_Bool)1)) : (531320046)))) ? (1145196542U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max((-640784041), (((/* implicit */int) arr_2 [i_2] [i_0])))))))));
            arr_12 [(unsigned char)0] &= ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) var_16)))))), (((unsigned char) arr_11 [(unsigned char)6]))));
        }
        for (int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((int) ((((/* implicit */int) arr_9 [i_3] [i_0])) & (758509804)))))));
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((signed char) -1587618708)))));
            arr_15 [i_0] [i_0] [i_3] = (+(((((((/* implicit */int) var_7)) & (var_1))) ^ (((int) 1232516110)))));
        }
        var_28 ^= ((int) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_9 [i_0] [i_0]))));
    }
    for (int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        arr_18 [i_4] = ((/* implicit */signed char) var_6);
        var_29 -= ((/* implicit */unsigned short) ((max((-1587618707), (-376548764))) | (((((/* implicit */int) arr_17 [i_4])) ^ (((/* implicit */int) arr_17 [i_4]))))));
    }
}
